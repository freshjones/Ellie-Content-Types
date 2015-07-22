<?php
/**
 * @file
 * ellie_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ellie_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
