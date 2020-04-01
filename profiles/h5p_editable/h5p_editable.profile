<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Edit H5P file';
    $form['site_information']['site_mail']['#default_value'] = 'admin@localhost.local';
    $form['admin_account']['account']['name']['#default_value'] = 'admin';
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@localhost.local';
    $form['update_notifications']['update_status_module']['#default_value'] = array(0 => 0, 1 => 0);
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    print_r($form['profile']);
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'h5p_editable';
    }
  }
}