<?php
/**
 * @file
 * perfil_egresado_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function perfil_egresado_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function perfil_egresado_cetav_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function perfil_egresado_cetav_node_info() {
  $items = array(
    'perfil_egresado' => array(
      'name' => t('Perfil Egresado'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
