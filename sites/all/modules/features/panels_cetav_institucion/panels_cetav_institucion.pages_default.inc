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
      'wide_main' => NULL,
      'wide_intro' => NULL,
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
      'body' => '<p>El Centro de Tecnologías y Artes Visuales (CETAV), es un programa del Ministerio de Cultura y Juventud (MCJ), que se lleva a cabo en el <a href="http://parquelalibertad.org/">Parque La Libertad</a>.</p>

<p>El CETAV, busca fomentar el desarrollo humano y la formación de jóvenes a partir de opciones de especialización técnica alineadas con las demandas del mercado.</p>


',
      'format' => 'full_html',
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
          'class' => 'course-intro',
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
    $pane->style = array(
      'settings' => NULL,
    );
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
    $pane->style = array(
      'settings' => NULL,
    );
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e1ab8fa-06ef-4301-8be9-43a484b6c25f';
    $display->content['new-7e1ab8fa-06ef-4301-8be9-43a484b6c25f'] = $pane;
    $display->panels['right_second'][0] = 'new-7e1ab8fa-06ef-4301-8be9-43a484b6c25f';
    $pane = new stdClass();
    $pane->pid = 'new-c961f169-2b7a-4547-9f11-4c21c26d4d15';
    $pane->panel = 'wide';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:47';
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
    $pane->uuid = 'c961f169-2b7a-4547-9f11-4c21c26d4d15';
    $display->content['new-c961f169-2b7a-4547-9f11-4c21c26d4d15'] = $pane;
    $display->panels['wide'][0] = 'new-c961f169-2b7a-4547-9f11-4c21c26d4d15';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $display->content['new-94afee93-0a9a-4eb9-b124-057aba80cf8c'] = $pane;
    $display->panels['wide'][1] = 'new-94afee93-0a9a-4eb9-b124-057aba80cf8c';
    $pane = new stdClass();
    $pane->pid = 'new-2735620d-f0ef-4526-865a-2668d01b309e';
    $pane->panel = 'wide_intro';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:48';
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
    $pane->uuid = '2735620d-f0ef-4526-865a-2668d01b309e';
    $display->content['new-2735620d-f0ef-4526-865a-2668d01b309e'] = $pane;
    $display->panels['wide_intro'][0] = 'new-2735620d-f0ef-4526-865a-2668d01b309e';
    $pane = new stdClass();
    $pane->pid = 'new-c18787d3-9797-49e7-90ce-ef0fcc5d6548';
    $pane->panel = 'wide_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:41';
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
    $pane->uuid = 'c18787d3-9797-49e7-90ce-ef0fcc5d6548';
    $display->content['new-c18787d3-9797-49e7-90ce-ef0fcc5d6548'] = $pane;
    $display->panels['wide_main'][0] = 'new-c18787d3-9797-49e7-90ce-ef0fcc5d6548';
    $pane = new stdClass();
    $pane->pid = 'new-72325485-01bc-4241-bcad-fd02b732ef0d';
    $pane->panel = 'wide_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:42';
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
    $pane->uuid = '72325485-01bc-4241-bcad-fd02b732ef0d';
    $display->content['new-72325485-01bc-4241-bcad-fd02b732ef0d'] = $pane;
    $display->panels['wide_main'][1] = 'new-72325485-01bc-4241-bcad-fd02b732ef0d';
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
      'body' => '<h3 class="board-h">El Consejo Asesor está conformado por:</h3>
<ul class="board-table">
<li><b>Laura Molina</b> Centro Costarricense de Producción Cinematográfica, representante del Viceministro de Cultura</li> 
<li><b>Ileana Leandro Gómez</b> Subgerencia Técnica Instituto Nacional de Aprendizaje (INA)</li> 
<li><b>Vanessa Gibson</b> Coalición Costarricense de Iniciativas de Desarrollo (CINDE)</li>
<li><b>Oliver Zúñiga</b> Costa Rica Animation Holdings</li>
<li><b>Andrés Romero</b> Director Nacional de Empleo (EMPLÉATE)</li>
<li><b>Micaela Mazzei</b> Promotora de Comercio Exterior (PROCOMER)</li>
<li><b>Claudio Pinto</b> Cámara de Tecnologías de Información y Comunicación (CAMTIC)</li>
</ul>',
      'format' => 'full_html',
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
        'add_default_classes' => 0,
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
