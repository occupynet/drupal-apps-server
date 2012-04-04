<?php
define('APPSERVER_MANIFEST_VERSION', 1.0);
/**
 *  Take a taxonomy term id 
 *  
 *  find all the nodes that are tagged with it and add their app information to the manifest
 *  Also take data from the fields on that node and add that data also
 */
function appserver_create_manifest($tid){
  //load the taxonomy term and all its fields
  $term = taxonomy_term_load($tid);
  if(!$term){
    return;
  }
  //figure out the right language to user
  $site_lang = $GLOBALS['language_content']->language;
  $tlang = isset($term->field_featured_app[$site_lang]) ? $site_lang : LANGUAGE_NONE;
  
  if (isset($term->field_featured_app[$tlang][0]['nid'])) {
    //get the data we need off of the term
    $featured = $term->field_featured_app[$tlang][0]['nid'];
    $featured = node_load($featured)->field_machine_name[$tlang][0]['safe_value'];
  }
   
  $version =  $term->field_core_version[$tlang][0]['value'];
    
  //load all the nodes tagged with this term of type app_release
  $nodes = taxonomy_select_nodes($tid, FALSE);
  //TODO: Make some of these things objects
  $manifest = array(
    'distro' => array(
      'core' => $version
    ),
    'featured app' => $featured,
    'manifest version' => APPSERVER_MANIFEST_VERSION,
    'apps' => array()
  );
  
  $cur = 0;  
  foreach($nodes as $node){
    $node = node_load($node);

    $lang = isset($node->field_app_manifest[$node->language]) ? $node->language : LANGUAGE_NONE;
    
    $manifest['apps'][$cur] =  (object)drupal_parse_info_format($node->field_app_manifest[$lang][0]['value']);
    $screenshots = $node->field_app_screenshot[$lang];
    $logo = $node->field_app_logo[$lang][0];

    $manifest['apps'][$cur]->screenshots = array();
    foreach ($screenshots as $screenshot) {
    	$manifest['apps'][$cur]->screenshots[] = url(file_create_url($screenshot['uri']),array("absolute" => TRUE)) ;            
    }
    $manifest['apps'][$cur]->logo = url(file_create_url($logo['uri']),array("absolute" => TRUE)) ;            
    
    //add in the voting results
    $manifest['apps'][$cur]->rating = appserver_voting_get_votes_for_release($node->nid);

    $cur++;
  }
  
  return $manifest;
}
