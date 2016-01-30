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
      'body' => '<p>El Centro de Tecnologías y Artes Visuales (CETAV), busca Fomentar el desarrollo humano y la formación de jóvenes a partir de opciones de especialización técnica alineadas con las demandas del mercado.</p>

<p>Nuestra población prioritaria son adultos jóvenes de las comunidades de Desamparados, La Unión y Curridabat. Nuestras carreras de especialización técnicas se encuentran certificadas por el Instituto Nacional de Aprendizaje (INA), tienen una duración de 5 cuatrimestres a tiempo completo y los interesados cuentan con la posibilidad de subsidio a través del Programa EMPLEATE del Ministerio de Trabajo y Seguridad Social.</p>

<p>Nuestros programas:</p>
<ul>
<li>Técnico en Edición y Postproducción Digital de Imagen y Sonido.</li>
  <li>Técnico en Diseño y Desarrollo Web.</li>
    <li>Técnico en Animación Digital 3D (Tercera Dimensión).</li>
</ul>

<p>Cada uno de ellos trabaja con cuatro líneas curriculares básicas:</p>

<ul>
<li>Formación técnica y generación de competencias para el mercado.</li>
 <li>Formación del idioma inglés como herramienta clave para la competitividad.</li>
   <li> Formación en gestión de negocios para la administración,  gestión de proyectos y empresas, con miras en desarrollar sus propios emprendimientos.</li>
   <li> Formación en áreas transversales como el desarrollo del pensamiento creativo y crítico, así como el fortalecimiento de habilidades blandas y de habilidades para la vida.</li>
</ul>

<p>Además, ofrecemos cursos de actualización profesional, en las áreas tecnológicas afines al CETAV.</p>
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
          'class' => 'intro-admin',
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
    $pane->css = array();
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
          'type' => '',
          'class_enable' => 1,
          'class' => 'title-headers',
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
      'body' => 'El Consejo Asesor está conformado por: 
<ol>
<li>Laura Molina – Centro Costarricense de Producción Cinematográfica, representante del Viceministro de Cultura</li> 
<li>Ileana Leandro Gómez – Subgerencia Técnica Instituto Nacional de Aprendizaje (INA)</li> 
<li>Vanessa Gibson – Coalición Costarricense de Iniciativas de Desarrollo (CINDE)</li>
<li>Oliver Zúñiga – Costa Rica Animation Holdings</li>
<li>Andrés Romero – Director Nacional de Empleo (EMPLÉATE)</li>
<li>Micaela Mazzei – Promotora de Comercio Exterior (PROCOMER)</li>
<li>Claudio Pinto – Cámara de Tecnologías de Información y Comunicación (CAMTIC)</li>
</ol>',
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
