<?php
/**
 * @file
 * ga_menu_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ga_menu_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'galileo' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'galileo',
        'weight' => -7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
