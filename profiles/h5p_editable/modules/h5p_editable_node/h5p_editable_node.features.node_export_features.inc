<?php

/**
 * @file
 * h5p_editable_node.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function h5p_editable_node_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disable\' => \'9\',
      \'embed_type\' => \'div\',
      \'files\' => array(),
      \'filtered\' => \'{}\',
      \'h5p_slug\' => \'a-question\',
      \'json_content\' => \'{}\',
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'main_library\' => array(
        \'id\' => \'57\',
        \'name\' => \'H5P.QuestionSet\',
        \'majorVersion\' => \'1\',
        \'minorVersion\' => \'17\',
        \'embedTypes\' => \'iframe\',
        \'fullscreen\' => \'0\',
      ),
      \'main_library_id\' => \'57\',
      \'menu\' => NULL,
      \'metadata\' => array(
        \'license\' => \'U\',
        \'title\' => \'hello\',
      ),
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'hello\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'h5p_content\',
      \'uid\' => \'1\',
      \'uuid\' => \'582c46e3-a486-4cb3-866d-a6273e21220a\',
      \'vid\' => NULL,
      \'vuuid\' => \'165e2cff-781e-46e8-bb1b-38215f6de3f8\',
    ),
)',
);
  return $node_export;
}
