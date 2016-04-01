<?php
/**
 * @file
 * ag_is_120x120.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ag_is_120x120_image_default_styles() {
  $styles = array();

  // Exported image style: 120x120.
  $styles['120x120'] = array(
    'label' => '120x120',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 120,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
