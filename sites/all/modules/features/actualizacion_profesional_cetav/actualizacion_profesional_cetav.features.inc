<?php
/**
 * @file
 * actualizacion_profesional_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function actualizacion_profesional_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function actualizacion_profesional_cetav_node_info() {
  $items = array(
    'actualizacion_profesional' => array(
      'name' => t('Curso-actualización-profesional'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Curso-Actualización-Profesional'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
