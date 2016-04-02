<?php
/**
 * @file
 * ga_ct_evenement.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ga_ct_evenement_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ga_ct_evenement_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|banner';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'banner';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_event_photo_banniere',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_event_intervenant',
      ),
    ),
    'fields' => array(
      'field_event_photo_banniere' => 'left',
      'title' => 'right',
      'field_event_intervenant' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|event|banner'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|banner_with_buttons';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'banner_with_buttons';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_event_photo_banniere',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_event_intervenant',
        3 => 'field_event_date',
        4 => 'node_link',
        5 => 'field_event_inscription',
      ),
    ),
    'fields' => array(
      'field_event_photo_banniere' => 'left',
      'title' => 'right',
      'field_event_intervenant' => 'right',
      'field_event_date' => 'right',
      'node_link' => 'right',
      'field_event_inscription' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|event|banner_with_buttons'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_event_date',
        2 => 'field_event_lieu',
        3 => 'field_event_adresse',
        4 => 'field_event_date_limite',
        5 => 'field_event_intervenant',
        6 => 'field_event_photo',
        7 => 'field_event_past',
        8 => 'field_event_photo_liste',
        9 => 'field_event_photo_banniere',
        10 => 'field_event_inscription',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_event_date' => 'left',
      'field_event_lieu' => 'left',
      'field_event_adresse' => 'left',
      'field_event_date_limite' => 'left',
      'field_event_intervenant' => 'left',
      'field_event_photo' => 'left',
      'field_event_past' => 'left',
      'field_event_photo_liste' => 'left',
      'field_event_photo_banniere' => 'left',
      'field_event_inscription' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_event_photo_liste',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_event_intervenant',
        3 => 'field_event_date',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_event_photo_liste' => 'left',
      'title' => 'right',
      'field_event_intervenant' => 'right',
      'field_event_date' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|event|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ga_ct_evenement_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'banner';
  $ds_view_mode->label = 'banner';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['banner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'banner_with_buttons';
  $ds_view_mode->label = 'banner_with_buttons';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['banner_with_buttons'] = $ds_view_mode;

  return $export;
}
