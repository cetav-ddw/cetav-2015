<?php
/**
 * @file
 * panels_cetav_admision.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panels_cetav_admision_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_admision';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_admision'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_admision';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_admision'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_admision';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_admision'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_admision';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_admision'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_admision';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_admision'] = $strongarm;

  return $export;
}
