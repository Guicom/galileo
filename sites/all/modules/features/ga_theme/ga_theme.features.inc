<?php
/**
 * @file
 * ga_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ga_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
