<?php
/**
 * @file
 * configuracion_cetav.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function configuracion_cetav_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_perfil_de_egresado'.
  $field_bases['field_perfil_de_egresado'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_perfil_de_egresado',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'perfil_egresado' => 'perfil_egresado',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
