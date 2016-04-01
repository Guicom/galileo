<?php
/**
 * @file
 * ga_menu_block.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ga_menu_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_evenements:evenements.
  $menu_links['main-menu_evenements:evenements'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'evenements',
    'router_path' => 'evenements',
    'link_title' => 'Evenements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_evenements:evenements',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
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
  // Exported menu link: main-menu_intervenants:intervenants.
  $menu_links['main-menu_intervenants:intervenants'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'intervenants',
    'router_path' => 'intervenants',
    'link_title' => 'Intervenants',
    'options' => array(
      'identifier' => 'main-menu_intervenants:intervenants',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Evenements');
  t('Home');
  t('Intervenants');

  return $menu_links;
}
