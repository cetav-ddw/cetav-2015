<?php
/**
 * @file
 * panels_cetav_institucion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function panels_cetav_institucion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create institucion content'.
  $permissions['create institucion content'] = array(
    'name' => 'create institucion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any institucion content'.
  $permissions['delete any institucion content'] = array(
    'name' => 'delete any institucion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own institucion content'.
  $permissions['delete own institucion content'] = array(
    'name' => 'delete own institucion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any institucion content'.
  $permissions['edit any institucion content'] = array(
    'name' => 'edit any institucion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own institucion content'.
  $permissions['edit own institucion content'] = array(
    'name' => 'edit own institucion content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
