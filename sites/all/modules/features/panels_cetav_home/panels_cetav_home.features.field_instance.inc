<?php
/**
 * @file
 * panels_cetav_home.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function panels_cetav_home_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-consejo_asesor-field_nombre_consejo_asesor'.
  $field_instances['paragraphs_item-consejo_asesor-field_nombre_consejo_asesor'] = array(
    'bundle' => 'consejo_asesor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_nombre_consejo_asesor',
    'label' => 'nombre-consejo-asesor',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-consejo_asesor-field_nombre_empresa_consejo_ase'.
  $field_instances['paragraphs_item-consejo_asesor-field_nombre_empresa_consejo_ase'] = array(
    'bundle' => 'consejo_asesor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_nombre_empresa_consejo_ase',
    'label' => 'nombre-empresa-consejo-asesor',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('nombre-consejo-asesor');
  t('nombre-empresa-consejo-asesor');

  return $field_instances;
}
