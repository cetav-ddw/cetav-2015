<?php
/**
 * @file
 * perfil_egresado_cetav.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function perfil_egresado_cetav_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'egresados';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Egresados';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_carrera_tecnica_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_disponibilidad_egresado_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_generacion_egresado_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'manati_texto_formato';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'perfil_egresado' => 'perfil_egresado',
  );
  /* Filter criterion: Content: Carrera Técnica (field_carrera_tecnica) */
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['id'] = 'field_carrera_tecnica_tid';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['table'] = 'field_data_field_carrera_tecnica';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['field'] = 'field_carrera_tecnica_tid';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['expose']['operator_id'] = 'field_carrera_tecnica_tid_op';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['expose']['label'] = 'Carreras';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['expose']['operator'] = 'field_carrera_tecnica_tid_op';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['expose']['identifier'] = 'field_carrera_tecnica_tid';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_carrera_tecnica_tid']['vocabulary'] = 'carrera_tecnica';
  /* Filter criterion: Content: Disponibilidad_Egresado (field_disponibilidad_egresado) */
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['id'] = 'field_disponibilidad_egresado_tid';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['table'] = 'field_data_field_disponibilidad_egresado';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['field'] = 'field_disponibilidad_egresado_tid';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['expose']['operator_id'] = 'field_disponibilidad_egresado_tid_op';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['expose']['label'] = 'Disponibilidad';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['expose']['operator'] = 'field_disponibilidad_egresado_tid_op';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['expose']['identifier'] = 'field_disponibilidad_egresado_tid';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_disponibilidad_egresado_tid']['vocabulary'] = 'disponibilidad';
  /* Filter criterion: Content: Generación Egresado (field_generacion_egresado) */
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['id'] = 'field_generacion_egresado_tid';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['table'] = 'field_data_field_generacion_egresado';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['field'] = 'field_generacion_egresado_tid';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['expose']['operator_id'] = 'field_generacion_egresado_tid_op';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['expose']['label'] = 'Generación';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['expose']['operator'] = 'field_generacion_egresado_tid_op';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['expose']['identifier'] = 'field_generacion_egresado_tid';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_generacion_egresado_tid']['vocabulary'] = 'generacion';

  /* Display: Egresados */
  $handler = $view->new_display('panel_pane', 'Egresados', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $export['egresados'] = $view;

  return $export;
}