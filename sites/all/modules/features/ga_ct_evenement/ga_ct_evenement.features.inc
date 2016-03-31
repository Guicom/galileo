<?php
/**
 * @file
 * ga_ct_evenement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ga_ct_evenement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ga_ct_evenement_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evenement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
