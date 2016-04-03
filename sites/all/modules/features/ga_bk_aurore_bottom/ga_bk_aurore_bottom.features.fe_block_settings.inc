<?php
/**
 * @file
 * ga_bk_aurore_bottom.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ga_bk_aurore_bottom_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-aurore_bottom'] = array(
    'cache' => -1,
    'css_class' => 'aurore-bottom-block',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'aurore_bottom',
    'module' => 'block',
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
        'region' => 'banner_bottom',
        'status' => 1,
        'theme' => 'galileo',
        'weight' => -17,
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
