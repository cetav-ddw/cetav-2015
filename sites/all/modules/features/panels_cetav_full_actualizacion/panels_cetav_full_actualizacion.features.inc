<?php
/**
 * @file
 * panels_cetav_full_actualizacion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_cetav_full_actualizacion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
