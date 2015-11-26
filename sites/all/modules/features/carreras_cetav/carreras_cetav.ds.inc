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
    'field_subtitulo_carrera' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h2',
          'lb-cl' => 'subtitle subtitle-career',
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
    'field_skills_carrera' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-cl' => 'skills-list',
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
    'field_cuatrimestre' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => 'title-cuatri',
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
  $ds_layout->id = 'node|admision|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'admision';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cetav_admision';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_imagen_admision',
        1 => 'field_subtitulo_introduccion_adm',
        2 => 'field_cuerpo_introduccion_admisi',
        3 => 'field_requisitos_admision',
        4 => 'field_subtitulo_info_admision',
        5 => 'field_pasos_de_admision',
        6 => 'field_requisitos_de_admision',
      ),
    ),
    'fields' => array(
      'field_imagen_admision' => 'left',
      'field_subtitulo_introduccion_adm' => 'left',
      'field_cuerpo_introduccion_admisi' => 'left',
      'field_requisitos_admision' => 'left',
      'field_subtitulo_info_admision' => 'left',
      'field_pasos_de_admision' => 'left',
      'field_requisitos_de_admision' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'wide' => 'div',
      'wide_second' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|admision|default'] = $ds_layout;

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
        1 => 'field_subtitulo_carrera',
        2 => 'body',
        3 => 'field_video_carrera',
        4 => 'field_programa_carreras',
        5 => 'field_titulo_skills_carreras',
        6 => 'field_cuerpo_skills_carreras',
      ),
    ),
    'fields' => array(
      'field_imagen_header_carrera' => 'wide',
      'field_subtitulo_carrera' => 'wide',
      'body' => 'wide',
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
        0 => 'field_imagen_header_carrera',
        1 => 'field_subtitulo_carrera',
        2 => 'body',
        3 => 'field_video_carrera',
        4 => 'field_programa_carreras',
        5 => 'field_titulo_skills_carreras',
        6 => 'field_cuerpo_skills_carreras',
        7 => 'field_skills_carrera',
      ),
    ),
    'fields' => array(
      'field_imagen_header_carrera' => 'wide',
      'field_subtitulo_carrera' => 'wide',
      'body' => 'wide',
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
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cuatrimestre',
        1 => 'field_cursos_cuatrimestre',
      ),
    ),
    'fields' => array(
      'field_cuatrimestre' => 'ds_content',
      'field_cursos_cuatrimestre' => 'ds_content',
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
  $export['paragraphs_item|programas_carreras|full'] = $ds_layout;

  return $export;
}
