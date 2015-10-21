<?php
/**
 * @file
 * generacion_cetav.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function generacion_cetav_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'testimonial';
  $ds_view_mode->label = 'testimonial';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['testimonial'] = $ds_view_mode;

  return $export;
}
