<?php
/**
 * @file
 * ga_bk_menu_footer_second.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ga_bk_menu_footer_second_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu-second.
  $menus['menu-footer-menu-second'] = array(
    'menu_name' => 'menu-footer-menu-second',
    'title' => 'Footer menu second',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu second');

  return $menus;
}
