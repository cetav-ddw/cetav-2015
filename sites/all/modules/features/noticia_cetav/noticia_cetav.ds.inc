<?php
/**
 * @file
 * noticia_cetav.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function noticia_cetav_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|noticia|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'noticia';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_fecha_completa',
    ),
    'field_title_noticia' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'tiltle-news',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|noticia|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function noticia_cetav_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|noticia|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'noticia';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'post_date',
        2 => 'body',
        3 => 'field_title_noticia',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'field_title_noticia' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|noticia|full'] = $ds_layout;

  return $export;
}
