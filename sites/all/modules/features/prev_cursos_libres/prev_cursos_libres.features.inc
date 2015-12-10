<?php
/**
 * @file
 * prev_cursos_libres.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prev_cursos_libres_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
