<?php
/**
 * @file
 * fserver.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fserver_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'fserver_projects';
  $view->description = 'FServer Projects and Distributions listing';
  $view->tag = 'fserver';
  $view->base_table = 'node';
  $view->human_name = 'Projects and Distributions';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects and Distributions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fserver_distro' => 'fserver_distro',
    'fserver_project' => 'fserver_project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fserver';
  $export['fserver_projects'] = $view;

  $view = new view;
  $view->name = 'fserver_release_lookup';
  $view->description = 'FServer Release Lookup';
  $view->tag = 'fserver';
  $view->base_table = 'node';
  $view->human_name = 'Release Lookup';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Contextual filter: Content: Project (field_fserver_project) */
  $handler->display->display_options['arguments']['field_fserver_project_nid']['id'] = 'field_fserver_project_nid';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['table'] = 'field_data_field_fserver_project';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['field'] = 'field_fserver_project_nid';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_fserver_project_nid']['not'] = 0;
  /* Contextual filter: Content: Core compatibility (field_fserver_api) */
  $handler->display->display_options['arguments']['field_fserver_api_value']['id'] = 'field_fserver_api_value';
  $handler->display->display_options['arguments']['field_fserver_api_value']['table'] = 'field_data_field_fserver_api';
  $handler->display->display_options['arguments']['field_fserver_api_value']['field'] = 'field_fserver_api_value';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_api_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_fserver_api_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['break_phrase'] = 0;
  /* Contextual filter: Content: Extra version (field_fserver_versionextra) */
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['id'] = 'field_fserver_versionextra_value';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['table'] = 'field_data_field_fserver_versionextra';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['field'] = 'field_fserver_versionextra_value';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_fserver_versionextra_value']['break_phrase'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fserver_release' => 'fserver_release',
  );
  $export['fserver_release_lookup'] = $view;

  $view = new view;
  $view->name = 'fserver_releases';
  $view->description = 'Fserver Project Releases';
  $view->tag = 'fserver';
  $view->base_table = 'node';
  $view->human_name = 'Releases';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Releases';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Release';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filesize']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filesize']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filesize']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filesize']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filesize']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filesize']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filesize']['hide_alter_empty'] = 0;
  /* Field: Content: Package */
  $handler->display->display_options['fields']['field_fserver_file']['id'] = 'field_fserver_file';
  $handler->display->display_options['fields']['field_fserver_file']['table'] = 'field_data_field_fserver_file';
  $handler->display->display_options['fields']['field_fserver_file']['field'] = 'field_fserver_file';
  $handler->display->display_options['fields']['field_fserver_file']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['text'] = '<a href=\'[field_fserver_file]\'>Download</a> ([filesize])';
  $handler->display->display_options['fields']['field_fserver_file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_fserver_file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_file']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fserver_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_fserver_file']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Release notes';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j Y';
  /* Contextual filter: Content: Project (field_fserver_project) */
  $handler->display->display_options['arguments']['field_fserver_project_nid']['id'] = 'field_fserver_project_nid';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['table'] = 'field_data_field_fserver_project';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['field'] = 'field_fserver_project_nid';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_fserver_project_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_fserver_project_nid']['validate_options']['types'] = array(
    'fserver_distro' => 'fserver_distro',
    'fserver_project' => 'fserver_project',
  );
  $handler->display->display_options['arguments']['field_fserver_project_nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['field_fserver_project_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_fserver_project_nid']['not'] = 0;
  /* Contextual filter: Content: Core compatibility (field_fserver_api) */
  $handler->display->display_options['arguments']['field_fserver_api_value']['id'] = 'field_fserver_api_value';
  $handler->display->display_options['arguments']['field_fserver_api_value']['table'] = 'field_data_field_fserver_api';
  $handler->display->display_options['arguments']['field_fserver_api_value']['field'] = 'field_fserver_api_value';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_api_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_fserver_api_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['break_phrase'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fserver_release' => 'fserver_release',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/releases';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Releases';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'recommended');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommended Releases';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fserver_release' => 'fserver_release',
  );
  /* Filter criterion: Content: Recommended (field_fserver_recommended) */
  $handler->display->display_options['filters']['field_fserver_recommended_value']['id'] = 'field_fserver_recommended_value';
  $handler->display->display_options['filters']['field_fserver_recommended_value']['table'] = 'field_data_field_fserver_recommended';
  $handler->display->display_options['filters']['field_fserver_recommended_value']['field'] = 'field_fserver_recommended_value';
  $handler->display->display_options['filters']['field_fserver_recommended_value']['value'] = array(
    1 => '1',
  );
  $export['fserver_releases'] = $view;

  $view = new view;
  $view->name = 'fserver_updates';
  $view->description = 'FServer XML lookup';
  $view->tag = 'fserver';
  $view->base_table = 'node';
  $view->human_name = 'Updates';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Project (field_fserver_project) */
  $handler->display->display_options['relationships']['field_fserver_project_nid']['id'] = 'field_fserver_project_nid';
  $handler->display->display_options['relationships']['field_fserver_project_nid']['table'] = 'field_data_field_fserver_project';
  $handler->display->display_options['relationships']['field_fserver_project_nid']['field'] = 'field_fserver_project_nid';
  $handler->display->display_options['relationships']['field_fserver_project_nid']['label'] = 'Project';
  $handler->display->display_options['relationships']['field_fserver_project_nid']['required'] = 1;
  $handler->display->display_options['relationships']['field_fserver_project_nid']['delta'] = '-1';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['required'] = 1;
  /* Field: Content: Core compatibility */
  $handler->display->display_options['fields']['field_fserver_api']['id'] = 'field_fserver_api';
  $handler->display->display_options['fields']['field_fserver_api']['table'] = 'field_data_field_fserver_api';
  $handler->display->display_options['fields']['field_fserver_api']['field'] = 'field_fserver_api';
  $handler->display->display_options['fields']['field_fserver_api']['label'] = 'Core';
  $handler->display->display_options['fields']['field_fserver_api']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_api']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_api']['field_api_classes'] = 0;
  /* Field: Content: Extra version */
  $handler->display->display_options['fields']['field_fserver_versionextra']['id'] = 'field_fserver_versionextra';
  $handler->display->display_options['fields']['field_fserver_versionextra']['table'] = 'field_data_field_fserver_versionextra';
  $handler->display->display_options['fields']['field_fserver_versionextra']['field'] = 'field_fserver_versionextra';
  $handler->display->display_options['fields']['field_fserver_versionextra']['label'] = 'Extra Version';
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_versionextra']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionextra']['field_api_classes'] = 0;
  /* Field: Content: Major version */
  $handler->display->display_options['fields']['field_fserver_versionmajor']['id'] = 'field_fserver_versionmajor';
  $handler->display->display_options['fields']['field_fserver_versionmajor']['table'] = 'field_data_field_fserver_versionmajor';
  $handler->display->display_options['fields']['field_fserver_versionmajor']['field'] = 'field_fserver_versionmajor';
  $handler->display->display_options['fields']['field_fserver_versionmajor']['label'] = 'Major Version';
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_versionmajor']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Machine name */
  $handler->display->display_options['fields']['field_fserver_name']['id'] = 'field_fserver_name';
  $handler->display->display_options['fields']['field_fserver_name']['table'] = 'field_data_field_fserver_name';
  $handler->display->display_options['fields']['field_fserver_name']['field'] = 'field_fserver_name';
  $handler->display->display_options['fields']['field_fserver_name']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['field_fserver_name']['label'] = '';
  $handler->display->display_options['fields']['field_fserver_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fserver_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_name']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Project Url';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['filesize']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filesize']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filesize']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['filesize']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filesize']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filesize']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filesize']['hide_alter_empty'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Release Url';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: File: MD5 hash */
  $handler->display->display_options['fields']['mdhash']['id'] = 'mdhash';
  $handler->display->display_options['fields']['mdhash']['table'] = 'file_managed';
  $handler->display->display_options['fields']['mdhash']['field'] = 'mdhash';
  $handler->display->display_options['fields']['mdhash']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['mdhash']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mdhash']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mdhash']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mdhash']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mdhash']['hide_alter_empty'] = 0;
  /* Field: Content: Recommended */
  $handler->display->display_options['fields']['field_fserver_recommended']['id'] = 'field_fserver_recommended';
  $handler->display->display_options['fields']['field_fserver_recommended']['table'] = 'field_data_field_fserver_recommended';
  $handler->display->display_options['fields']['field_fserver_recommended']['field'] = 'field_fserver_recommended';
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_recommended']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_recommended']['field_api_classes'] = 0;
  /* Field: Content: Security release */
  $handler->display->display_options['fields']['field_fserver_security']['id'] = 'field_fserver_security';
  $handler->display->display_options['fields']['field_fserver_security']['table'] = 'field_data_field_fserver_security';
  $handler->display->display_options['fields']['field_fserver_security']['field'] = 'field_fserver_security';
  $handler->display->display_options['fields']['field_fserver_security']['label'] = 'Security';
  $handler->display->display_options['fields']['field_fserver_security']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_security']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_security']['field_api_classes'] = 0;
  /* Field: Content: Packaging Method */
  $handler->display->display_options['fields']['field_fserver_method']['id'] = 'field_fserver_method';
  $handler->display->display_options['fields']['field_fserver_method']['table'] = 'field_data_field_fserver_method';
  $handler->display->display_options['fields']['field_fserver_method']['field'] = 'field_fserver_method';
  $handler->display->display_options['fields']['field_fserver_method']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['field_fserver_method']['label'] = 'Packaging';
  $handler->display->display_options['fields']['field_fserver_method']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_method']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_method']['field_api_classes'] = 0;
  /* Field: Content: Redirect URL (for legacy projects) */
  $handler->display->display_options['fields']['field_fserver_redirect']['id'] = 'field_fserver_redirect';
  $handler->display->display_options['fields']['field_fserver_redirect']['table'] = 'field_data_field_fserver_redirect';
  $handler->display->display_options['fields']['field_fserver_redirect']['field'] = 'field_fserver_redirect';
  $handler->display->display_options['fields']['field_fserver_redirect']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['field_fserver_redirect']['label'] = 'Redirect';
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_redirect']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_redirect']['field_api_classes'] = 0;
  /* Field: Content: Repository URL */
  $handler->display->display_options['fields']['field_fserver_repository']['id'] = 'field_fserver_repository';
  $handler->display->display_options['fields']['field_fserver_repository']['table'] = 'field_data_field_fserver_repository';
  $handler->display->display_options['fields']['field_fserver_repository']['field'] = 'field_fserver_repository';
  $handler->display->display_options['fields']['field_fserver_repository']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['field_fserver_repository']['label'] = 'Repository';
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_repository']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_repository']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_fserver_type']['id'] = 'field_fserver_type';
  $handler->display->display_options['fields']['field_fserver_type']['table'] = 'field_data_field_fserver_type';
  $handler->display->display_options['fields']['field_fserver_type']['field'] = 'field_fserver_type';
  $handler->display->display_options['fields']['field_fserver_type']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['fields']['field_fserver_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fserver_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fserver_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Release tag */
  $handler->display->display_options['sorts']['release_tag']['id'] = 'release_tag';
  $handler->display->display_options['sorts']['release_tag']['table'] = 'views';
  $handler->display->display_options['sorts']['release_tag']['field'] = 'release_tag';
  $handler->display->display_options['sorts']['release_tag']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Machine name (field_fserver_name) */
  $handler->display->display_options['arguments']['field_fserver_name_value']['id'] = 'field_fserver_name_value';
  $handler->display->display_options['arguments']['field_fserver_name_value']['table'] = 'field_data_field_fserver_name';
  $handler->display->display_options['arguments']['field_fserver_name_value']['field'] = 'field_fserver_name_value';
  $handler->display->display_options['arguments']['field_fserver_name_value']['relationship'] = 'field_fserver_project_nid';
  $handler->display->display_options['arguments']['field_fserver_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fserver_name_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_name_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_fserver_name_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_fserver_name_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_fserver_name_value']['break_phrase'] = 0;
  /* Contextual filter: Content: Core compatibility (field_fserver_api) */
  $handler->display->display_options['arguments']['field_fserver_api_value']['id'] = 'field_fserver_api_value';
  $handler->display->display_options['arguments']['field_fserver_api_value']['table'] = 'field_data_field_fserver_api';
  $handler->display->display_options['arguments']['field_fserver_api_value']['field'] = 'field_fserver_api_value';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fserver_api_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fserver_api_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fserver_api_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_fserver_api_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_fserver_api_value']['break_phrase'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fserver_release' => 'fserver_release',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'updatexml';
  $handler->display->display_options['style_options']['project'] = array(
    'title' => 'title',
    'short_name' => 'field_fserver_name',
    'api_version' => 'field_fserver_api',
    'link' => 'nid',
    'type' => 'field_fserver_type',
    'redirect' => 'field_fserver_redirect',
    'sourcecode_type' => 'field_fserver_type',
    'sourcecode_uri' => 'field_fserver_repository',
  );
  $handler->display->display_options['style_options']['release'] = array(
    'version_major' => 'field_fserver_versionmajor',
    'version_patch' => 'field_fserver_versionextra',
    'version_extra' => 'field_fserver_versionextra',
    'release_link' => 'nid_1',
    'download_link' => 'uri',
    'date' => 'created',
    'mdhash' => 'mdhash',
    'filesize' => 'filesize',
    'security' => 'field_fserver_security',
    'recommended' => 'field_fserver_recommended',
  );
  $handler->display->display_options['path'] = 'fserver/%/%';
  $export['fserver_updates'] = $view;

  return $export;
}
