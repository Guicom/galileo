<?php
/**
 * @file
 * ga_bk_intervenant.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ga_bk_intervenant_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-intervenants-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'intervenants-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'intervenant',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'galileo',
        'weight' => 0,
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
