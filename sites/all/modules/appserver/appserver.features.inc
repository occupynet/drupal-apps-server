<?php
/**
 * @file
 * appserver.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appserver_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function appserver_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function appserver_node_info() {
  $items = array(
    'app' => array(
      'name' => t('App'),
      'base' => 'node_content',
      'description' => t('This is an App that is hosted in the App Server. An App is a container that can have many releases.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'app_release' => array(
      'name' => t('App Release'),
      'base' => 'node_content',
      'description' => t('This is a Release of a App that is hosted in the App Server'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
