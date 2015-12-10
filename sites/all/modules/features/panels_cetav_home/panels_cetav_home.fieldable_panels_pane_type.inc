<?php
/**
 * @file
 * panels_cetav_home.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function panels_cetav_home_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'aliados_logo_home';
  $fieldable_panels_pane_type->title = 'aliados-logo-home';
  $fieldable_panels_pane_type->description = '';
  $export['aliados_logo_home'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'call_out_img';
  $fieldable_panels_pane_type->title = 'call-out-heading';
  $fieldable_panels_pane_type->description = '';
  $export['call_out_img'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'cetav_carreras_home';
  $fieldable_panels_pane_type->title = 'cetav-carreras-home';
  $fieldable_panels_pane_type->description = '';
  $export['cetav_carreras_home'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'descripcion_link';
  $fieldable_panels_pane_type->title = 'call-out-intro';
  $fieldable_panels_pane_type->description = '';
  $export['descripcion_link'] = $fieldable_panels_pane_type;

  return $export;
}
