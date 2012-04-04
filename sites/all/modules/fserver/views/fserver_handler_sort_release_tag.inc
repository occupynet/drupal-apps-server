<?php
// $Id$

/**
 * Sort handler for release tag.
 */
class fserver_handler_sort_release_tag extends views_handler_sort {
  /**
   * Called to add the sort to a query.
   */
  function query() {
    // This is not a pretty port but don't know the best way yet.
    // TODO: Remove hard coding.
    $table = 'node_data_field_fserver_project';
    $core_alias = $this->query->ensure_table('field_data_field_fserver_api', $this->relationship);
    $noextra_alias = $this->query->ensure_table('field_data_field_fserver_versionextra', $this->relationship);
    $major_alias = $this->query->ensure_table('field_data_field_fserver_versionmajor', $this->relationship);
    $patch_alias = $this->query->ensure_table('field_data_field_fserver_versionpatch', $this->relationship);
    $extratype_alias = $this->query->ensure_table('field_data_field_fserver_versionextratype', $this->relationship);
    $extranum_alias = $this->query->ensure_table('field_data_field_fserver_versionextranum', $this->relationship);


    // Order by:
    // 1. API version (e.g. 6.x before 5.x).
    // 2. no_extra pseudo-field (e.g. 2.0 before 2.0-beta1).
    // 3. versionmajor (2.x before 1.x).
    // 4. versionpatch (2.1 before 2.0).
    // 5. versionextra stuff (2.1-beta1 before 2.1-alpha1).

    // 1. API.
    $this->query->add_orderby($core_alias, 'field_fserver_api_value', $this->options['order']);

    // 2.
    $this->query->add_field(NULL, "IF ({$noextra_alias}.field_fserver_versionextra_value IS NULL, 1, 0)", "{{$noextra_alias}}_no_extra");
    $this->query->add_orderby(NULL, NULL, $this->options['order'], "{$noextra_alias}_no_extra");

    // 3-5.
    $fields = array(
      'major_alias' => 'field_fserver_versionmajor',
      'patch_alias' => 'field_fserver_versionpatch',
      'extratype_alias' => 'field_fserver_versionextratype',
      'extranum_alias' => 'field_fserver_versionextranum',
    );
    foreach ($fields as $table => $field) {
      $this->query->add_orderby(${$table}, $field . '_value', $this->options['order']);
    }
  }
}
