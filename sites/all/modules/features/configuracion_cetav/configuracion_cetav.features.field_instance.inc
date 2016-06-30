<?php
/**
 * @file
 * configuracion_cetav.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function configuracion_cetav_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_perfil_de_egresado'.
  $field_instances['user-user-field_perfil_de_egresado'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_perfil_de_egresado',
    'label' => 'Perfil de egresado',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => FALSE,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Perfil de egresado');

  return $field_instances;
}
