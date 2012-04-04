<?php

class fserver_handler_field_mdhash extends views_handler_field {
  function allow_advanced_render() {
    return FALSE;
  }

  function render($values) {
    $filepath = $values->{$this->field_alias};
    $local_filepath = drupal_realpath($filepath);
    if (file_exists($local_filepath)) {
      $contents = file_get_contents($local_filepath);
      return md5($contents);
    }
  }
}
