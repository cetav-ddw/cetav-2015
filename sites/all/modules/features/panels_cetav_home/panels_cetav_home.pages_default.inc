<?php
/**
 * @file
 * panels_cetav_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_cetav_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cetav_home';
  $page->task = 'page';
  $page->admin_title = 'cetav-home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cetav_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'cetav_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'cetav_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'wide_second' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'wide' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide_third' => NULL,
      'left_second' => NULL,
      'right_second' => NULL,
      'wide_fourth' => NULL,
    ),
    'wide_second' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5f85cb3a-6557-4620-bbf4-d9d9248782fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8b1662c8-d514-4ea8-a555-cb2d72ff6c81';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b1662c8-d514-4ea8-a555-cb2d72ff6c81';
    $display->content['new-8b1662c8-d514-4ea8-a555-cb2d72ff6c81'] = $pane;
    $display->panels['left'][0] = 'new-8b1662c8-d514-4ea8-a555-cb2d72ff6c81';
    $pane = new stdClass();
    $pane->pid = 'new-3db7319d-b598-43e4-9845-74c27a29abac';
    $pane->panel = 'right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3db7319d-b598-43e4-9845-74c27a29abac';
    $display->content['new-3db7319d-b598-43e4-9845-74c27a29abac'] = $pane;
    $display->panels['right'][0] = 'new-3db7319d-b598-43e4-9845-74c27a29abac';
    $pane = new stdClass();
    $pane->pid = 'new-135e5cb3-ff31-4023-b8b5-7ac33a427352';
    $pane->panel = 'right_second';
    $pane->type = 'views';
    $pane->subtype = 'cursos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '135e5cb3-ff31-4023-b8b5-7ac33a427352';
    $display->content['new-135e5cb3-ff31-4023-b8b5-7ac33a427352'] = $pane;
    $display->panels['right_second'][0] = 'new-135e5cb3-ff31-4023-b8b5-7ac33a427352';
    $pane = new stdClass();
    $pane->pid = 'new-d7b5198c-6263-40e2-a656-895f2ec3bfeb';
    $pane->panel = 'wide_fourth';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:13';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd7b5198c-6263-40e2-a656-895f2ec3bfeb';
    $display->content['new-d7b5198c-6263-40e2-a656-895f2ec3bfeb'] = $pane;
    $display->panels['wide_fourth'][0] = 'new-d7b5198c-6263-40e2-a656-895f2ec3bfeb';
    $pane = new stdClass();
    $pane->pid = 'new-ce564dc6-f61f-4145-ad5c-cf6c3966d078';
    $pane->panel = 'wide_fourth';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce564dc6-f61f-4145-ad5c-cf6c3966d078';
    $display->content['new-ce564dc6-f61f-4145-ad5c-cf6c3966d078'] = $pane;
    $display->panels['wide_fourth'][1] = 'new-ce564dc6-f61f-4145-ad5c-cf6c3966d078';
    $pane = new stdClass();
    $pane->pid = 'new-10184f3b-815d-43c4-929b-d6d491e97ae9';
    $pane->panel = 'wide_fourth';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '10184f3b-815d-43c4-929b-d6d491e97ae9';
    $display->content['new-10184f3b-815d-43c4-929b-d6d491e97ae9'] = $pane;
    $display->panels['wide_fourth'][2] = 'new-10184f3b-815d-43c4-929b-d6d491e97ae9';
    $pane = new stdClass();
    $pane->pid = 'new-e73bfca0-ab8a-49f1-80bb-25e61216cbcb';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e73bfca0-ab8a-49f1-80bb-25e61216cbcb';
    $display->content['new-e73bfca0-ab8a-49f1-80bb-25e61216cbcb'] = $pane;
    $display->panels['wide_second'][0] = 'new-e73bfca0-ab8a-49f1-80bb-25e61216cbcb';
    $pane = new stdClass();
    $pane->pid = 'new-1791aed0-6227-4550-a730-74d2c3d55987';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1791aed0-6227-4550-a730-74d2c3d55987';
    $display->content['new-1791aed0-6227-4550-a730-74d2c3d55987'] = $pane;
    $display->panels['wide_second'][1] = 'new-1791aed0-6227-4550-a730-74d2c3d55987';
    $pane = new stdClass();
    $pane->pid = 'new-e214b345-bc3b-4eab-908a-56d12d2912d8';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e214b345-bc3b-4eab-908a-56d12d2912d8';
    $display->content['new-e214b345-bc3b-4eab-908a-56d12d2912d8'] = $pane;
    $display->panels['wide_second'][2] = 'new-e214b345-bc3b-4eab-908a-56d12d2912d8';
    $pane = new stdClass();
    $pane->pid = 'new-cb0c1e9d-249b-4ecd-ad9c-2c8bddcac5a5';
    $pane->panel = 'wide_third';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cb0c1e9d-249b-4ecd-ad9c-2c8bddcac5a5';
    $display->content['new-cb0c1e9d-249b-4ecd-ad9c-2c8bddcac5a5'] = $pane;
    $display->panels['wide_third'][0] = 'new-cb0c1e9d-249b-4ecd-ad9c-2c8bddcac5a5';
    $pane = new stdClass();
    $pane->pid = 'new-ed6b8c1c-199d-406c-a0d7-1ecf54d30862';
    $pane->panel = 'wide_third';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed6b8c1c-199d-406c-a0d7-1ecf54d30862';
    $display->content['new-ed6b8c1c-199d-406c-a0d7-1ecf54d30862'] = $pane;
    $display->panels['wide_third'][1] = 'new-ed6b8c1c-199d-406c-a0d7-1ecf54d30862';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_home'] = $page;

  return $pages;

}
