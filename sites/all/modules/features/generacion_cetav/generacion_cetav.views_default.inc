<?php
/**
 * @file
 * generacion_cetav.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function generacion_cetav_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'generacion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'generacion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  /* Field: Content: btn-anuario */
  $handler->display->display_options['fields']['field_btn_anuario']['id'] = 'field_btn_anuario';
  $handler->display->display_options['fields']['field_btn_anuario']['table'] = 'field_data_field_btn_anuario';
  $handler->display->display_options['fields']['field_btn_anuario']['field'] = 'field_btn_anuario';
  /* Field: Content: Reel Generación */
  $handler->display->display_options['fields']['field_reel_generacion']['id'] = 'field_reel_generacion';
  $handler->display->display_options['fields']['field_reel_generacion']['table'] = 'field_data_field_reel_generacion';
  $handler->display->display_options['fields']['field_reel_generacion']['field'] = 'field_reel_generacion';
  /* Field: Content: testimonios */
  $handler->display->display_options['fields']['field_testimonios']['id'] = 'field_testimonios';
  $handler->display->display_options['fields']['field_testimonios']['table'] = 'field_data_field_testimonios';
  $handler->display->display_options['fields']['field_testimonios']['field'] = 'field_testimonios';
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
    'generacion' => 'generacion',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_btn_anuario',
    2 => 'field_reel_generacion',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'generation';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-generaciones';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: btn-anuario */
  $handler->display->display_options['fields']['field_btn_anuario']['id'] = 'field_btn_anuario';
  $handler->display->display_options['fields']['field_btn_anuario']['table'] = 'field_data_field_btn_anuario';
  $handler->display->display_options['fields']['field_btn_anuario']['field'] = 'field_btn_anuario';
  $handler->display->display_options['fields']['field_btn_anuario']['label'] = '';
  $handler->display->display_options['fields']['field_btn_anuario']['element_class'] = 'btn btn-yearbook';
  $handler->display->display_options['fields']['field_btn_anuario']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_btn_anuario']['click_sort_column'] = 'url';
  /* Field: Content: Reel Generación */
  $handler->display->display_options['fields']['field_reel_generacion']['id'] = 'field_reel_generacion';
  $handler->display->display_options['fields']['field_reel_generacion']['table'] = 'field_data_field_reel_generacion';
  $handler->display->display_options['fields']['field_reel_generacion']['field'] = 'field_reel_generacion';
  $handler->display->display_options['fields']['field_reel_generacion']['label'] = '';
  $handler->display->display_options['fields']['field_reel_generacion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reel_generacion']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_reel_generacion']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Field: Content: testimonios */
  $handler->display->display_options['fields']['field_testimonios']['id'] = 'field_testimonios';
  $handler->display->display_options['fields']['field_testimonios']['table'] = 'field_data_field_testimonios';
  $handler->display->display_options['fields']['field_testimonios']['field'] = 'field_testimonios';
  $handler->display->display_options['fields']['field_testimonios']['label'] = '';
  $handler->display->display_options['fields']['field_testimonios']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_testimonios']['element_class'] = 'testimonial';
  $handler->display->display_options['fields']['field_testimonios']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonios']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['pane_category']['name'] = 'cetav';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['generacion'] = $view;

  return $export;
}
