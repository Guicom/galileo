<?php
/**
 * @file
 * ga_bk_social_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ga_bk_social_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-social_block_footer'] = array(
    'cache' => -1,
    'css_class' => 'social-footer-block',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'social_block_footer',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'galileo',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Suivez-nous :',
    'visibility' => 0,
  );

  return $export;
}
