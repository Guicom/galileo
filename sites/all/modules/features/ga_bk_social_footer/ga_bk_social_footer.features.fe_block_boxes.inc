<?php
/**
 * @file
 * ga_bk_social_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ga_bk_social_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social block footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_block_footer';
  $fe_block_boxes->body = '<p><a class="facebook" href="#">Facebook</a><a class="linkedin" href="#">Linkedin</a><a class="viadeo" href="#">Viadéo</a><a class="youtube" href="#">Youtube</a></p>
';

  $export['social_block_footer'] = $fe_block_boxes;

  return $export;
}
