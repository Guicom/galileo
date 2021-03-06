<?php
/**
 * @file
 * ga_bk_menu_footer_second.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ga_bk_menu_footer_second_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu-second_accueil:<front>.
  $menu_links['menu-footer-menu-second_accueil:<front>'] = array(
    'menu_name' => 'menu-footer-menu-second',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-second_accueil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-second_cgv:<front>.
  $menu_links['menu-footer-menu-second_cgv:<front>'] = array(
    'menu_name' => 'menu-footer-menu-second',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'CGV',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-second_cgv:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-second_contact:<front>.
  $menu_links['menu-footer-menu-second_contact:<front>'] = array(
    'menu_name' => 'menu-footer-menu-second',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-second_contact:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-second_informations-lgales:<front>.
  $menu_links['menu-footer-menu-second_informations-lgales:<front>'] = array(
    'menu_name' => 'menu-footer-menu-second',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'informations légales',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu-second_informations-lgales:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('CGV');
  t('Contact');
  t('informations légales');

  return $menu_links;
}
