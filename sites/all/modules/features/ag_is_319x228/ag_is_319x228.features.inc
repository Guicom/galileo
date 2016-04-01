<?php
/**
 * @file
 * ag_is_319x228.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ag_is_319x228_image_default_styles() {
  $styles = array();

  // Exported image style: 319x228.
  $styles['319x228'] = array(
    'label' => '319x228',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 319,
          'height' => 228,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
