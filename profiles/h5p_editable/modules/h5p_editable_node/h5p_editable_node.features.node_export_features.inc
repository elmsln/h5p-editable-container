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
      \'filtered\' => "{\\"media\\":{\\"disableImageZooming\\":false},\\"answers\\":[{\\"correct\\":true,\\"tipsAndFeedback\\":{\\"tip\\":\\"\\",\\"chosenFeedback\\":\\"\\",\\"notChosenFeedback\\":\\"\\"},\\"text\\":\\"<div>Yes, finally.<\\\\/div>\\\\n\\"},{\\"correct\\":false,\\"tipsAndFeedback\\":{\\"tip\\":\\"\\",\\"chosenFeedback\\":\\"\\",\\"notChosenFeedback\\":\\"\\"},\\"text\\":\\"<div>Not actually sure..<\\\\/div>\\\\n\\"},{\\"correct\\":false,\\"tipsAndFeedback\\":{\\"tip\\":\\"\\",\\"chosenFeedback\\":\\"\\",\\"notChosenFeedback\\":\\"\\"},\\"text\\":\\"<div>No<\\\\/div>\\\\n\\"}],\\"overallFeedback\\":[{\\"from\\":0,\\"to\\":100}],\\"behaviour\\":{\\"enableRetry\\":true,\\"enableSolutionsButton\\":true,\\"enableCheckButton\\":true,\\"type\\":\\"auto\\",\\"singlePoint\\":false,\\"randomAnswers\\":true,\\"showSolutionsRequiresInput\\":true,\\"confirmCheckDialog\\":false,\\"confirmRetryDialog\\":false,\\"autoCheck\\":false,\\"passPercentage\\":100,\\"showScorePoints\\":true},\\"UI\\":{\\"checkAnswerButton\\":\\"Check\\",\\"showSolutionButton\\":\\"Show solution\\",\\"tryAgainButton\\":\\"Retry\\",\\"tipsLabel\\":\\"Show tip\\",\\"scoreBarLabel\\":\\"You got :num out of :total points\\",\\"tipAvailable\\":\\"Tip available\\",\\"feedbackAvailable\\":\\"Feedback available\\",\\"readFeedback\\":\\"Read feedback\\",\\"wrongAnswer\\":\\"Wrong answer\\",\\"correctAnswer\\":\\"Correct answer\\",\\"shouldCheck\\":\\"Should have been checked\\",\\"shouldNotCheck\\":\\"Should not have been checked\\",\\"noInput\\":\\"Please answer before viewing the solution\\"},\\"confirmCheck\\":{\\"header\\":\\"Finish ?\\",\\"body\\":\\"Are you sure you wish to finish ?\\",\\"cancelLabel\\":\\"Cancel\\",\\"confirmLabel\\":\\"Finish\\"},\\"confirmRetry\\":{\\"header\\":\\"Retry ?\\",\\"body\\":\\"Are you sure you wish to retry ?\\",\\"cancelLabel\\":\\"Cancel\\",\\"confirmLabel\\":\\"Confirm\\"},\\"question\\":\\"<p>We\'d love to know, is this working?<\\\\/p>\\\\n\\"}",
      \'h5p_slug\' => \'is-it-working\',
      \'json_content\' => "{\\"media\\":{\\"disableImageZooming\\":false,\\"type\\":{\\"params\\":{}}},\\"answers\\":[{\\"correct\\":true,\\"tipsAndFeedback\\":{\\"tip\\":\\"\\",\\"chosenFeedback\\":\\"\\",\\"notChosenFeedback\\":\\"\\"},\\"text\\":\\"<div>Yes, finally.<\\\\/div>\\\\n\\"},{\\"correct\\":false,\\"tipsAndFeedback\\":{\\"tip\\":\\"\\",\\"chosenFeedback\\":\\"\\",\\"notChosenFeedback\\":\\"\\"},\\"text\\":\\"<div>Not actually sure..<\\\\/div>\\\\n\\"},{\\"correct\\":false,\\"tipsAndFeedback\\":{\\"tip\\":\\"\\",\\"chosenFeedback\\":\\"\\",\\"notChosenFeedback\\":\\"\\"},\\"text\\":\\"<div>No<\\\\/div>\\\\n\\"}],\\"overallFeedback\\":[{\\"from\\":0,\\"to\\":100}],\\"behaviour\\":{\\"enableRetry\\":true,\\"enableSolutionsButton\\":true,\\"enableCheckButton\\":true,\\"type\\":\\"auto\\",\\"singlePoint\\":false,\\"randomAnswers\\":true,\\"showSolutionsRequiresInput\\":true,\\"confirmCheckDialog\\":false,\\"confirmRetryDialog\\":false,\\"autoCheck\\":false,\\"passPercentage\\":100,\\"showScorePoints\\":true},\\"UI\\":{\\"checkAnswerButton\\":\\"Check\\",\\"showSolutionButton\\":\\"Show solution\\",\\"tryAgainButton\\":\\"Retry\\",\\"tipsLabel\\":\\"Show tip\\",\\"scoreBarLabel\\":\\"You got :num out of :total points\\",\\"tipAvailable\\":\\"Tip available\\",\\"feedbackAvailable\\":\\"Feedback available\\",\\"readFeedback\\":\\"Read feedback\\",\\"wrongAnswer\\":\\"Wrong answer\\",\\"correctAnswer\\":\\"Correct answer\\",\\"shouldCheck\\":\\"Should have been checked\\",\\"shouldNotCheck\\":\\"Should not have been checked\\",\\"noInput\\":\\"Please answer before viewing the solution\\"},\\"confirmCheck\\":{\\"header\\":\\"Finish ?\\",\\"body\\":\\"Are you sure you wish to finish ?\\",\\"cancelLabel\\":\\"Cancel\\",\\"confirmLabel\\":\\"Finish\\"},\\"confirmRetry\\":{\\"header\\":\\"Retry ?\\",\\"body\\":\\"Are you sure you wish to retry ?\\",\\"cancelLabel\\":\\"Cancel\\",\\"confirmLabel\\":\\"Confirm\\"},\\"question\\":\\"<p>We\'d love to know, is this working?<\\\\/p>\\\\n\\"}",
      \'language\' => \'und\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'main_library\' => array(
        \'id\' => \'15\',
        \'name\' => \'H5P.MultiChoice\',
        \'majorVersion\' => \'1\',
        \'minorVersion\' => \'14\',
        \'embedTypes\' => \'iframe\',
        \'fullscreen\' => \'0\',
      ),
      \'main_library_id\' => \'15\',
      \'menu\' => NULL,
      \'metadata\' => array(
        \'license\' => \'U\',
        \'title\' => \'Is it working?\',
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
      \'title\' => \'Is it working?\',
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
