<?php
/**
 * @file
 * institucion_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function institucion_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function institucion_cetav_node_info() {
  $items = array(
    'institucion' => array(
      'name' => t('institucion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function institucion_cetav_paragraphs_info() {
  $items = array(
    'colaboradores_institucion' => array(
      'name' => 'colaboradores-institucion',
      'bundle' => 'colaboradores_institucion',
      'locked' => '1',
    ),
  );
  return $items;
}
