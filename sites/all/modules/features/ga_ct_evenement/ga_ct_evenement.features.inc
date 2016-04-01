<?php
/**
 * @file
 * ga_ct_evenement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ga_ct_evenement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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

/**
 * Implements hook_default_registration_state().
 */
function ga_ct_evenement_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Annul\\u00e9",
    "description" : "Cancelled",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Inscrit",
    "description" : "Completed.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "1",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function ga_ct_evenement_default_registration_type() {
  $items = array();
  $items['evenement'] = entity_import('registration_type', '{
    "name" : "evenement",
    "label" : "Evenement",
    "locked" : "0",
    "default_state" : "complete",
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
