<?php
/**
 * @file
 * carreras_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carreras_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function carreras_cetav_node_info() {
  $items = array(
    'carreras' => array(
      'name' => t('Carreras'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre-Carrera'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function carreras_cetav_paragraphs_info() {
  $items = array(
    'skills' => array(
      'name' => 'icono-texto',
      'bundle' => 'skills',
      'locked' => '1',
    ),
  );
  return $items;
}
