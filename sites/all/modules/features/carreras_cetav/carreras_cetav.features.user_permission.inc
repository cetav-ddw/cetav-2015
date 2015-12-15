<?php
/**
 * @file
 * carreras_cetav.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function carreras_cetav_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create carreras content'.
  $permissions['create carreras content'] = array(
    'name' => 'create carreras content',
    'roles' => array(
      'content-admin' => 'content-admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
