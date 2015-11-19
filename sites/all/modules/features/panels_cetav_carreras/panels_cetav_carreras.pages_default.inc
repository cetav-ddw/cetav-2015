<?php
/**
 * @file
 * panels_cetav_carreras.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_cetav_carreras_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_b3490c64-6ecd-4231-878e-bd7cb85eeb55';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Carreras',
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
        1 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'carreras' => 'carreras',
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
  $display->layout = 'cetav_carreras';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide_second' => NULL,
      'left_second' => NULL,
      'right_second' => NULL,
      'wide_third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '90d11c14-fdd2-459b-b437-100982658624';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93cd3aee-4f41-4462-8f6d-9f1b64c1c19a';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitulo_carrera';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = '93cd3aee-4f41-4462-8f6d-9f1b64c1c19a';
    $display->content['new-93cd3aee-4f41-4462-8f6d-9f1b64c1c19a'] = $pane;
    $display->panels['left'][0] = 'new-93cd3aee-4f41-4462-8f6d-9f1b64c1c19a';
    $pane = new stdClass();
    $pane->pid = 'new-090d990b-bf64-448f-adc5-82b74d640965';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = '090d990b-bf64-448f-adc5-82b74d640965';
    $display->content['new-090d990b-bf64-448f-adc5-82b74d640965'] = $pane;
    $display->panels['left'][1] = 'new-090d990b-bf64-448f-adc5-82b74d640965';
    $pane = new stdClass();
    $pane->pid = 'new-dc5f12c4-0cae-47a9-b03e-adc2e8d5976d';
    $pane->panel = 'left_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitulo_skills_carreras';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = 'dc5f12c4-0cae-47a9-b03e-adc2e8d5976d';
    $display->content['new-dc5f12c4-0cae-47a9-b03e-adc2e8d5976d'] = $pane;
    $display->panels['left_second'][0] = 'new-dc5f12c4-0cae-47a9-b03e-adc2e8d5976d';
    $pane = new stdClass();
    $pane->pid = 'new-00196396-1f00-48ec-ba09-54c9797833fb';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_carrera';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'video_embed_field_url',
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
    $pane->uuid = '00196396-1f00-48ec-ba09-54c9797833fb';
    $display->content['new-00196396-1f00-48ec-ba09-54c9797833fb'] = $pane;
    $display->panels['right'][0] = 'new-00196396-1f00-48ec-ba09-54c9797833fb';
    $pane = new stdClass();
    $pane->pid = 'new-e573a771-1da2-4e10-a4e4-9b2677ca4347';
    $pane->panel = 'right_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cuerpo_skills_carreras';
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
    $pane->uuid = 'e573a771-1da2-4e10-a4e4-9b2677ca4347';
    $display->content['new-e573a771-1da2-4e10-a4e4-9b2677ca4347'] = $pane;
    $display->panels['right_second'][0] = 'new-e573a771-1da2-4e10-a4e4-9b2677ca4347';
    $pane = new stdClass();
    $pane->pid = 'new-69a2b37d-1ee0-4c4f-8835-00918adb36c5';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_imagen_header_carrera';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
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
    $pane->uuid = '69a2b37d-1ee0-4c4f-8835-00918adb36c5';
    $display->content['new-69a2b37d-1ee0-4c4f-8835-00918adb36c5'] = $pane;
    $display->panels['wide'][0] = 'new-69a2b37d-1ee0-4c4f-8835-00918adb36c5';
    $pane = new stdClass();
    $pane->pid = 'new-73429617-500b-4466-a180-f096011ed564';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_programa_carreras';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'paragraphs_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->uuid = '73429617-500b-4466-a180-f096011ed564';
    $display->content['new-73429617-500b-4466-a180-f096011ed564'] = $pane;
    $display->panels['wide_second'][0] = 'new-73429617-500b-4466-a180-f096011ed564';
    $pane = new stdClass();
    $pane->pid = 'new-e9087383-398c-48da-89c1-84965b3f51a1';
    $pane->panel = 'wide_third';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_skills_carrera';
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
    $pane->uuid = 'e9087383-398c-48da-89c1-84965b3f51a1';
    $display->content['new-e9087383-398c-48da-89c1-84965b3f51a1'] = $pane;
    $display->panels['wide_third'][0] = 'new-e9087383-398c-48da-89c1-84965b3f51a1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_b3490c64-6ecd-4231-878e-bd7cb85eeb55'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_cetav_carreras_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cetav_carreras';
  $page->task = 'page';
  $page->admin_title = 'cetav-web';
  $page->admin_description = '';
  $page->path = 'diseno-desarrollo-web';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cetav_carreras__panel';
  $handler->task = 'page';
  $handler->subtask = 'cetav_carreras';
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
  $display->layout = 'cetav_carreras';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide_second' => NULL,
      'left_second' => NULL,
      'right_second' => NULL,
      'wide_third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7f3f8c9-76ad-490f-932f-8961a4aaa6de';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cetav_carreras__panel_context_d8cacdf2-424b-41a1-b25e-7ba8f7f6575e';
  $handler->task = 'page';
  $handler->subtask = 'cetav_carreras';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Carreras',
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
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'cetav_carreras';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide_second' => NULL,
      'left_second' => NULL,
      'right_second' => NULL,
      'wide_third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6f677c5d-16af-4765-b47a-4ab2e2a6321c';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_carreras'] = $page;

  return $pages;

}
