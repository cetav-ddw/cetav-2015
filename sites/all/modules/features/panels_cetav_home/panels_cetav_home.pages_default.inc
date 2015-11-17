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
    $pane->pid = 'new-97d033da-e3af-4a98-ae49-7f67dbf79bfd';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
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
    $pane->uuid = '97d033da-e3af-4a98-ae49-7f67dbf79bfd';
    $display->content['new-97d033da-e3af-4a98-ae49-7f67dbf79bfd'] = $pane;
    $display->panels['left'][0] = 'new-97d033da-e3af-4a98-ae49-7f67dbf79bfd';
    $pane = new stdClass();
    $pane->pid = 'new-9e73dcfc-c724-4840-8943-619e342dcf8b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e73dcfc-c724-4840-8943-619e342dcf8b';
    $display->content['new-9e73dcfc-c724-4840-8943-619e342dcf8b'] = $pane;
    $display->panels['right'][0] = 'new-9e73dcfc-c724-4840-8943-619e342dcf8b';
    $pane = new stdClass();
    $pane->pid = 'new-272c930a-4d25-4170-8f73-d799f7a5109d';
    $pane->panel = 'right_second';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '272c930a-4d25-4170-8f73-d799f7a5109d';
    $display->content['new-272c930a-4d25-4170-8f73-d799f7a5109d'] = $pane;
    $display->panels['right_second'][0] = 'new-272c930a-4d25-4170-8f73-d799f7a5109d';
    $pane = new stdClass();
    $pane->pid = 'new-7eb704d0-b5d6-4eae-b536-19799372854f';
    $pane->panel = 'wide';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7eb704d0-b5d6-4eae-b536-19799372854f';
    $display->content['new-7eb704d0-b5d6-4eae-b536-19799372854f'] = $pane;
    $display->panels['wide'][0] = 'new-7eb704d0-b5d6-4eae-b536-19799372854f';
    $pane = new stdClass();
    $pane->pid = 'new-182bc8e4-ec17-4fcb-b942-57ff5dd8735c';
    $pane->panel = 'wide_fourth';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '182bc8e4-ec17-4fcb-b942-57ff5dd8735c';
    $display->content['new-182bc8e4-ec17-4fcb-b942-57ff5dd8735c'] = $pane;
    $display->panels['wide_fourth'][0] = 'new-182bc8e4-ec17-4fcb-b942-57ff5dd8735c';
    $pane = new stdClass();
    $pane->pid = 'new-3eb4e077-72f8-4ab4-8f33-6bdb747e69be';
    $pane->panel = 'wide_fourth';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3eb4e077-72f8-4ab4-8f33-6bdb747e69be';
    $display->content['new-3eb4e077-72f8-4ab4-8f33-6bdb747e69be'] = $pane;
    $display->panels['wide_fourth'][1] = 'new-3eb4e077-72f8-4ab4-8f33-6bdb747e69be';
    $pane = new stdClass();
    $pane->pid = 'new-ded60a78-8ed6-49e8-8cce-0ee6efb508d0';
    $pane->panel = 'wide_fourth';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:15';
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
    $pane->uuid = 'ded60a78-8ed6-49e8-8cce-0ee6efb508d0';
    $display->content['new-ded60a78-8ed6-49e8-8cce-0ee6efb508d0'] = $pane;
    $display->panels['wide_fourth'][2] = 'new-ded60a78-8ed6-49e8-8cce-0ee6efb508d0';
    $pane = new stdClass();
    $pane->pid = 'new-a5ea2847-c7a0-49b0-a45c-53b33bae9756';
    $pane->panel = 'wide_fourth';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a5ea2847-c7a0-49b0-a45c-53b33bae9756';
    $display->content['new-a5ea2847-c7a0-49b0-a45c-53b33bae9756'] = $pane;
    $display->panels['wide_fourth'][3] = 'new-a5ea2847-c7a0-49b0-a45c-53b33bae9756';
    $pane = new stdClass();
    $pane->pid = 'new-cba1204b-485e-4edd-8a3f-3958f57e9eaa';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'cba1204b-485e-4edd-8a3f-3958f57e9eaa';
    $display->content['new-cba1204b-485e-4edd-8a3f-3958f57e9eaa'] = $pane;
    $display->panels['wide_fourth'][4] = 'new-cba1204b-485e-4edd-8a3f-3958f57e9eaa';
    $pane = new stdClass();
    $pane->pid = 'new-e09bf29b-260b-4662-9db6-ab1ae07f1c22';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e09bf29b-260b-4662-9db6-ab1ae07f1c22';
    $display->content['new-e09bf29b-260b-4662-9db6-ab1ae07f1c22'] = $pane;
    $display->panels['wide_fourth'][5] = 'new-e09bf29b-260b-4662-9db6-ab1ae07f1c22';
    $pane = new stdClass();
    $pane->pid = 'new-08714abf-f37f-4237-9b0d-1f1958968b19';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '08714abf-f37f-4237-9b0d-1f1958968b19';
    $display->content['new-08714abf-f37f-4237-9b0d-1f1958968b19'] = $pane;
    $display->panels['wide_fourth'][6] = 'new-08714abf-f37f-4237-9b0d-1f1958968b19';
    $pane = new stdClass();
    $pane->pid = 'new-b2e3dc2e-20bd-4229-9089-9ac2dce5dc8c';
    $pane->panel = 'wide_fourth';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b2e3dc2e-20bd-4229-9089-9ac2dce5dc8c';
    $display->content['new-b2e3dc2e-20bd-4229-9089-9ac2dce5dc8c'] = $pane;
    $display->panels['wide_fourth'][7] = 'new-b2e3dc2e-20bd-4229-9089-9ac2dce5dc8c';
    $pane = new stdClass();
    $pane->pid = 'new-7fbd03c7-9a70-4e52-83f6-ccc74b924776';
    $pane->panel = 'wide_fourth';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '7fbd03c7-9a70-4e52-83f6-ccc74b924776';
    $display->content['new-7fbd03c7-9a70-4e52-83f6-ccc74b924776'] = $pane;
    $display->panels['wide_fourth'][8] = 'new-7fbd03c7-9a70-4e52-83f6-ccc74b924776';
    $pane = new stdClass();
    $pane->pid = 'new-c0f5ab18-2e9e-4627-b556-3fd37e89f296';
    $pane->panel = 'wide_fourth';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'c0f5ab18-2e9e-4627-b556-3fd37e89f296';
    $display->content['new-c0f5ab18-2e9e-4627-b556-3fd37e89f296'] = $pane;
    $display->panels['wide_fourth'][9] = 'new-c0f5ab18-2e9e-4627-b556-3fd37e89f296';
    $pane = new stdClass();
    $pane->pid = 'new-970e2f5e-341a-4aaa-95d6-756db4d55f9f';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'carreras-container',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '970e2f5e-341a-4aaa-95d6-756db4d55f9f';
    $display->content['new-970e2f5e-341a-4aaa-95d6-756db4d55f9f'] = $pane;
    $display->panels['wide_second'][0] = 'new-970e2f5e-341a-4aaa-95d6-756db4d55f9f';
    $pane = new stdClass();
    $pane->pid = 'new-ee2a6cd7-0e30-4922-805c-c83e1ca56dfb';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'carreras-container',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ee2a6cd7-0e30-4922-805c-c83e1ca56dfb';
    $display->content['new-ee2a6cd7-0e30-4922-805c-c83e1ca56dfb'] = $pane;
    $display->panels['wide_second'][1] = 'new-ee2a6cd7-0e30-4922-805c-c83e1ca56dfb';
    $pane = new stdClass();
    $pane->pid = 'new-ef9b46a5-e1d1-432b-b253-e7917f2a99da';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'carreras-container',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ef9b46a5-e1d1-432b-b253-e7917f2a99da';
    $display->content['new-ef9b46a5-e1d1-432b-b253-e7917f2a99da'] = $pane;
    $display->panels['wide_second'][2] = 'new-ef9b46a5-e1d1-432b-b253-e7917f2a99da';
    $pane = new stdClass();
    $pane->pid = 'new-e5b10145-fc48-4fc0-87ca-6c21dc892ebf';
    $pane->panel = 'wide_third';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5b10145-fc48-4fc0-87ca-6c21dc892ebf';
    $display->content['new-e5b10145-fc48-4fc0-87ca-6c21dc892ebf'] = $pane;
    $display->panels['wide_third'][0] = 'new-e5b10145-fc48-4fc0-87ca-6c21dc892ebf';
    $pane = new stdClass();
    $pane->pid = 'new-67de989f-555e-467f-a96b-48f4390229f8';
    $pane->panel = 'wide_third';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67de989f-555e-467f-a96b-48f4390229f8';
    $display->content['new-67de989f-555e-467f-a96b-48f4390229f8'] = $pane;
    $display->panels['wide_third'][1] = 'new-67de989f-555e-467f-a96b-48f4390229f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_home'] = $page;

  return $pages;

}
