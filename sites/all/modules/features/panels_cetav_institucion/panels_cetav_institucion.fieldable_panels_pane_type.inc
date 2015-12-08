<?php
/**
 * @file
 * panels_cetav_institucion.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function panels_cetav_institucion_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'call_out_video';
  $fieldable_panels_pane_type->title = 'call-out-video';
  $fieldable_panels_pane_type->description = '';
  $export['call_out_video'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'personal_institucion';
  $fieldable_panels_pane_type->title = 'personal-institucion';
  $fieldable_panels_pane_type->description = '';
  $export['personal_institucion'] = $fieldable_panels_pane_type;

  return $export;
}
