<?php
/**
 * @file
 * ag_is_280x258.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ag_is_280x258_image_default_styles() {
  $styles = array();

  // Exported image style: 280x258.
  $styles['280x258'] = array(
    'label' => '280x258',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 258,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
