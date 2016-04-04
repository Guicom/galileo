<?php
/**
 * @file
 * ga_ct_evenement.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ga_ct_evenement_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_adresse|registration|evenement|form';
  $field_group->group_name = 'group_registration_adresse';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'evenement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adresse de facturation',
    'weight' => '3',
    'children' => array(
      0 => 'field_registration_adresse',
      1 => 'field_registration_postal',
      2 => 'field_registration_ville',
      3 => 'field_registration_adresse_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adresse de facturation',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-registration-adresse field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_registration_adresse|registration|evenement|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adresse de facturation');

  return $field_groups;
}
