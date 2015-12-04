<?php
/**
 * @file
 * panels_cetav_full_actualizacion.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_cetav_full_actualizacion_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_9ceac252-fa17-4f03-93cf-21a45ce6e84a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'full-act-profecional ',
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
              'actualizacion_profesional' => 'actualizacion_profesional',
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
      'left_second' => NULL,
      'right_second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dee83af0-9697-4226-ab8b-471ce907bf8e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fe89d2d5-2546-413e-bbf9-6ca27014737d';
    $pane->panel = 'wide';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_detalles_curso';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe89d2d5-2546-413e-bbf9-6ca27014737d';
    $display->content['new-fe89d2d5-2546-413e-bbf9-6ca27014737d'] = $pane;
    $display->panels['wide'][0] = 'new-fe89d2d5-2546-413e-bbf9-6ca27014737d';
    $pane = new stdClass();
    $pane->pid = 'new-9745cc06-59da-4175-b76f-70bc1d185191';
    $pane->panel = 'wide';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'btn-show-form',
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
    $pane->uuid = '9745cc06-59da-4175-b76f-70bc1d185191';
    $display->content['new-9745cc06-59da-4175-b76f-70bc1d185191'] = $pane;
    $display->panels['wide'][1] = 'new-9745cc06-59da-4175-b76f-70bc1d185191';
    $pane = new stdClass();
    $pane->pid = 'new-05884b8a-aeb9-4996-85e7-cdb90e86c7d0';
    $pane->panel = 'wide';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-formulario_envio_de_pago';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '05884b8a-aeb9-4996-85e7-cdb90e86c7d0';
    $display->content['new-05884b8a-aeb9-4996-85e7-cdb90e86c7d0'] = $pane;
    $display->panels['wide'][2] = 'new-05884b8a-aeb9-4996-85e7-cdb90e86c7d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_9ceac252-fa17-4f03-93cf-21a45ce6e84a'] = $handler;

  return $export;
}
