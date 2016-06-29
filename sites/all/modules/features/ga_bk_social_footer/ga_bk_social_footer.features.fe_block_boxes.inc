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
  $fe_block_boxes->body = '<p><a class="facebook" target="_blank" href="https://www.facebook.com/Galileo-Concept-115815925166197/">Facebook</a><a class="linkedin" target="_blank" href="https://www.linkedin.com/company/galileo-concept?trk=nav_account_sub_nav_company_admin">Linkedin</a><a class="youtube" target="_blank" href="https://www.youtube.com/channel/UCnlEYf_FCRBKX-ylcbBgPqQ?view_as=public">Youtube</a></p>
';

  $export['social_block_footer'] = $fe_block_boxes;

  return $export;
}
