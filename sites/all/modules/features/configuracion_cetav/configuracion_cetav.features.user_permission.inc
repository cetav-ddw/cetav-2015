<?php
/**
 * @file
 * configuracion_cetav.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function configuracion_cetav_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_perfil_de_egresado'.
  $permissions['create field_perfil_de_egresado'] = array(
    'name' => 'create field_perfil_de_egresado',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_perfil_de_egresado'.
  $permissions['edit field_perfil_de_egresado'] = array(
    'name' => 'edit field_perfil_de_egresado',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_perfil_de_egresado'.
  $permissions['edit own field_perfil_de_egresado'] = array(
    'name' => 'edit own field_perfil_de_egresado',
    'roles' => array(
      'egresado' => 'egresado',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_perfil_de_egresado'.
  $permissions['view field_perfil_de_egresado'] = array(
    'name' => 'view field_perfil_de_egresado',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_perfil_de_egresado'.
  $permissions['view own field_perfil_de_egresado'] = array(
    'name' => 'view own field_perfil_de_egresado',
    'roles' => array(
      'administrator' => 'administrator',
      'egresado' => 'egresado',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
