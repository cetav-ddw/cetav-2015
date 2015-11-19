<?php
/**
 * @file
 * panels_cetav_carreras.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panels_cetav_carreras_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_carreras:node/add/carreras.
  $menu_links['navigation_carreras:node/add/carreras'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/carreras',
    'router_path' => 'node/add/carreras',
    'link_title' => 'Carreras',
    'options' => array(
      'identifier' => 'navigation_carreras:node/add/carreras',
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
  t('Carreras');

  return $menu_links;
}
