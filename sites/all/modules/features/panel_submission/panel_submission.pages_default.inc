<?php
/**
 * @file
 * panel_submission.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_submission_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'submission';
  $page->task = 'page';
  $page->admin_title = 'submission';
  $page->admin_description = '';
  $page->path = 'submission';
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
  $handler->name = 'page_submission__panel';
  $handler->task = 'page';
  $handler->subtask = 'submission';
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
  $display->layout = 'ctetav_submission';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wide' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5f60ae32-7454-4ccc-ac1b-9d18abbbb473';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bf6038f2-788e-45cd-9659-d0de2a8d8371';
    $pane->panel = 'wide';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2>Gracias</h2>
<p>Su comprobante ha sido enviado!</p>',
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
    $pane->uuid = 'bf6038f2-788e-45cd-9659-d0de2a8d8371';
    $display->content['new-bf6038f2-788e-45cd-9659-d0de2a8d8371'] = $pane;
    $display->panels['wide'][0] = 'new-bf6038f2-788e-45cd-9659-d0de2a8d8371';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['submission'] = $page;

  return $pages;

}
