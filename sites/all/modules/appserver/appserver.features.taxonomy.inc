<?php
/**
 * @file
 * appserver.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function appserver_taxonomy_default_vocabularies() {
  return array(
    'server_type' => array(
      'name' => 'Server Type',
      'machine_name' => 'server_type',
      'description' => 'This allows for various App Server Types (e.g. Prod, QA, Stage, Dev)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
