<?php
/**
 * @file
 * ag_bk_aurore.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ag_bk_aurore_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Aurore block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'aurore_block';
  $fe_block_boxes->body = '<div class="aurore-block-wrapper">
<div class="aurore-top">
<div class="aurore-title">
<h2>Aurore</h2>
</div>

<h3>Dédié aux entreprises et aux organisations</h3>

<p>Galiléo Concept Aurore propose aux dirigeant des grandes entreprises, aux PME de tailles moyennes et aux fédérations en Alsace et en France, de recevoir une personnalité devant le public de leur choix</p>
</div>

<div class="aurore-link"><a class="aurore-link-yellow" href="aurore">En savoir +</a></div>

<div class="aurore-bottom" style="background-image: url(\'/sites/all/themes/galileo/images/aurore.png\')">&nbsp;</div>
</div>
';

  $export['aurore_block'] = $fe_block_boxes;

  return $export;
}
