<?php
/**
 * @file
 * panels_cetav_admision.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_cetav_admision_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_a495e2af-4501-479e-a65c-7bf840338825';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'admision',
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
              'admision' => 'admision',
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
  $display->layout = 'cetav_admision';
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
  $display->uuid = '19ffa34e-8c3b-4530-ad0a-d597648cc725';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4f4a06d-57b4-4ba5-ad4d-2300e4e1ddb0';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_subtitulo_introduccion_adm';
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
    $pane->uuid = 'e4f4a06d-57b4-4ba5-ad4d-2300e4e1ddb0';
    $display->content['new-e4f4a06d-57b4-4ba5-ad4d-2300e4e1ddb0'] = $pane;
    $display->panels['left'][0] = 'new-e4f4a06d-57b4-4ba5-ad4d-2300e4e1ddb0';
    $pane = new stdClass();
    $pane->pid = 'new-26b5f929-43b4-40bf-8c97-392e212603df';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cuerpo_introduccion_admisi';
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
    $pane->uuid = '26b5f929-43b4-40bf-8c97-392e212603df';
    $display->content['new-26b5f929-43b4-40bf-8c97-392e212603df'] = $pane;
    $display->panels['right'][0] = 'new-26b5f929-43b4-40bf-8c97-392e212603df';
    $pane = new stdClass();
    $pane->pid = 'new-17591572-3b5c-4397-81f5-98708327934e';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_requisitos_admision';
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
    $pane->uuid = '17591572-3b5c-4397-81f5-98708327934e';
    $display->content['new-17591572-3b5c-4397-81f5-98708327934e'] = $pane;
    $display->panels['wide'][0] = 'new-17591572-3b5c-4397-81f5-98708327934e';
    $pane = new stdClass();
    $pane->pid = 'new-9d5d0d32-d7ba-41bb-99e3-e35ccad31f79';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pasos_admision';
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
    $pane->uuid = '9d5d0d32-d7ba-41bb-99e3-e35ccad31f79';
    $display->content['new-9d5d0d32-d7ba-41bb-99e3-e35ccad31f79'] = $pane;
    $display->panels['wide_second'][0] = 'new-9d5d0d32-d7ba-41bb-99e3-e35ccad31f79';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_a495e2af-4501-479e-a65c-7bf840338825'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_cetav_admision_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cetav_admision';
  $page->task = 'page';
  $page->admin_title = 'cetav-admision';
  $page->admin_description = '';
  $page->path = 'admision';
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
  $handler->name = 'page_cetav_admision__panel';
  $handler->task = 'page';
  $handler->subtask = 'cetav_admision';
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
  $display->layout = 'cetav_admision';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'wide' => NULL,
      'left_second' => NULL,
      'right_second' => NULL,
      'wide_second' => NULL,
      'wide_intro' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '028e54d5-1a7d-4d72-81ca-07875a983527';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b8bb640-40af-4250-bd39-c868296d03ae';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:14';
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
    $pane->uuid = '7b8bb640-40af-4250-bd39-c868296d03ae';
    $display->content['new-7b8bb640-40af-4250-bd39-c868296d03ae'] = $pane;
    $display->panels['left'][0] = 'new-7b8bb640-40af-4250-bd39-c868296d03ae';
    $pane = new stdClass();
    $pane->pid = 'new-7b5739c3-4ab6-4a3f-b217-2c413b3bd9d9';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:15';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7b5739c3-4ab6-4a3f-b217-2c413b3bd9d9';
    $display->content['new-7b5739c3-4ab6-4a3f-b217-2c413b3bd9d9'] = $pane;
    $display->panels['left'][1] = 'new-7b5739c3-4ab6-4a3f-b217-2c413b3bd9d9';
    $pane = new stdClass();
    $pane->pid = 'new-c869e591-e510-4f97-a4f1-6d674157922b';
    $pane->panel = 'left_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul><li>Tener entre 17 y 24 años.</li><li>Bachillerato aprobado.</li><li>Conocimiento comprobable en Adobe Photoshop y Adobe Ilustrador básico o programas de edición de imagen similares. Estos cursos, se imparten de manera permanente en el Centro de Cómputo del Parque La Libertad (si no lo tienen, remitir a los cursos de alfabetización del Parque).</li><li>En caso de extranjeros, tener su estatus migratorio al día.</li><li>Interés en aprender inglés.</li></ul>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => 'section-sh',
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
          'class' => 'split-list',
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
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c869e591-e510-4f97-a4f1-6d674157922b';
    $display->content['new-c869e591-e510-4f97-a4f1-6d674157922b'] = $pane;
    $display->panels['left_second'][0] = 'new-c869e591-e510-4f97-a4f1-6d674157922b';
    $pane = new stdClass();
    $pane->pid = 'new-105f728e-9190-4f78-bf24-163c186254f6';
    $pane->panel = 'right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:60';
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
    $pane->uuid = '105f728e-9190-4f78-bf24-163c186254f6';
    $display->content['new-105f728e-9190-4f78-bf24-163c186254f6'] = $pane;
    $display->panels['right'][0] = 'new-105f728e-9190-4f78-bf24-163c186254f6';
    $pane = new stdClass();
    $pane->pid = 'new-85e09660-3c8b-43c7-8b57-327c91aa9d5c';
    $pane->panel = 'right_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul><li>Disponibilidad de tiempo completo.</li><li>Para ingresar al Técnico en Diseño y Desarrollo Web, además es requisito aprobar el curso de Introducción al Desarrollo Web que se imparte en el CETAV.</li><li>En caso de requerir subsidio económico para sus estudios, solicitar el estudio socioeconómico en el programa EMPLEATE, llamando al 800-EMPLEATE (800-3675-3283) o a la dirección web www.empleate.cr (requisito no excluyente).</li></ul>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
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
          'class' => 'split-list',
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
    $pane->uuid = '85e09660-3c8b-43c7-8b57-327c91aa9d5c';
    $display->content['new-85e09660-3c8b-43c7-8b57-327c91aa9d5c'] = $pane;
    $display->panels['right_second'][0] = 'new-85e09660-3c8b-43c7-8b57-327c91aa9d5c';
    $pane = new stdClass();
    $pane->pid = 'new-c7a0a41a-84cb-48a9-8d56-5fee04bd310b';
    $pane->panel = 'wide';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:44';
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
    $pane->uuid = 'c7a0a41a-84cb-48a9-8d56-5fee04bd310b';
    $display->content['new-c7a0a41a-84cb-48a9-8d56-5fee04bd310b'] = $pane;
    $display->panels['wide'][0] = 'new-c7a0a41a-84cb-48a9-8d56-5fee04bd310b';
    $pane = new stdClass();
    $pane->pid = 'new-78e54fea-9370-42b2-b76a-e7f86bb897cc';
    $pane->panel = 'wide';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Titulo Seccion',
      'title' => '',
      'body' => '<h2 class="section-call-out-h">Proceso de Admisión</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
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
          'type' => '0',
          'class_enable' => 0,
          'class' => 'section-call-out-h',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'section-call-out',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78e54fea-9370-42b2-b76a-e7f86bb897cc';
    $display->content['new-78e54fea-9370-42b2-b76a-e7f86bb897cc'] = $pane;
    $display->panels['wide'][1] = 'new-78e54fea-9370-42b2-b76a-e7f86bb897cc';
    $pane = new stdClass();
    $pane->pid = 'new-1d14aeb8-66d0-44cd-8582-0a366b17a2f0';
    $pane->panel = 'wide_intro';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:58';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
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
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'section-sh',
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
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d14aeb8-66d0-44cd-8582-0a366b17a2f0';
    $display->content['new-1d14aeb8-66d0-44cd-8582-0a366b17a2f0'] = $pane;
    $display->panels['wide_intro'][0] = 'new-1d14aeb8-66d0-44cd-8582-0a366b17a2f0';
    $pane = new stdClass();
    $pane->pid = 'new-e67f4b1e-e53c-4c21-a2b7-52b170909eac';
    $pane->panel = 'wide_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:24';
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
    $pane->uuid = 'e67f4b1e-e53c-4c21-a2b7-52b170909eac';
    $display->content['new-e67f4b1e-e53c-4c21-a2b7-52b170909eac'] = $pane;
    $display->panels['wide_second'][0] = 'new-e67f4b1e-e53c-4c21-a2b7-52b170909eac';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_admision'] = $page;

  return $pages;

}
