<?php
/**
 * @file
 * perfil_egresado_cetav.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function perfil_egresado_cetav_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_5bd9ca0f-cea4-4b34-930d-faf12379768e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'perfil de egresado',
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
              'perfil_egresado' => 'perfil_egresado',
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
  $display->layout = 'cetav_perfil-egresado';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide' => NULL,
      'wide_second' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '733954c6-a2fa-4976-a4ea-68ab31ea4f60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-74d1f391-2053-415d-aa82-ab7d405ec9e6';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_acerca_de_mi';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '74d1f391-2053-415d-aa82-ab7d405ec9e6';
    $display->content['new-74d1f391-2053-415d-aa82-ab7d405ec9e6'] = $pane;
    $display->panels['left'][0] = 'new-74d1f391-2053-415d-aa82-ab7d405ec9e6';
    $pane = new stdClass();
    $pane->pid = 'new-3670adce-9fb6-4dad-8190-edb4401f2cf1';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pasa_tiempos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '3670adce-9fb6-4dad-8190-edb4401f2cf1';
    $display->content['new-3670adce-9fb6-4dad-8190-edb4401f2cf1'] = $pane;
    $display->panels['left'][1] = 'new-3670adce-9fb6-4dad-8190-edb4401f2cf1';
    $pane = new stdClass();
    $pane->pid = 'new-93160eb6-ad84-44f2-8808-350b89bebe84';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_habilidades_egresado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '4',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->uuid = '93160eb6-ad84-44f2-8808-350b89bebe84';
    $display->content['new-93160eb6-ad84-44f2-8808-350b89bebe84'] = $pane;
    $display->panels['right'][0] = 'new-93160eb6-ad84-44f2-8808-350b89bebe84';
    $pane = new stdClass();
    $pane->pid = 'new-44ea5f59-4c9b-438b-8ffd-dfc97c58149f';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_foto_perfil';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'imagen_perfil_profesional',
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
    $pane->uuid = '44ea5f59-4c9b-438b-8ffd-dfc97c58149f';
    $display->content['new-44ea5f59-4c9b-438b-8ffd-dfc97c58149f'] = $pane;
    $display->panels['wide'][0] = 'new-44ea5f59-4c9b-438b-8ffd-dfc97c58149f';
    $pane = new stdClass();
    $pane->pid = 'new-6630850e-3367-4a77-b719-54b89b3caee8';
    $pane->panel = 'wide';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h4',
      'id' => '',
      'class' => '',
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
    $pane->uuid = '6630850e-3367-4a77-b719-54b89b3caee8';
    $display->content['new-6630850e-3367-4a77-b719-54b89b3caee8'] = $pane;
    $display->panels['wide'][1] = 'new-6630850e-3367-4a77-b719-54b89b3caee8';
    $pane = new stdClass();
    $pane->pid = 'new-4cb0a1fe-77a9-46c0-b238-d8ebf65c3934';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_apellido';
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
          'type' => 'h4',
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
    $pane->uuid = '4cb0a1fe-77a9-46c0-b238-d8ebf65c3934';
    $display->content['new-4cb0a1fe-77a9-46c0-b238-d8ebf65c3934'] = $pane;
    $display->panels['wide'][2] = 'new-4cb0a1fe-77a9-46c0-b238-d8ebf65c3934';
    $pane = new stdClass();
    $pane->pid = 'new-db24002a-3258-49c7-858c-8f75d62ff02f';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profesion_egresado';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'db24002a-3258-49c7-858c-8f75d62ff02f';
    $display->content['new-db24002a-3258-49c7-858c-8f75d62ff02f'] = $pane;
    $display->panels['wide'][3] = 'new-db24002a-3258-49c7-858c-8f75d62ff02f';
    $pane = new stdClass();
    $pane->pid = 'new-528e4d7e-1661-4585-89f1-2c21ae34ecfc';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_vimeo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '528e4d7e-1661-4585-89f1-2c21ae34ecfc';
    $display->content['new-528e4d7e-1661-4585-89f1-2c21ae34ecfc'] = $pane;
    $display->panels['wide'][4] = 'new-528e4d7e-1661-4585-89f1-2c21ae34ecfc';
    $pane = new stdClass();
    $pane->pid = 'new-48e42f8e-8f12-4b98-8eea-3a0daa34a639';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_twitter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '48e42f8e-8f12-4b98-8eea-3a0daa34a639';
    $display->content['new-48e42f8e-8f12-4b98-8eea-3a0daa34a639'] = $pane;
    $display->panels['wide'][5] = 'new-48e42f8e-8f12-4b98-8eea-3a0daa34a639';
    $pane = new stdClass();
    $pane->pid = 'new-900e6f2d-6d5c-4c62-bab4-ea1feb55a259';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_linkedin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '900e6f2d-6d5c-4c62-bab4-ea1feb55a259';
    $display->content['new-900e6f2d-6d5c-4c62-bab4-ea1feb55a259'] = $pane;
    $display->panels['wide'][6] = 'new-900e6f2d-6d5c-4c62-bab4-ea1feb55a259';
    $pane = new stdClass();
    $pane->pid = 'new-f9cfaffe-8af3-4095-b6f4-64432c3871fd';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_github';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f9cfaffe-8af3-4095-b6f4-64432c3871fd';
    $display->content['new-f9cfaffe-8af3-4095-b6f4-64432c3871fd'] = $pane;
    $display->panels['wide'][7] = 'new-f9cfaffe-8af3-4095-b6f4-64432c3871fd';
    $pane = new stdClass();
    $pane->pid = 'new-eee820e5-93c6-48b2-bd04-ece8735fbb7d';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_facebook';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'eee820e5-93c6-48b2-bd04-ece8735fbb7d';
    $display->content['new-eee820e5-93c6-48b2-bd04-ece8735fbb7d'] = $pane;
    $display->panels['wide'][8] = 'new-eee820e5-93c6-48b2-bd04-ece8735fbb7d';
    $pane = new stdClass();
    $pane->pid = 'new-94bbdff5-7a72-4784-b9f8-89c8193ea3e8';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_behance';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '94bbdff5-7a72-4784-b9f8-89c8193ea3e8';
    $display->content['new-94bbdff5-7a72-4784-b9f8-89c8193ea3e8'] = $pane;
    $display->panels['wide'][9] = 'new-94bbdff5-7a72-4784-b9f8-89c8193ea3e8';
    $pane = new stdClass();
    $pane->pid = 'new-4d2df9d9-c158-4844-ba7b-bfc2f33e920b';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_portfolio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'social-icon',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '4d2df9d9-c158-4844-ba7b-bfc2f33e920b';
    $display->content['new-4d2df9d9-c158-4844-ba7b-bfc2f33e920b'] = $pane;
    $display->panels['wide'][10] = 'new-4d2df9d9-c158-4844-ba7b-bfc2f33e920b';
    $pane = new stdClass();
    $pane->pid = 'new-fcce9ddd-bbdc-4260-95c7-9d80337be7ba';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_generacion_egresado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
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
    $pane->uuid = 'fcce9ddd-bbdc-4260-95c7-9d80337be7ba';
    $display->content['new-fcce9ddd-bbdc-4260-95c7-9d80337be7ba'] = $pane;
    $display->panels['wide_second'][0] = 'new-fcce9ddd-bbdc-4260-95c7-9d80337be7ba';
    $pane = new stdClass();
    $pane->pid = 'new-0c3c228b-40ed-4dd4-bd87-be002547cbcd';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_disponibilidad_egresado';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
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
    $pane->uuid = '0c3c228b-40ed-4dd4-bd87-be002547cbcd';
    $display->content['new-0c3c228b-40ed-4dd4-bd87-be002547cbcd'] = $pane;
    $display->panels['wide_second'][1] = 'new-0c3c228b-40ed-4dd4-bd87-be002547cbcd';
    $pane = new stdClass();
    $pane->pid = 'new-0feece70-504f-4cf8-a6bb-2b11df236319';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0feece70-504f-4cf8-a6bb-2b11df236319';
    $display->content['new-0feece70-504f-4cf8-a6bb-2b11df236319'] = $pane;
    $display->panels['wide_second'][2] = 'new-0feece70-504f-4cf8-a6bb-2b11df236319';
    $pane = new stdClass();
    $pane->pid = 'new-a261ab07-dcd6-498a-a00e-ddfd1e9e3970';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contacto';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a261ab07-dcd6-498a-a00e-ddfd1e9e3970';
    $display->content['new-a261ab07-dcd6-498a-a00e-ddfd1e9e3970'] = $pane;
    $display->panels['wide_second'][3] = 'new-a261ab07-dcd6-498a-a00e-ddfd1e9e3970';
    $pane = new stdClass();
    $pane->pid = 'new-31714edc-ad26-48c7-8e2f-dd86c46f9d8b';
    $pane->panel = 'wide_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_numero_telefono';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '31714edc-ad26-48c7-8e2f-dd86c46f9d8b';
    $display->content['new-31714edc-ad26-48c7-8e2f-dd86c46f9d8b'] = $pane;
    $display->panels['wide_second'][4] = 'new-31714edc-ad26-48c7-8e2f-dd86c46f9d8b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_5bd9ca0f-cea4-4b34-930d-faf12379768e'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function perfil_egresado_cetav_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'prev_egresados';
  $page->task = 'page';
  $page->admin_title = 'prev-egresados';
  $page->admin_description = '';
  $page->path = 'egresados';
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
  $handler->name = 'page_prev_egresados__panel';
  $handler->task = 'page';
  $handler->subtask = 'prev_egresados';
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
  $display->layout = 'ctetav_prev-egresados';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e86501fc-fc39-4fed-9d5a-f10ca38104fd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-68b9a7e0-a1d4-4419-b4d1-a863711eefd3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-egresados-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->uuid = '68b9a7e0-a1d4-4419-b4d1-a863711eefd3';
    $display->content['new-68b9a7e0-a1d4-4419-b4d1-a863711eefd3'] = $pane;
    $display->panels['left'][0] = 'new-68b9a7e0-a1d4-4419-b4d1-a863711eefd3';
    $pane = new stdClass();
    $pane->pid = 'new-c9278bde-42ef-47bb-af7a-7f084b73e575';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'egresados-panel_pane_1';
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
    $pane->uuid = 'c9278bde-42ef-47bb-af7a-7f084b73e575';
    $display->content['new-c9278bde-42ef-47bb-af7a-7f084b73e575'] = $pane;
    $display->panels['right'][0] = 'new-c9278bde-42ef-47bb-af7a-7f084b73e575';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c9278bde-42ef-47bb-af7a-7f084b73e575';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['prev_egresados'] = $page;

  return $pages;

}
