<?php
/**
 * @file
 * ga_bk_menu_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ga_bk_menu_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer_aurore:<front>.
  $menu_links['menu-menu-footer_aurore:<front>'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Aurore',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_aurore:<front>',
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
  // Exported menu link: menu-menu-footer_le-club:<front>.
  $menu_links['menu-menu-footer_le-club:<front>'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Le club',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_le-club:<front>',
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
  // Exported menu link: menu-menu-footer_les-evnements:<front>.
  $menu_links['menu-menu-footer_les-evnements:<front>'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Les evènements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_les-evnements:<front>',
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
  // Exported menu link: menu-menu-footer_les-intervenants:<front>.
  $menu_links['menu-menu-footer_les-intervenants:<front>'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Les intervenants',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_les-intervenants:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-footer_prsentation:<front>.
  $menu_links['menu-menu-footer_prsentation:<front>'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Présentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_prsentation:<front>',
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
  // Exported menu link: menu-menu-footer_tarifs:<front>.
  $menu_links['menu-menu-footer_tarifs:<front>'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Tarifs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_tarifs:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aurore');
  t('Le club');
  t('Les evènements');
  t('Les intervenants');
  t('Présentation');
  t('Tarifs');

  return $menu_links;
}
