<?php
/**
 * @file
 * panels_cetav_carreras.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function panels_cetav_carreras_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any carreras content'.
  $permissions['delete any carreras content'] = array(
    'name' => 'delete any carreras content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own carreras content'.
  $permissions['delete own carreras content'] = array(
    'name' => 'delete own carreras content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any carreras content'.
  $permissions['edit any carreras content'] = array(
    'name' => 'edit any carreras content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own carreras content'.
  $permissions['edit own carreras content'] = array(
    'name' => 'edit own carreras content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
