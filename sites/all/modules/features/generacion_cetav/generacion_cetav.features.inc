<?php
/**
 * @file
 * generacion_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function generacion_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function generacion_cetav_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function generacion_cetav_node_info() {
  $items = array(
    'generacion' => array(
      'name' => t('Generación'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Generación'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function generacion_cetav_paragraphs_info() {
  $items = array(
    'testimonios' => array(
      'name' => 'testimonios',
      'bundle' => 'testimonios',
      'locked' => '1',
    ),
  );
  return $items;
}
