<?php
/**
 * @file
 * panels_cetav_full_actualizacion.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function panels_cetav_full_actualizacion_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|actualizacion_profesional|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'actualizacion_profesional';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_fecha_curso' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_profesor' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_horario' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_duracion' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_precio' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'course-info',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => 'course-info',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_cupo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'course-info',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => 'course-info',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_telefono' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'course-info',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_lugar' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'course-info',
        ),
      ),
    ),
    'field_title_curso' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'course-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|actualizacion_profesional|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|actualizacion_profesional|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'actualizacion_profesional';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|actualizacion_profesional|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function panels_cetav_full_actualizacion_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|actualizacion_profesional|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'actualizacion_profesional';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title_curso',
        1 => 'field_imagen_curso',
        2 => 'field_descripcion_curso',
        3 => 'field_profesor',
        4 => 'field_fecha_curso',
        5 => 'field_horario',
        6 => 'field_duracion',
        7 => 'field_contenido',
        8 => 'field_precio',
        9 => 'field_cupo',
        10 => 'field_telefono',
        11 => 'field_lugar',
        12 => 'field_correo',
      ),
    ),
    'fields' => array(
      'field_title_curso' => 'ds_content',
      'field_imagen_curso' => 'ds_content',
      'field_descripcion_curso' => 'ds_content',
      'field_profesor' => 'ds_content',
      'field_fecha_curso' => 'ds_content',
      'field_horario' => 'ds_content',
      'field_duracion' => 'ds_content',
      'field_contenido' => 'ds_content',
      'field_precio' => 'ds_content',
      'field_cupo' => 'ds_content',
      'field_telefono' => 'ds_content',
      'field_lugar' => 'ds_content',
      'field_correo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|actualizacion_profesional|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|actualizacion_profesional|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'actualizacion_profesional';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'node_link',
        1 => 'links',
        2 => 'title',
        3 => 'field_correo',
        4 => 'author',
        5 => 'field_title_curso',
        6 => 'field_lugar',
        7 => 'field_telefono',
      ),
    ),
    'fields' => array(
      'node_link' => 'ds_content',
      'links' => 'ds_content',
      'title' => 'ds_content',
      'field_correo' => 'ds_content',
      'author' => 'ds_content',
      'field_title_curso' => 'ds_content',
      'field_lugar' => 'ds_content',
      'field_telefono' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|actualizacion_profesional|teaser'] = $ds_layout;

  return $export;
}
