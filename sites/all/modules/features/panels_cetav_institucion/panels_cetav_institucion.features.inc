<?php
/**
 * @file
 * panels_cetav_institucion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_cetav_institucion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
 * Implements hook_image_default_styles().
 */
function panels_cetav_institucion_image_default_styles() {
  $styles = array();

  // Exported image style: img-personal.
  $styles['img-personal'] = array(
    'label' => 'img-personal',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 135,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function panels_cetav_institucion_paragraphs_info() {
  $items = array(
    'colaboradores_institucion' => array(
      'name' => 'colaboradores-institucion',
      'bundle' => 'colaboradores_institucion',
      'locked' => '1',
    ),
  );
  return $items;
}
