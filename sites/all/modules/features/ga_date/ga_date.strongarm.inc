<?php
/**
 * @file
 * ga_date.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ga_date_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_evenement';
  $strongarm->value = 'F Y';
  $export['date_format_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_evenement_complet_';
  $strongarm->value = 'l d F Y';
  $export['date_format_evenement_complet_'] = $strongarm;

  return $export;
}
