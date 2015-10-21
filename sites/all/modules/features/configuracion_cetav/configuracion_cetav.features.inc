<?php
/**
 * @file
 * configuracion_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuracion_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
