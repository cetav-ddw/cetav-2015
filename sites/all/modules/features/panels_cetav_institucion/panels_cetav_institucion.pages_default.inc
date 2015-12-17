<?php
/**
 * @file
 * panels_cetav_institucion.pages_default.inc
 */

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
      'body' => '<p dir="ltr"><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">Somos una institución que le brinda la oportunidad de estudiar lo que le apasiona y reforzar sus habilidades en las áreas creativas y tecnológicas, así como el fortalecimiento de habilidades blandas, formación en gestión de negocios y desarrollo del pensamiento creativo y crítico para que sea competitivo en el mundo laboral y un profesional exitoso. ver propuesta de arriba :)</b></p><p>&nbsp;</p><p dir="ltr"><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">El CETAV ofrece programas técnicos certificados por el INA de 5 cuatrimestres de formación continua y a tiempo completo en las siguientes áreas técnicas:</b></p><ul dir="ltr"><li><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">&nbsp;Edición y Postproducción Digital de Imagen y Sonido.</b></li><li><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">&nbsp;Diseño y Desarrollo Web.</b></li><li><b id="docs-internal-guid-639b0e3e-68f9-fbb9-d450-522aa40475c1">&nbsp;Animación Digital 3D.</b></li></ul>',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'personal-institution',
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
    $pane->uuid = '94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $display->content['new-94afee93-0a9a-4eb9-b124-057aba80cf8c'] = $pane;
    $display->panels['wide'][0] = 'new-94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $pane = new stdClass();
    $pane->pid = 'new-a550a51a-f4cd-4d80-bf58-a5088144ff87';
    $pane->panel = 'wide_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:32';
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
    $pane->uuid = 'a550a51a-f4cd-4d80-bf58-a5088144ff87';
    $display->content['new-a550a51a-f4cd-4d80-bf58-a5088144ff87'] = $pane;
    $display->panels['wide_main'][0] = 'new-a550a51a-f4cd-4d80-bf58-a5088144ff87';
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
      'body' => '<p><strong>El Consejo Asesor está conformado por un miembro de:</strong></p><ul><li>Viceministro de Cultura​</li><li><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Viceministro de Juventud</b></li><li><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Subgerencia Técnica Instituto Nacional de Aprendizaje (INA)</b></li><li><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Costa Rica Animation Holdings</b></li><li><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Director Nacional de Empleo (EMPLÉATE)</b></li><li><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Promotora de Comercio Exterior (PROCOMER)</b></li><li><b id="docs-internal-guid-639b0e3e-6969-03af-05d8-57a4ed821330">Cámara de Tecnologías de Información y Comunicación (CAMTIC)</b>​​</li></ul>',
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
          'class' => 'consejo-list',
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
