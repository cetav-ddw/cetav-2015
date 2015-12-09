<?php
/**
 * @file
 * configuracion_cetav.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function configuracion_cetav_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'global_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_multi';
  $view->human_name = 'Global Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Global Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'search_api_multi';
  $handler->display->display_options['row_options']['view_mode'] = array(
    'node' => 'teaser',
    'fieldable_panels_pane' => 'full',
    'user' => 'full',
  );
  /* Field: Search: Default node index results */
  $handler->display->display_options['fields']['default_node_index']['id'] = 'default_node_index';
  $handler->display->display_options['fields']['default_node_index']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['default_node_index']['field'] = 'default_node_index';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_multi_fulltext']['id'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['table'] = 'search_api_multi';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['field'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['operator_id'] = 'search_api_multi_fulltext_op';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['operator'] = 'search_api_multi_fulltext_op';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['identifier'] = 'search_api_multi_fulltext';
  $handler->display->display_options['filters']['search_api_multi_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-results';
  $export['global_search'] = $view;

  return $export;
}
