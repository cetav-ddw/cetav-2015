<?php
/**
 * @file
 * panels_cetav_carreras.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panels_cetav_carreras_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_carreras';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_carreras'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_carreras';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_carreras'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_carreras';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_carreras'] = $strongarm;

  return $export;
}
