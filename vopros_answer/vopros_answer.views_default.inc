<?php
/**
 * @file
 * vopros_answer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vopros_answer_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'vopros_question_own_questions';
  $view->description = '';
  $view->tag = 'vopros_question';
  $view->base_table = 'vopros_answer';
  $view->human_name = 'List of own questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your questions';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'rules';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'question_id' => 'question_id',
    'question_title' => 'question_title',
    'subject_catagory' => 'subject_catagory',
    'question_usage' => 'question_usage',
    'question_status' => 'question_status',
    'question_deadline_timestamp' => 'question_deadline_timestamp',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'question_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'question_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'subject_catagory' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'question_usage' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'question_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'question_deadline_timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Answer: Question_id */
  $handler->display->display_options['relationships']['question_id']['id'] = 'question_id';
  $handler->display->display_options['relationships']['question_id']['table'] = 'vopros_answer';
  $handler->display->display_options['relationships']['question_id']['field'] = 'question_id';
  $handler->display->display_options['relationships']['question_id']['required'] = 0;
  /* Field: Question: Question ID */
  $handler->display->display_options['fields']['question_id']['id'] = 'question_id';
  $handler->display->display_options['fields']['question_id']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_id']['field'] = 'question_id';
  $handler->display->display_options['fields']['question_id']['relationship'] = 'question_id';
  $handler->display->display_options['fields']['question_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['question_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['question_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['question_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['question_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['question_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['question_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['question_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['question_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['question_id']['separator'] = '';
  $handler->display->display_options['fields']['question_id']['format_plural'] = 0;
  /* Field: Question: Question_title */
  $handler->display->display_options['fields']['question_title']['id'] = 'question_title';
  $handler->display->display_options['fields']['question_title']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_title']['field'] = 'question_title';
  $handler->display->display_options['fields']['question_title']['relationship'] = 'question_id';
  $handler->display->display_options['fields']['question_title']['label'] = 'Title';
  $handler->display->display_options['fields']['question_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['question_title']['alter']['path'] = 'admin/vopros/questions/[question_id]';
  $handler->display->display_options['fields']['question_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['question_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['question_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['question_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['question_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['question_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['question_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['question_title']['empty_zero'] = 0;
  /* Field: Question: Subject */
  $handler->display->display_options['fields']['subject_catagory']['id'] = 'subject_catagory';
  $handler->display->display_options['fields']['subject_catagory']['table'] = 'field_data_subject_catagory';
  $handler->display->display_options['fields']['subject_catagory']['field'] = 'subject_catagory';
  $handler->display->display_options['fields']['subject_catagory']['relationship'] = 'question_id';
  $handler->display->display_options['fields']['subject_catagory']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['external'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject_catagory']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject_catagory']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['subject_catagory']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['subject_catagory']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject_catagory']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['subject_catagory']['field_api_classes'] = 0;
  /* Field: Question: Question_usage */
  $handler->display->display_options['fields']['question_usage']['id'] = 'question_usage';
  $handler->display->display_options['fields']['question_usage']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_usage']['field'] = 'question_usage';
  $handler->display->display_options['fields']['question_usage']['relationship'] = 'question_id';
  $handler->display->display_options['fields']['question_usage']['label'] = 'Usage';
  $handler->display->display_options['fields']['question_usage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['question_usage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['question_usage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['question_usage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['question_usage']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['question_usage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['question_usage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['question_usage']['empty_zero'] = 0;
  /* Field: Question: Question_status */
  $handler->display->display_options['fields']['question_status']['id'] = 'question_status';
  $handler->display->display_options['fields']['question_status']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_status']['field'] = 'question_status';
  $handler->display->display_options['fields']['question_status']['relationship'] = 'question_id';
  $handler->display->display_options['fields']['question_status']['label'] = 'Status';
  $handler->display->display_options['fields']['question_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['question_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['question_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['question_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['question_status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['question_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['question_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['question_status']['empty_zero'] = 0;
  /* Field: Question: Question_deadline_timestamp */
  $handler->display->display_options['fields']['question_deadline_timestamp']['id'] = 'question_deadline_timestamp';
  $handler->display->display_options['fields']['question_deadline_timestamp']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['question_deadline_timestamp']['field'] = 'question_deadline_timestamp';
  $handler->display->display_options['fields']['question_deadline_timestamp']['relationship'] = 'question_id';
  $handler->display->display_options['fields']['question_deadline_timestamp']['label'] = 'Deadline';
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['question_deadline_timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['question_deadline_timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['question_deadline_timestamp']['date_format'] = 'vopros_question_deadline';
  /* Field: Question: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'vopros_question';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'question_id';
  /* Contextual filter: Question: Question owner */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'vopros_question';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'question_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: Question: Question_status */
  $handler->display->display_options['filters']['question_status']['id'] = 'question_status';
  $handler->display->display_options['filters']['question_status']['table'] = 'vopros_question';
  $handler->display->display_options['filters']['question_status']['field'] = 'question_status';
  $handler->display->display_options['filters']['question_status']['relationship'] = 'question_id';
  $handler->display->display_options['filters']['question_status']['value'] = array(
    'value' => 'assigned',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/vopros/questions';
  $export['vopros_question_own_questions'] = $view;

  return $export;
}