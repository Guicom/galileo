<?php
/**
 * @file
 * ag_bk_le_club.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ag_bk_le_club_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-le_club_block'] = array(
    'cache' => -1,
    'css_class' => 'le-club-block',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'le_club_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'galileo' => array(
        'region' => 'content_bottom',
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
    'title' => 'Galiléo Concept : Créateur d’expérience',
    'visibility' => 1,
  );

  return $export;
}
