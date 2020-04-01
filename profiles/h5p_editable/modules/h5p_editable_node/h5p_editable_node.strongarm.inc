<?php

/**
 * @file
 * h5p_editable_node.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function h5p_editable_node_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_h5p_content';
  $strongarm->value = array();
  $export['menu_options_h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_h5p_content';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_h5p_content';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_h5p_content';
  $strongarm->value = '0';
  $export['node_preview_h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_h5p_content';
  $strongarm->value = 0;
  $export['node_submitted_h5p_content'] = $strongarm;

  return $export;
}
