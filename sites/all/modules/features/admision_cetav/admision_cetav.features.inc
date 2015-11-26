<?php
/**
 * @file
 * admision_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function admision_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
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
function admision_cetav_node_info() {
  $items = array(
    'admision' => array(
      'name' => t('Admisión'),
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
