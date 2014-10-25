<?php
/**
 * @file
 * vopros_cc_question.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vopros_cc_question_taxonomy_default_vocabularies() {
  return array(
    'vopros_call_center_question' => array(
      'name' => 'Call Center Question',
      'machine_name' => 'vopros_call_center_question',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
