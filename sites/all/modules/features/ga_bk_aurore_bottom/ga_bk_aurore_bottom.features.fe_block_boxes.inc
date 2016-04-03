<?php
/**
 * @file
 * ga_bk_aurore_bottom.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ga_bk_aurore_bottom_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Aurore bottom block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'aurore_bottom';
  $fe_block_boxes->body = '<div class="aurore-block-bottom-wrapper">
<div class="aurore-image" style="background-image: url(\'/sites/all/themes/galileo/images/aurore.png\')">&nbsp;</div>

<div class="aurore-top">
<div class="aurore-title">
<h2>Aurore</h2>
</div>

<h3>Dédié aux entreprises et aux organisations</h3>
</div>
<a class="aurore-link-yellow" href="aurore">En savoir +</a></div>
';

  $export['aurore_bottom'] = $fe_block_boxes;

  return $export;
}
