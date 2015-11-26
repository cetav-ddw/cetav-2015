<?php
/**
 * @file
 * actualizacion_profesional_cetav.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function actualizacion_profesional_cetav_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_curso-actualizacin-profesional:node/add/actualizacion-profesional.
  $menu_links['navigation_curso-actualizacin-profesional:node/add/actualizacion-profesional'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/actualizacion-profesional',
    'router_path' => 'node/add/actualizacion-profesional',
    'link_title' => 'Curso-actualización-profesional',
    'options' => array(
      'identifier' => 'navigation_curso-actualizacin-profesional:node/add/actualizacion-profesional',
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
  t('Curso-actualización-profesional');

  return $menu_links;
}
