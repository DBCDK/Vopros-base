<?php

/**
 * @file
 * Message handling form.
 */

/**
 * Form builder for sending a message to a service.
 */
function vopros_service_message_form($form, &$form_state, $forward) {
  form_load_include($form_state, 'vopros_service', 'inc', 'vopros_service.form');

  $form_state['forward'] = $forward;

  $form['header'] = array(
    '#markup' => '<h2>' . t('Send message to external service') . '</h2>',
  );

  $form['message'] = array(
    '#type' => 'textarea',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => ('Send message'),
  );

  return $form;
}

/**
 * Validation handler for message sending form.
 */
function vopros_service_message_form_validate($form, &$form_state) {
  $forward = $form_state['forward'];

  $form_state['question'] = vopros_question_load_by_uuid($forward->uuid);
  if (!$form_state['question']) {
    form_error($form, t('Could not load question.'));
  }

  $form_state['service'] = vopros_service_machine_name_load($forward->machine_name);
  if (!$form_state['service']) {
    form_error($form, t('Could not load service.'));
  }
}


/**
 * Submit handler for sending message form.
 */
function vopros_service_message_form_submit($form, &$form_state) {
  global $user;

  // Try to get a name from a librarian profile.
  $profile = profile2_load_by_user($user, 'vopros_user_librarian');
  if ($profile) {
    $wrapper = entity_metadata_wrapper('profile2', $profile);
    $name = $profile_wrapper->vopros_user_first_name->value() . ' ' . $profile_wrapper->vopros_user_last_name->value() . ' (' . $profile_wrapper->user->name->value() . ')';
  }
  else {
    // Fall back to username.
    $name = $user->name;
  }
  $message = array(
    'from' => $name,
    'message' => $form_state['values']['message'],
  );

  if (_vopros_service_send_message($form_state['service'], $form_state['question'], $message)) {








  }
  else {
    // Assignment on purpose.
    if ($error = _vopros_service_error()) {
      $message = t('Could not send message to service, it said: @message', array('@message' => $error));
    }
    else {
      $message = t('Could not send message to service.');
    }
    form_error($form, $message);

  }
}