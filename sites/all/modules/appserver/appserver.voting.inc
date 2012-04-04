<?php
/**
 *  Provides an interface for voting on apps
 *  Requires votingapi
 */

/**
 *  Record a vote using voting api
 *  Callback from the menu
 *  @param $machine_name - the machine name of the App
 *  @param $vote - 0-5, the vote
 *  @return NULL - but outputs json response
 */
function appserver_voting_vote ($machine_name, $vote) {
  //get the app by machine name
  $query = new EntityFieldQuery();
  $app = $query
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'app')
      ->fieldCondition('field_machine_name', 'value', $machine_name, '=')
      ->execute();

  if(!empty($app['node'])) {
    //just grab the first one
    //$app = current($app);
    $app = current($app['node']);
    // make sure the vote is numeric, positive and 100 or less - using a percentage
    if (!is_numeric($vote) || $vote > 100 || $vote < 0) {
      appserver_voting_return_error('Invalid Vote', 'Vote was either not numeric or greater than 100');
    } else {
      //get our client id and use this as our unique identifier - if it isn't passed, used the ip address
      //should we not allow a vote without a client id?
      $source = isset($_REQUEST['client_id']) ? $_REQUEST['client_id'] : ip_address(); 

      $vote = array(
        'entity_type' => 'node',
        'entity_id' => $app->nid,
        'value' => $vote,
        'vote_source' => $source,
      );
      $votes = array($vote);

      //create the criteria - we just want to key on the vote source and the app
      $criteria = array(
        'vote_source' => $source,
        'entity_id' => $app->nid,
      );
      //set the anon window to -1 so it will get ignored, then set it back
      $anon_window = variable_get('votingapi_anonymous_window', 3600);

      variable_set('votingapi_anonymous_window', -1);
      $results = votingapi_set_votes($votes, $criteria);
      variable_set('votingapi_anonymous_window', $anon_window);
      
      //format the results - first normalize to be like the return from votingapi_recalculate_results
      $results = $results['node'][$app->nid];
      $results = _appserver_voting_format_results($results);

      appserver_voting_return_status('Vote Successfull', $results);
    }
  } else {
    appserver_voting_return_error('Invalid App', 'No app found with that name');
  }
}

/**
 *  Return a json error if the voting failed
 */
function appserver_voting_return_error ($error, $message) {
  drupal_json_output(array(
      'status' => 'Error', 
      'error' => $error, 
      'message' => $message,
  ));
}
/**
 *  Return a message as json
 */
function appserver_voting_return_status ($status, $message) {
  drupal_json_output(array(
    'status' => $status,
    'message' => $message,
  ));
}

/**
 *  Utility function to retrieve the current vote total for an app
 *  @param nid - the nid of the app to get the data for
 *  @return an array in the form
 *    array(
 *      'count' => 54,
 *      'average' => 4,
 *    )
 */
function appserver_voting_get_votes($nid) {
  $results = votingapi_recalculate_results('node', $nid);
  $results = _appserver_voting_format_results($results);
  return $results;
}

/**
 *  Get the app node from a release and calculate the results
 *  @return same as appserver_voting_get_votes
 *  @see appserver_voting_get_votes
 */
function appserver_voting_get_votes_for_release($nid) {
  
  $query = new EntityFieldQuery();
  $app = $query
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'app')
      ->fieldCondition('field_app_releases', 'nid', $nid, '=')
      ->execute();

  if(!empty($app['node'])){
    $result = appserver_voting_get_votes(key($app['node']));
  } else {
    //just generate empty results
    $result = _appserver_voting_format_results(array());
  }

  return $result;
}

/**
 *  Utility function to reformat the results into an easier to digest form
 */
function _appserver_voting_format_results($results) {
  $ret = array();
  if(!empty($results)){
    foreach($results as $r){
      switch ($r['function']) {
        case 'count' :
          $ret['count'] = (int) $r['value']; //unsure if we need this cast, seems to me to be cleaner
        break;
        case 'average' :
          $ret['average'] = $r['value'];
        break;
      }
    }
  }
  //no votes found
  if(empty($ret)){
    $ret = array(
      'count' => 0,
      'average' => 0,
    );
  }
  return $ret;
}
