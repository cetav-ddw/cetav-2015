<?php
/**
 * @file
 * carreras_cetav.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function carreras_cetav_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|carreras|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'carreras';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_subtitulo_carrera' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h2',
          'lb-cl' => 'subtitle subtitle-career',
        ),
      ),
    ),
  );
  $export['node|carreras|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|carreras|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'carreras';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_imagen_header_carrera' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_skills_carrera' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'skills-list',
        ),
      ),
    ),
    'field_titulo_skills_carreras' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h4',
          'lb-cl' => 'title-skills',
        ),
      ),
    ),
  );
  $export['node|carreras|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|programas_carreras|full';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'programas_carreras';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_modulo_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|programas_carreras|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function carreras_cetav_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|carreras|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'carreras';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cetav_carreras';
  $ds_layout->settings = array(
    'regions' => array(
      'wide' => array(
        0 => 'field_imagen_header_carrera',
        1 => 'field_video_carrera',
        2 => 'field_programa_carreras',
        3 => 'field_titulo_skills_carreras',
        4 => 'field_cuerpo_skills_carreras',
      ),
    ),
    'fields' => array(
      'field_imagen_header_carrera' => 'wide',
      'field_video_carrera' => 'wide',
      'field_programa_carreras' => 'wide',
      'field_titulo_skills_carreras' => 'wide',
      'field_cuerpo_skills_carreras' => 'wide',
    ),
    'classes' => array(),
    'wrappers' => array(
      'wide' => 'div',
      'left' => 'div',
      'right' => 'div',
      'wide_second' => 'div',
      'left_second' => 'div',
      'right_second' => 'div',
      'wide_third' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|carreras|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|carreras|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'carreras';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-cetav_carreras';
  $ds_layout->settings = array(
    'regions' => array(
      'wide' => array(
        0 => 'field_sub_title_carreras',
        1 => 'field_imagen_header_carrera',
        2 => 'field_intro_carreras',
        3 => 'field_video_carrera',
        4 => 'field_programa_carreras',
        5 => 'field_titulo_skills_carreras',
        6 => 'field_cuerpo_skills_carreras',
        7 => 'field_skills_carrera',
      ),
    ),
    'fields' => array(
      'field_sub_title_carreras' => 'wide',
      'field_imagen_header_carrera' => 'wide',
      'field_intro_carreras' => 'wide',
      'field_video_carrera' => 'wide',
      'field_programa_carreras' => 'wide',
      'field_titulo_skills_carreras' => 'wide',
      'field_cuerpo_skills_carreras' => 'wide',
      'field_skills_carrera' => 'wide',
    ),
    'classes' => array(),
    'wrappers' => array(
      'wide' => 'div',
      'left' => 'div',
      'right' => 'div',
      'wide_second' => 'div',
      'left_second' => 'div',
      'right_second' => 'div',
      'wide_third' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|carreras|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|programas_carreras|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'programas_carreras';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cetav_carreras';
  $ds_layout->settings = array(
    'regions' => array(
      'wide' => array(
        0 => 'field_cuatrimestre',
        1 => 'field_cursos_cuatrimestre',
        2 => 'field_programa_cuatrimestres',
      ),
    ),
    'fields' => array(
      'field_cuatrimestre' => 'wide',
      'field_cursos_cuatrimestre' => 'wide',
      'field_programa_cuatrimestres' => 'wide',
    ),
    'classes' => array(),
    'wrappers' => array(
      'wide' => 'div',
      'left' => 'div',
      'right' => 'div',
      'wide_second' => 'div',
      'left_second' => 'div',
      'right_second' => 'div',
      'wide_third' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['paragraphs_item|programas_carreras|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|programas_carreras|full';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'programas_carreras';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_modulo_title',
        1 => 'field_modulo_list',
        2 => 'field_link_proceso_admision',
        3 => 'field_modulo_descargar_programa',
      ),
    ),
    'fields' => array(
      'field_modulo_title' => 'ds_content',
      'field_modulo_list' => 'ds_content',
      'field_link_proceso_admision' => 'ds_content',
      'field_modulo_descargar_programa' => 'ds_content',
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
  $export['paragraphs_item|programas_carreras|full'] = $ds_layout;

  return $export;
}
