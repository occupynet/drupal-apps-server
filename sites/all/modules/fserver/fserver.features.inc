<?php
/**
 * @file
 * fserver.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fserver_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fserver_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function fserver_node_info() {
  $items = array(
    'fserver_distro' => array(
      'name' => t('Distribution'),
      'base' => 'node_content',
      'description' => t('A feature distribution page. Provides the drush make commands and releases for download.'),
      'has_title' => '1',
      'title_label' => t('Distribution'),
      'help' => '',
    ),
    'fserver_project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('A feature project page. Provides a summary of project information and releases for download.'),
      'has_title' => '1',
      'title_label' => t('Project'),
      'help' => '',
    ),
    'fserver_release' => array(
      'name' => t('Release'),
      'base' => 'node_content',
      'description' => t('A single release package for a feature.'),
      'has_title' => '1',
      'title_label' => t('Release'),
      'help' => '',
    ),
  );
  return $items;
}
