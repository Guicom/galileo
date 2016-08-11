<?php

/**
 * Pre-processes variables for the "page" theme hook.
 *
 * See template for list of available variables.
 *
 * @see page.tpl.php
 *
 * @ingroup theme_preprocess
 */
function galileo_preprocess_page(&$variables) {
  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first']) || !empty($variables['page']['sidebar_second'])) {
    $variables['content_column_class'] = ' class="col-sm-9"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }

  if (bootstrap_setting('fluid_container') == 1) {
    $variables['container_class'] = 'container-fluid';
  }
  else {
    $variables['container_class'] = 'container';
  }

  // Primary nav.
  $variables['primary_nav'] = FALSE;
  if ($variables['main_menu']) {
    // Build links.
    $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    // Provide default theme wrapper function.
    $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
  }

  // Secondary nav.
  $variables['secondary_nav'] = FALSE;
  if ($variables['secondary_menu']) {
    // Build links.
    $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
    // Provide default theme wrapper function.
    $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
  }

  $variables['navbar_classes_array'] = array('navbar');

  if (bootstrap_setting('navbar_position') !== '') {
    $variables['navbar_classes_array'][] = 'navbar-' . bootstrap_setting('navbar_position');
  }
  elseif (bootstrap_setting('fluid_container') == 1) {
    $variables['navbar_classes_array'][] = 'container-fluid';
  }
  else {
    /*$variables['navbar_classes_array'][] = 'container';*/
  }
  if (bootstrap_setting('navbar_inverse')) {
    $variables['navbar_classes_array'][] = 'navbar-inverse';
  }
  else {
    $variables['navbar_classes_array'][] = 'navbar-default';
  }

  if(isset($variables['node']) && $variables['node']->type == 'intervenant') {
    $variables['title'] = t('Intervenants');
  }
  if(isset($variables['node']) && $variables['node']->type == 'event') {
    $variables['title'] = t('');
  }
  if(arg(0) == 'node' &&  arg(2) == 'register') {
    if(arg(1)){
      $node = node_load(arg(1));
      $date_timestamp = strtotime($node->field_event_date['und'][0]['value']) + 7200;
      $date = date('d/m/Y', $date_timestamp);
      $heure = date('H:i', $date_timestamp);
      $variables['title'] = t('Inscription à l\'évenement :<br>').$node->title.' du '.$date.' à '.$heure;
    }else{
      $variables['title'] = t('Inscription à l\'évènement');
    }
  }

  if(isset($variables['node']) && $variables['node']->type == 'intervenant') {
    $variables['title'] = t('Intervenants');
  }
  if(isset($variables['node']) && $variables['node']->type == 'event') {
    //$variables['title'] = t('');
    $variables['past'] = $variables['node']->field_event_past['und'][0]['value'] == '1' ? 'past' : 'next';
  }
}



function galileo_preprocess_node (&$variables) {
  if($variables['type'] == 'intervenant') {
    if ($variables['node'] == menu_get_object()) {
      $variables['classes_array'][] = 'active';
    }
  }
  if ($variables['type'] == 'event' && $variables['view_mode'] == 'full') {
    $date_timestamp = strtotime($variables['field_event_date'][0]['value']);
    switch($variables['field_event_past'][0]['value']) {
      case '0':
        $variables['theme_hook_suggestions'][] = 'ds_2col_fluid__node_event_next_full';
        $variables['date_mois'] = format_date($date_timestamp, 'evenement_complet_');
        $date_timestamp = $date_timestamp + 7200;
        $variables['date_heure'] = date('H:i', $date_timestamp);
        break;
      case '1':
        $variables['theme_hook_suggestions'][] = 'ds_2col_fluid__node_event_past_full';
        $variables['custom_date'] = format_date($date_timestamp, 'evenement');
        break;
    }
  }
}