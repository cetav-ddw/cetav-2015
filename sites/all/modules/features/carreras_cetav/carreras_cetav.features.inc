<?php
/**
 * @file
 * carreras_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carreras_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
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
function carreras_cetav_image_default_styles() {
  $styles = array();

  // Exported image style: cover_reel_carreras.
  $styles['cover_reel_carreras'] = array(
    'label' => 'cover reel carreras',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 330,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: intro_carreras.
  $styles['intro_carreras'] = array(
    'label' => 'intro carreras',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 550,
          'retinafy' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
    'programas_carreras' => array(
      'name' => 'programas-carreras',
      'bundle' => 'programas_carreras',
      'locked' => '1',
    ),
  );
  return $items;
}
