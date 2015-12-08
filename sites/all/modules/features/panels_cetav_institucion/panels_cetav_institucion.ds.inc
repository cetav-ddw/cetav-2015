<?php
/**
 * @file
 * panels_cetav_institucion.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function panels_cetav_institucion_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|colaboradores_institucion|default';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'colaboradores_institucion';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_nombre_persona_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => 'personal-name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_puesto_personal' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'personal-charge',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|colaboradores_institucion|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'paragraphs_item|colaboradores_institucion|paragraphs_editor_preview';
  $ds_fieldsetting->entity_type = 'paragraphs_item';
  $ds_fieldsetting->bundle = 'colaboradores_institucion';
  $ds_fieldsetting->view_mode = 'paragraphs_editor_preview';
  $ds_fieldsetting->settings = array(
    'field_nombre_persona_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => 'personal-name',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['paragraphs_item|colaboradores_institucion|paragraphs_editor_preview'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function panels_cetav_institucion_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|colaboradores_institucion|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'colaboradores_institucion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen_personal',
        1 => 'field_nombre_persona_',
        2 => 'field_puesto_personal',
        3 => 'field_descripcion_personal',
        4 => 'field_linkedin',
        5 => 'field_behance',
        6 => 'field_facebook',
        7 => 'field_twitter',
      ),
    ),
    'fields' => array(
      'field_imagen_personal' => 'ds_content',
      'field_nombre_persona_' => 'ds_content',
      'field_puesto_personal' => 'ds_content',
      'field_descripcion_personal' => 'ds_content',
      'field_linkedin' => 'ds_content',
      'field_behance' => 'ds_content',
      'field_facebook' => 'ds_content',
      'field_twitter' => 'ds_content',
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
  $export['paragraphs_item|colaboradores_institucion|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|colaboradores_institucion|paragraphs_editor_preview';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'colaboradores_institucion';
  $ds_layout->view_mode = 'paragraphs_editor_preview';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_imagen_personal',
        1 => 'field_nombre_persona_',
        2 => 'field_puesto_personal',
        3 => 'field_descripcion_personal',
        4 => 'field_twitter',
        5 => 'field_facebook',
        6 => 'field_linkedin',
        7 => 'field_behance',
      ),
    ),
    'fields' => array(
      'field_imagen_personal' => 'ds_content',
      'field_nombre_persona_' => 'ds_content',
      'field_puesto_personal' => 'ds_content',
      'field_descripcion_personal' => 'ds_content',
      'field_twitter' => 'ds_content',
      'field_facebook' => 'ds_content',
      'field_linkedin' => 'ds_content',
      'field_behance' => 'ds_content',
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
  $export['paragraphs_item|colaboradores_institucion|paragraphs_editor_preview'] = $ds_layout;

  return $export;
}
