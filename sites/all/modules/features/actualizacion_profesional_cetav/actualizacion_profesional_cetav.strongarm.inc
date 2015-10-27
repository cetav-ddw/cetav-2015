<?php
/**
 * @file
 * actualizacion_profesional_cetav.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function actualizacion_profesional_cetav_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__actualizacion_profesional';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__actualizacion_profesional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_actualizacion_profesional';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_actualizacion_profesional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_actualizacion_profesional';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_actualizacion_profesional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_actualizacion_profesional';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_actualizacion_profesional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_actualizacion_profesional';
  $strongarm->value = '1';
  $export['node_preview_actualizacion_profesional'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_actualizacion_profesional';
  $strongarm->value = 1;
  $export['node_submitted_actualizacion_profesional'] = $strongarm;

  return $export;
}
