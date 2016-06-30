<?php
/**
 * @file
 * panels_cetav_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function panels_cetav_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carreras_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'carreras-home';
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Conozca más';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>
<div class"view-more-careers">
[view_node]
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-course ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'carreras' => 'carreras',
  );

  /* Display: carreras-home */
  $handler = $view->new_display('panel_pane', 'carreras-home', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'cetav';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['carreras_home'] = $view;

  $view = new view();
  $view->name = 'cursos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'cursos';
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
    'actualizacion_profesional' => 'actualizacion_profesional',
  );

  /* Display: proximos-cursos */
  $handler = $view->new_display('block', 'proximos-cursos', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'list-items';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'tiltle-course-item';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Fecha del curso */
  $handler->display->display_options['fields']['field_fecha_curso']['id'] = 'field_fecha_curso';
  $handler->display->display_options['fields']['field_fecha_curso']['table'] = 'field_data_field_fecha_curso';
  $handler->display->display_options['fields']['field_fecha_curso']['field'] = 'field_fecha_curso';
  $handler->display->display_options['fields']['field_fecha_curso']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_curso']['element_class'] = 'date-course-item';
  $handler->display->display_options['fields']['field_fecha_curso']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_curso']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn-course';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Detalles del curso';

  /* Display: prev-cursos */
  $handler = $view->new_display('block', 'prev-cursos', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'layout-minim course-listing';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen-curso */
  $handler->display->display_options['fields']['field_imagen_curso']['id'] = 'field_imagen_curso';
  $handler->display->display_options['fields']['field_imagen_curso']['table'] = 'field_data_field_imagen_curso';
  $handler->display->display_options['fields']['field_imagen_curso']['field'] = 'field_imagen_curso';
  $handler->display->display_options['fields']['field_imagen_curso']['label'] = '';
  $handler->display->display_options['fields']['field_imagen_curso']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imagen_curso']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_curso']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imagen_curso']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imagen_curso']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagen_curso']['settings'] = array(
    'image_style' => 'imagen_cursos_perfil_profesional',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Fecha del curso */
  $handler->display->display_options['fields']['field_fecha_curso']['id'] = 'field_fecha_curso';
  $handler->display->display_options['fields']['field_fecha_curso']['table'] = 'field_data_field_fecha_curso';
  $handler->display->display_options['fields']['field_fecha_curso']['field'] = 'field_fecha_curso';
  $handler->display->display_options['fields']['field_fecha_curso']['label'] = '';
  $handler->display->display_options['fields']['field_fecha_curso']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fecha_curso']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fecha_curso']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_curso']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fecha_curso']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fecha_curso']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Precio */
  $handler->display->display_options['fields']['field_precio']['id'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['table'] = 'field_data_field_precio';
  $handler->display->display_options['fields']['field_precio']['field'] = 'field_precio';
  $handler->display->display_options['fields']['field_precio']['label'] = '';
  $handler->display->display_options['fields']['field_precio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_precio']['alter']['text'] = '<h5 class="prev-title-course">[title]</h5>
[field_fecha_curso]
<p class="price">[field_precio]</p>';
  $handler->display->display_options['fields']['field_precio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_precio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precio']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_precio']['element_wrapper_class'] = 'details';
  $handler->display->display_options['fields']['field_precio']['element_default_classes'] = FALSE;
  $export['cursos'] = $view;

  return $export;
}
