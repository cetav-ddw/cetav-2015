<?php
/**
 * @file
 * actualizacion_profesional_cetav.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function actualizacion_profesional_cetav_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|actualizacion_profesional|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'actualizacion_profesional';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cetav_institucion';
  $ds_layout->settings = array(
    'regions' => array(
      'wide_main' => array(
        0 => 'field_detalles_curso',
        1 => 'field_imagen_curso',
        2 => 'field_info_pago_curso',
        3 => 'field_descripci_n_curso',
        4 => 'field_contenido',
        5 => 'field_contacto_curso',
      ),
    ),
    'fields' => array(
      'field_detalles_curso' => 'wide_main',
      'field_imagen_curso' => 'wide_main',
      'field_info_pago_curso' => 'wide_main',
      'field_descripci_n_curso' => 'wide_main',
      'field_contenido' => 'wide_main',
      'field_contacto_curso' => 'wide_main',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|actualizacion_profesional|default'] = $ds_layout;

  return $export;
}
