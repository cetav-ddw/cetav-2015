<?php
/**
 * @file
 * prev_cursos_libres.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function prev_cursos_libres_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_b8cc5456-1ae8-441d-85c5-7a0391a6ac75';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'institucion',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'institucion' => 'institucion',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'cetav_institucion';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide_main' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide' => NULL,
      'left_second' => NULL,
      'right_second' => NULL,
      'wide_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '68a0e7d2-481c-47e9-ace2-f560f1da9a3e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9e6912fe-f0b5-441c-bafc-375574b89115';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitulo_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '9e6912fe-f0b5-441c-bafc-375574b89115';
    $display->content['new-9e6912fe-f0b5-441c-bafc-375574b89115'] = $pane;
    $display->panels['left'][0] = 'new-9e6912fe-f0b5-441c-bafc-375574b89115';
    $pane = new stdClass();
    $pane->pid = 'new-4d40f456-7914-4c20-8760-f18ee2b9ec3d';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cuerpo_descripcion_institu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4d40f456-7914-4c20-8760-f18ee2b9ec3d';
    $display->content['new-4d40f456-7914-4c20-8760-f18ee2b9ec3d'] = $pane;
    $display->panels['left'][1] = 'new-4d40f456-7914-4c20-8760-f18ee2b9ec3d';
    $pane = new stdClass();
    $pane->pid = 'new-ddd23692-f15c-48ff-916f-4a535dabb7b7';
    $pane->panel = 'left_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitulo_consejo_instituc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'ddd23692-f15c-48ff-916f-4a535dabb7b7';
    $display->content['new-ddd23692-f15c-48ff-916f-4a535dabb7b7'] = $pane;
    $display->panels['left_second'][0] = 'new-ddd23692-f15c-48ff-916f-4a535dabb7b7';
    $pane = new stdClass();
    $pane->pid = 'new-74321510-ef01-43ce-8815-57c65178a788';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'video_embed_field',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'video_style' => 'normal',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '74321510-ef01-43ce-8815-57c65178a788';
    $display->content['new-74321510-ef01-43ce-8815-57c65178a788'] = $pane;
    $display->panels['right'][0] = 'new-74321510-ef01-43ce-8815-57c65178a788';
    $pane = new stdClass();
    $pane->pid = 'new-37f13a90-f6d2-4e68-b95f-ba67936ca834';
    $pane->panel = 'right_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cuerpo_descripcion_consejo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '37f13a90-f6d2-4e68-b95f-ba67936ca834';
    $display->content['new-37f13a90-f6d2-4e68-b95f-ba67936ca834'] = $pane;
    $display->panels['right_second'][0] = 'new-37f13a90-f6d2-4e68-b95f-ba67936ca834';
    $pane = new stdClass();
    $pane->pid = 'new-c08f795b-acc8-4f3c-a194-ddc3eff27823';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_colaboradores_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'c08f795b-acc8-4f3c-a194-ddc3eff27823';
    $display->content['new-c08f795b-acc8-4f3c-a194-ddc3eff27823'] = $pane;
    $display->panels['wide'][0] = 'new-c08f795b-acc8-4f3c-a194-ddc3eff27823';
    $pane = new stdClass();
    $pane->pid = 'new-5d347486-57b3-46f9-8afc-2d0ca2e866fe';
    $pane->panel = 'wide_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_imagen_header_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '5d347486-57b3-46f9-8afc-2d0ca2e866fe';
    $display->content['new-5d347486-57b3-46f9-8afc-2d0ca2e866fe'] = $pane;
    $display->panels['wide_main'][0] = 'new-5d347486-57b3-46f9-8afc-2d0ca2e866fe';
    $pane = new stdClass();
    $pane->pid = 'new-46d71f3a-79af-4591-b758-dd0accd8a1cd';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_consejo_asesor_institucion';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'paragraphs_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '46d71f3a-79af-4591-b758-dd0accd8a1cd';
    $display->content['new-46d71f3a-79af-4591-b758-dd0accd8a1cd'] = $pane;
    $display->panels['wide_second'][0] = 'new-46d71f3a-79af-4591-b758-dd0accd8a1cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_b8cc5456-1ae8-441d-85c5-7a0391a6ac75'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function prev_cursos_libres_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cetav_prev_cursos_libres';
  $page->task = 'page';
  $page->admin_title = 'cetav-prev-cursos-libres';
  $page->admin_description = '';
  $page->path = 'actualizacion-profecional';
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
  $handler->name = 'page_cetav_prev_cursos_libres__panel';
  $handler->task = 'page';
  $handler->subtask = 'cetav_prev_cursos_libres';
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
  $display->layout = 'cetav_prev-cursos-libres';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide' => NULL,
      'wide_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b0e92492-1b9b-48d3-a42b-0c5ee5fc07ad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9729c56d-f183-47d6-95b6-fd47d5c6c35c';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:21';
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
    $pane->uuid = '9729c56d-f183-47d6-95b6-fd47d5c6c35c';
    $display->content['new-9729c56d-f183-47d6-95b6-fd47d5c6c35c'] = $pane;
    $display->panels['left'][0] = 'new-9729c56d-f183-47d6-95b6-fd47d5c6c35c';
    $pane = new stdClass();
    $pane->pid = 'new-f8da8dae-59e3-4174-94e5-d70b5f1823c1';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p dir="ltr"><b id="docs-internal-guid-639b0e3e-69c4-725b-df92-1da96a3220b1">Nuestros programas le permiten a los profesionales capacitarse y mantenerse actualizado, brindando nuevas herramientas y conocimientos que les permitan mantenerse en la cima del mercado audiovisual y digital. La misma que pusimos arriba.</b></p><p>&nbsp;</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f8da8dae-59e3-4174-94e5-d70b5f1823c1';
    $display->content['new-f8da8dae-59e3-4174-94e5-d70b5f1823c1'] = $pane;
    $display->panels['right'][0] = 'new-f8da8dae-59e3-4174-94e5-d70b5f1823c1';
    $pane = new stdClass();
    $pane->pid = 'new-53824c78-ab74-4799-ba92-33190312c632';
    $pane->panel = 'wide_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h4>Cursos libres</h4>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53824c78-ab74-4799-ba92-33190312c632';
    $display->content['new-53824c78-ab74-4799-ba92-33190312c632'] = $pane;
    $display->panels['wide_second'][0] = 'new-53824c78-ab74-4799-ba92-33190312c632';
    $pane = new stdClass();
    $pane->pid = 'new-4617e686-ca1b-4d14-966d-5189667426f5';
    $pane->panel = 'wide_second';
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
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4617e686-ca1b-4d14-966d-5189667426f5';
    $display->content['new-4617e686-ca1b-4d14-966d-5189667426f5'] = $pane;
    $display->panels['wide_second'][1] = 'new-4617e686-ca1b-4d14-966d-5189667426f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_prev_cursos_libres'] = $page;

  return $pages;

}
