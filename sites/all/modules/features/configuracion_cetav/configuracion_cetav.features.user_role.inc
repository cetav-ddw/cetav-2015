<?php
/**
 * @file
 * configuracion_cetav.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function configuracion_cetav_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content-admin.
  $roles['content-admin'] = array(
    'name' => 'content-admin',
    'weight' => 4,
  );

  // Exported role: content-editor.
  $roles['content-editor'] = array(
    'name' => 'content-editor',
    'weight' => 5,
  );

  // Exported role: egresado.
  $roles['egresado'] = array(
    'name' => 'egresado',
    'weight' => 3,
  );

  return $roles;
}
