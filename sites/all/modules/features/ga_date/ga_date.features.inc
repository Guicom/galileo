<?php
/**
 * @file
 * ga_date.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ga_date_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function ga_date_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F Y'] = 'F Y';
  $custom_date_formats['l d F Y'] = 'l d F Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function ga_date_date_format_types() {
  $format_types = array();
  // Exported date format type: evenement
  $format_types['evenement'] = 'Evenement';
  // Exported date format type: evenement_complet_
  $format_types['evenement_complet_'] = 'Evenement (complet)';
  return $format_types;
}
