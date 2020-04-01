<?php

/**
 * @file
 * h5p_editable_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function h5p_editable_node_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
