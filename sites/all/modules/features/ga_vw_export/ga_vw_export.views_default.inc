<?php
/**
 * @file
 * ga_vw_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ga_vw_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export_registration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Export registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export registration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'registration_id' => 'registration_id',
    'field_registration_adresse' => 'field_registration_adresse',
    'field_registration_nom' => 'field_registration_nom',
    'field_registration_prenom' => 'field_registration_prenom',
    'field_registration_fonction' => 'field_registration_fonction',
    'field_registration_societe' => 'field_registration_societe',
    'field_registration_email' => 'field_registration_email',
    'field_registration_phone' => 'field_registration_phone',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_adresse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_nom' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_prenom' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_fonction' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_societe' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_registration_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Registration: Participant(s) (field_registration_accompagnant) */
  $handler->display->display_options['relationships']['field_registration_accompagnant_value']['id'] = 'field_registration_accompagnant_value';
  $handler->display->display_options['relationships']['field_registration_accompagnant_value']['table'] = 'field_data_field_registration_accompagnant';
  $handler->display->display_options['relationships']['field_registration_accompagnant_value']['field'] = 'field_registration_accompagnant_value';
  $handler->display->display_options['relationships']['field_registration_accompagnant_value']['delta'] = '-1';
  /* Relationship: Registration: Registration to Node */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Numéro d\'enregistrements';
  /* Field: Registration: Adresse  */
  $handler->display->display_options['fields']['field_registration_adresse']['id'] = 'field_registration_adresse';
  $handler->display->display_options['fields']['field_registration_adresse']['table'] = 'field_data_field_registration_adresse';
  $handler->display->display_options['fields']['field_registration_adresse']['field'] = 'field_registration_adresse';
  $handler->display->display_options['fields']['field_registration_adresse']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_registration_adresse']['exclude'] = TRUE;
  /* Field: Registration: Adresse 2 */
  $handler->display->display_options['fields']['field_registration_adresse_2']['id'] = 'field_registration_adresse_2';
  $handler->display->display_options['fields']['field_registration_adresse_2']['table'] = 'field_data_field_registration_adresse_2';
  $handler->display->display_options['fields']['field_registration_adresse_2']['field'] = 'field_registration_adresse_2';
  $handler->display->display_options['fields']['field_registration_adresse_2']['exclude'] = TRUE;
  /* Field: Registration: Code postal */
  $handler->display->display_options['fields']['field_registration_postal']['id'] = 'field_registration_postal';
  $handler->display->display_options['fields']['field_registration_postal']['table'] = 'field_data_field_registration_postal';
  $handler->display->display_options['fields']['field_registration_postal']['field'] = 'field_registration_postal';
  $handler->display->display_options['fields']['field_registration_postal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_registration_postal']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Registration: Ville */
  $handler->display->display_options['fields']['field_registration_ville']['id'] = 'field_registration_ville';
  $handler->display->display_options['fields']['field_registration_ville']['table'] = 'field_data_field_registration_ville';
  $handler->display->display_options['fields']['field_registration_ville']['field'] = 'field_registration_ville';
  $handler->display->display_options['fields']['field_registration_ville']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Adresse de facturation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_registration_adresse]<br>
[field_registration_adresse_2]<br>
[field_registration_postal] [field_registration_ville]';
  /* Field: Field collection item: Nom */
  $handler->display->display_options['fields']['field_registration_nom']['id'] = 'field_registration_nom';
  $handler->display->display_options['fields']['field_registration_nom']['table'] = 'field_data_field_registration_nom';
  $handler->display->display_options['fields']['field_registration_nom']['field'] = 'field_registration_nom';
  $handler->display->display_options['fields']['field_registration_nom']['relationship'] = 'field_registration_accompagnant_value';
  /* Field: Field collection item: Prénom */
  $handler->display->display_options['fields']['field_registration_prenom']['id'] = 'field_registration_prenom';
  $handler->display->display_options['fields']['field_registration_prenom']['table'] = 'field_data_field_registration_prenom';
  $handler->display->display_options['fields']['field_registration_prenom']['field'] = 'field_registration_prenom';
  $handler->display->display_options['fields']['field_registration_prenom']['relationship'] = 'field_registration_accompagnant_value';
  /* Field: Field collection item: Fonction */
  $handler->display->display_options['fields']['field_registration_fonction']['id'] = 'field_registration_fonction';
  $handler->display->display_options['fields']['field_registration_fonction']['table'] = 'field_data_field_registration_fonction';
  $handler->display->display_options['fields']['field_registration_fonction']['field'] = 'field_registration_fonction';
  $handler->display->display_options['fields']['field_registration_fonction']['relationship'] = 'field_registration_accompagnant_value';
  /* Field: Field collection item: Société  */
  $handler->display->display_options['fields']['field_registration_societe']['id'] = 'field_registration_societe';
  $handler->display->display_options['fields']['field_registration_societe']['table'] = 'field_data_field_registration_societe';
  $handler->display->display_options['fields']['field_registration_societe']['field'] = 'field_registration_societe';
  $handler->display->display_options['fields']['field_registration_societe']['relationship'] = 'field_registration_accompagnant_value';
  /* Field: Field collection item: Email */
  $handler->display->display_options['fields']['field_registration_mail']['id'] = 'field_registration_mail';
  $handler->display->display_options['fields']['field_registration_mail']['table'] = 'field_data_field_registration_mail';
  $handler->display->display_options['fields']['field_registration_mail']['field'] = 'field_registration_mail';
  $handler->display->display_options['fields']['field_registration_mail']['relationship'] = 'field_registration_accompagnant_value';
  /* Field: Field collection item: Téléphone portable */
  $handler->display->display_options['fields']['field_registration_phone']['id'] = 'field_registration_phone';
  $handler->display->display_options['fields']['field_registration_phone']['table'] = 'field_data_field_registration_phone';
  $handler->display->display_options['fields']['field_registration_phone']['field'] = 'field_registration_phone';
  $handler->display->display_options['fields']['field_registration_phone']['relationship'] = 'field_registration_accompagnant_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Inscrit le';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'registration_related_node';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Evènements :';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'registration-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Inscriptions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = ';';
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['style_options']['encoding'] = 'utf8_decode';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'registration-all/export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['export_registration'] = array(
    t('Master'),
    t('Export registration'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field collection item from field_registration_accompagnant'),
    t('node from Registration'),
    t('Numéro d\'enregistrements'),
    t('.'),
    t(','),
    t('Adresse'),
    t('Adresse 2'),
    t('Code postal'),
    t('Ville'),
    t('Adresse de facturation'),
    t('[field_registration_adresse]<br>
[field_registration_adresse_2]<br>
[field_registration_postal] [field_registration_ville]'),
    t('Nom'),
    t('Prénom'),
    t('Fonction'),
    t('Société '),
    t('Email'),
    t('Téléphone portable'),
    t('Inscrit le'),
    t('All'),
    t('Evènements :'),
    t('Page'),
    t('Data export'),
  );
  $export['export_registration'] = $view;

  return $export;
}
