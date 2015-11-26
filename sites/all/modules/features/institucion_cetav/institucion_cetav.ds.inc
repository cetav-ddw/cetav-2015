<?php
/**
 * @file
 * institucion_cetav.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function institucion_cetav_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|institucion|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'institucion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cetav_institucion';
  $ds_layout->settings = array(
    'regions' => array(
      'wide_main' => array(
        0 => 'field_imagen_header_institucion',
        1 => 'field_subtitulo_institucion',
        2 => 'field_video_institucion',
        3 => 'field_subtitulo_consejo_instituc',
        4 => 'field_cuerpo_descripcion_consejo',
        5 => 'field_cuerpo_descripcion_institu',
        6 => 'field_nuestro_equipo_',
        7 => 'field_lista_consejo_asesor',
      ),
    ),
    'fields' => array(
      'field_imagen_header_institucion' => 'wide_main',
      'field_subtitulo_institucion' => 'wide_main',
      'field_video_institucion' => 'wide_main',
      'field_subtitulo_consejo_instituc' => 'wide_main',
      'field_cuerpo_descripcion_consejo' => 'wide_main',
      'field_cuerpo_descripcion_institu' => 'wide_main',
      'field_nuestro_equipo_' => 'wide_main',
      'field_lista_consejo_asesor' => 'wide_main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'wide_main' => 'div',
      'left' => 'div',
      'right' => 'div',
      'wide' => 'div',
      'left_second' => 'div',
      'right_second' => 'div',
      'wide_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|institucion|default'] = $ds_layout;

  return $export;
}
