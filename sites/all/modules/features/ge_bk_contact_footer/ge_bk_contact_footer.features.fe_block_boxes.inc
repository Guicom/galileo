<?php
/**
 * @file
 * ge_bk_contact_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ge_bk_contact_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact block footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_contact_block';
  $fe_block_boxes->body = '<a class="contact-footer" href="/contact">Nous contacter</a>
';

  $export['footer_contact_block'] = $fe_block_boxes;

  return $export;
}
