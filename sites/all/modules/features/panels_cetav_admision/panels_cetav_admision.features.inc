<?php
/**
 * @file
 * panels_cetav_admision.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_cetav_admision_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function panels_cetav_admision_paragraphs_info() {
  $items = array(
    'steps' => array(
      'name' => 'steps',
      'bundle' => 'steps',
      'locked' => '1',
    ),
  );
  return $items;
}
