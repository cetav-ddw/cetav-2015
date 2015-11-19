<?php
/**
 * @file
 * panels_cetav_institucion.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panels_cetav_institucion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_institucion:node/add/institucion.
  $menu_links['navigation_institucion:node/add/institucion'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/institucion',
    'router_path' => 'node/add/institucion',
    'link_title' => 'institucion',
    'options' => array(
      'identifier' => 'navigation_institucion:node/add/institucion',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('institucion');

  return $menu_links;
}
