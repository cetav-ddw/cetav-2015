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
      'left_third' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => 'div',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'right_third' => NULL,
    ),
    'wide_second' => array(
      'style' => 'semantic_panels',
    ),
    'left_third' => array(
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
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'logo-cetav-home',
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
    $pane->uuid = '8b1662c8-d514-4ea8-a555-cb2d72ff6c81';
    $display->content['new-8b1662c8-d514-4ea8-a555-cb2d72ff6c81'] = $pane;
    $display->panels['left'][0] = 'new-8b1662c8-d514-4ea8-a555-cb2d72ff6c81';
    $pane = new stdClass();
    $pane->pid = 'new-a1046911-13f0-43ee-965c-77454acaa059';
    $pane->panel = 'left_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:22';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
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
          'class' => 'section-title-free-course',
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
          'class_enable' => 1,
          'class' => 'free-courses',
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
    $pane->uuid = 'a1046911-13f0-43ee-965c-77454acaa059';
    $display->content['new-a1046911-13f0-43ee-965c-77454acaa059'] = $pane;
    $display->panels['left_second'][0] = 'new-a1046911-13f0-43ee-965c-77454acaa059';
    $pane = new stdClass();
    $pane->pid = 'new-59c2459f-d28f-430f-905f-ae12c5bdb381';
    $pane->panel = 'left_third';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:35';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59c2459f-d28f-430f-905f-ae12c5bdb381';
    $display->content['new-59c2459f-d28f-430f-905f-ae12c5bdb381'] = $pane;
    $display->panels['left_third'][0] = 'new-59c2459f-d28f-430f-905f-ae12c5bdb381';
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
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'course-description',
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
    $pane->uuid = '3db7319d-b598-43e4-9845-74c27a29abac';
    $display->content['new-3db7319d-b598-43e4-9845-74c27a29abac'] = $pane;
    $display->panels['right'][0] = 'new-3db7319d-b598-43e4-9845-74c27a29abac';
    $pane = new stdClass();
    $pane->pid = 'new-2d3900a4-66fa-4b7c-b1b4-ae79c90fa3a2';
    $pane->panel = 'right_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:23';
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
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'text-course-description',
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
    $pane->uuid = '2d3900a4-66fa-4b7c-b1b4-ae79c90fa3a2';
    $display->content['new-2d3900a4-66fa-4b7c-b1b4-ae79c90fa3a2'] = $pane;
    $display->panels['right_second'][0] = 'new-2d3900a4-66fa-4b7c-b1b4-ae79c90fa3a2';
    $pane = new stdClass();
    $pane->pid = 'new-135e5cb3-ff31-4023-b8b5-7ac33a427352';
    $pane->panel = 'right_third';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '135e5cb3-ff31-4023-b8b5-7ac33a427352';
    $display->content['new-135e5cb3-ff31-4023-b8b5-7ac33a427352'] = $pane;
    $display->panels['right_third'][0] = 'new-135e5cb3-ff31-4023-b8b5-7ac33a427352';
    $pane = new stdClass();
    $pane->pid = 'new-52d0d940-7b4e-4e74-8853-bf9d179f8322';
    $pane->panel = 'wide';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="max-content content-header">
      <div class="type-wrap">
            <p>Somos</p>
            <div id="typed-strings" style="display: none;">
                <p><strong>Creatividad, Innovación y Tecnología</strong></p>
            </div>
            <span id="typed"><strong>Creatividad, Innovación y Tecnología</strong></span><span class="typed-cursor">|</span>
        </div>
    </div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52d0d940-7b4e-4e74-8853-bf9d179f8322';
    $display->content['new-52d0d940-7b4e-4e74-8853-bf9d179f8322'] = $pane;
    $display->panels['wide'][0] = 'new-52d0d940-7b4e-4e74-8853-bf9d179f8322';
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
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'section-title-allies',
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
    $pane->uuid = '10184f3b-815d-43c4-929b-d6d491e97ae9';
    $display->content['new-10184f3b-815d-43c4-929b-d6d491e97ae9'] = $pane;
    $display->panels['wide_fourth'][0] = 'new-10184f3b-815d-43c4-929b-d6d491e97ae9';
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
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'text-course-container',
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
    $pane->uuid = 'ce564dc6-f61f-4145-ad5c-cf6c3966d078';
    $display->content['new-ce564dc6-f61f-4145-ad5c-cf6c3966d078'] = $pane;
    $display->panels['wide_fourth'][1] = 'new-ce564dc6-f61f-4145-ad5c-cf6c3966d078';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd7b5198c-6263-40e2-a656-895f2ec3bfeb';
    $display->content['new-d7b5198c-6263-40e2-a656-895f2ec3bfeb'] = $pane;
    $display->panels['wide_fourth'][2] = 'new-d7b5198c-6263-40e2-a656-895f2ec3bfeb';
    $pane = new stdClass();
    $pane->pid = 'new-735a11f3-fba7-45b4-b64d-2bfc3807b693';
    $pane->panel = 'wide_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'carreras_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '735a11f3-fba7-45b4-b64d-2bfc3807b693';
    $display->content['new-735a11f3-fba7-45b4-b64d-2bfc3807b693'] = $pane;
    $display->panels['wide_second'][0] = 'new-735a11f3-fba7-45b4-b64d-2bfc3807b693';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_home'] = $page;

  return $pages;

}
