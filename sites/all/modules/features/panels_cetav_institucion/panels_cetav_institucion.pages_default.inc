<?php
/**
 * @file
 * panels_cetav_institucion.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_cetav_institucion_default_page_manager_handlers() {
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
function panels_cetav_institucion_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cetav_institucion';
  $page->task = 'page';
  $page->admin_title = 'cetav-institucion';
  $page->admin_description = '';
  $page->path = 'institucion';
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
  $handler->name = 'page_cetav_institucion__panel';
  $handler->task = 'page';
  $handler->subtask = 'cetav_institucion';
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
  $display->layout = 'cetav_institucion';
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35792db9-0145-45d0-a95e-247e833ade10';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ccd51f2e-fe88-4928-9e98-1372094b3877';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p dir="ltr"><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">Somos una institución que le brinda la oportunidad de estudiar lo que le apasiona y reforzar sus habilidades en las áreas creativas y tecnológicas, así como el fortalecimiento de habilidades blandas, formación en gestión de negocios y desarrollo del pensamiento creativo y crítico para que sea competitivo en el mundo laboral y un profesional exitoso. ver propuesta de arriba :)</b></p><p>&nbsp;</p><p dir="ltr"><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">El CETAV ofrece programas técnicos certificados por el INA de 5 cuatrimestres de formación continua y a tiempo completo en las siguientes áreas técnicas:</b></p><ul dir="ltr"><li><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">• Edición y Postproducción Digital de Imagen y Sonido.</b></li><li><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">• Diseño y Desarrollo Web.</b></li><li><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">• Animación Digital 3D.</b></li></ul>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ccd51f2e-fe88-4928-9e98-1372094b3877';
    $display->content['new-ccd51f2e-fe88-4928-9e98-1372094b3877'] = $pane;
    $display->panels['left'][0] = 'new-ccd51f2e-fe88-4928-9e98-1372094b3877';
    $pane = new stdClass();
    $pane->pid = 'new-c50800c3-093d-47d5-b85e-b627bb88bb97';
    $pane->panel = 'left_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:19';
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
    $pane->uuid = 'c50800c3-093d-47d5-b85e-b627bb88bb97';
    $display->content['new-c50800c3-093d-47d5-b85e-b627bb88bb97'] = $pane;
    $display->panels['left_second'][0] = 'new-c50800c3-093d-47d5-b85e-b627bb88bb97';
    $pane = new stdClass();
    $pane->pid = 'new-01db94f5-6fb9-4436-a377-24c37b336694';
    $pane->panel = 'right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:17';
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
    $pane->uuid = '01db94f5-6fb9-4436-a377-24c37b336694';
    $display->content['new-01db94f5-6fb9-4436-a377-24c37b336694'] = $pane;
    $display->panels['right'][0] = 'new-01db94f5-6fb9-4436-a377-24c37b336694';
    $pane = new stdClass();
    $pane->pid = 'new-7e1ab8fa-06ef-4301-8be9-43a484b6c25f';
    $pane->panel = 'right_second';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:20';
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
    $pane->uuid = '7e1ab8fa-06ef-4301-8be9-43a484b6c25f';
    $display->content['new-7e1ab8fa-06ef-4301-8be9-43a484b6c25f'] = $pane;
    $display->panels['right_second'][0] = 'new-7e1ab8fa-06ef-4301-8be9-43a484b6c25f';
    $pane = new stdClass();
    $pane->pid = 'new-94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $pane->panel = 'wide';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:18';
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
    $pane->uuid = '94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $display->content['new-94afee93-0a9a-4eb9-b124-057aba80cf8c'] = $pane;
    $display->panels['wide'][0] = 'new-94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $pane = new stdClass();
    $pane->pid = 'new-46e4b806-5240-462d-a7a9-1dc7f06ddddf';
    $pane->panel = 'wide_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>El Consejo Asesor está conformado por un miembro de:</strong></p><ol><li>​<b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Viceministro de Cultura</b>​</li><li dir="ltr"><p dir="ltr"><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Viceministro de Juventud</b></p></li><li dir="ltr"><p dir="ltr"><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Subgerencia Técnica Instituto Nacional de Aprendizaje (INA)</b></p></li><li dir="ltr"><p dir="ltr"><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Costa Rica Animation Holdings</b></p></li><li dir="ltr"><p dir="ltr"><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Director Nacional de Empleo (EMPLÉATE)</b></p></li><li dir="ltr"><p dir="ltr"><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Promotora de Comercio Exterior (PROCOMER)</b></p></li><li dir="ltr"><p dir="ltr"><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Cámara de Tecnologías de Información y Comunicación (CAMTIC)</b></p></li></ol>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46e4b806-5240-462d-a7a9-1dc7f06ddddf';
    $display->content['new-46e4b806-5240-462d-a7a9-1dc7f06ddddf'] = $pane;
    $display->panels['wide_second'][0] = 'new-46e4b806-5240-462d-a7a9-1dc7f06ddddf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cetav_institucion'] = $page;

  return $pages;

}
