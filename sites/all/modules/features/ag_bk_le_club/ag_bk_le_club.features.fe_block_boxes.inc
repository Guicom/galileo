<?php
/**
 * @file
 * ag_bk_le_club.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ag_bk_le_club_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block le club';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'le_club_block';
  $fe_block_boxes->body = '<div class="le-club">
<div class="col-sm-4 col-xs-12">
<div class="ampoule">&nbsp;</div>

<h2>Réflexion</h2>

<p>S\'ouvrir à d\'autres mode de pensées et sortir de son cadre</p>
</div>

<div class="col-sm-4 col-xs-12">
<div class="refrsh">&nbsp;</div>

<h2>Echange</h2>

<p>Chaque idée est intéressante tant qu’on puisse en débattre</p>
</div>

<div class="col-sm-4 col-xs-12">
<div class="heart">&nbsp;</div>

<h2>Emotion</h2>

<p>Quand, transposée à son propre système, l’idée inspire</p>
</div>

<div class="le-club-link"><a href="le-club">Découvrir</a></div>
</div>
';

  $export['le_club_block'] = $fe_block_boxes;

  return $export;
}
