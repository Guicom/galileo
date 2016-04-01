<?php
/**
 * @file
 * ga_ct_intervenant.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ga_ct_intervenant_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|intervenant|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'intervenant';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|intervenant|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|intervenant|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'intervenant';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'En savoir +',
        'link class' => '',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|intervenant|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ga_ct_intervenant_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|intervenant|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'intervenant';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_int_photo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_int_poste',
        3 => 'body',
        4 => 'flippy_pager',
      ),
    ),
    'fields' => array(
      'field_int_photo' => 'left',
      'title' => 'right',
      'field_int_poste' => 'right',
      'body' => 'right',
      'flippy_pager' => 'right',
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
  $export['node|intervenant|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|intervenant|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'intervenant';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_int_photo',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_int_poste',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_int_photo' => 'left',
      'title' => 'right',
      'field_int_poste' => 'right',
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
  $export['node|intervenant|teaser'] = $ds_layout;

  return $export;
}
