<?php
/**
 * @file
 * ga_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ga_permission_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
  );

  return $roles;
}
