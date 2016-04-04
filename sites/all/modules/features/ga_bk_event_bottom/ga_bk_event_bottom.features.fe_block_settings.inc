<?php
/**
 * @file
 * ga_bk_event_bottom.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ga_bk_event_bottom_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-evenements-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'evenements-block_3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Mais aussi...',
    'visibility' => 0,
  );

  return $export;
}
