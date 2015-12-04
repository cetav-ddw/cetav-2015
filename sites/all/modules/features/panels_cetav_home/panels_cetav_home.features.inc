<?php
/**
 * @file
 * panels_cetav_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_cetav_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
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
function panels_cetav_home_paragraphs_info() {
  $items = array(
    'consejo_asesor' => array(
      'name' => 'consejo-asesor',
      'bundle' => 'consejo_asesor',
      'locked' => '1',
    ),
  );
  return $items;
}
