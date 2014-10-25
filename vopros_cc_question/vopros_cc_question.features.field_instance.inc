<?php
/**
 * @file
 * vopros_cc_question.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function vopros_cc_question_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'vopros_cc_question-vopros_cc_question-vopros_cc_category'
  $field_instances['vopros_cc_question-vopros_cc_question-vopros_cc_category'] = array(
    'bundle' => 'vopros_cc_question',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'vopros_cc_question',
    'field_name' => 'vopros_cc_category',
    'label' => 'Kategori',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Kategori');

  return $field_instances;
}
