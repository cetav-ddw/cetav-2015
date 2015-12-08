<?php
/**
 * @file
 * noticia_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function noticia_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_views_api().
 */
function noticia_cetav_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function noticia_cetav_image_default_styles() {
  $styles = array();

  // Exported image style: image-new-full.
  $styles['image-new-full'] = array(
    'label' => 'image-new-full',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 670,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: imagen_en_la_noticia.
  $styles['imagen_en_la_noticia'] = array(
    'label' => 'Imagen en la noticia',
    'effects' => array(
      17 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 770,
          'height' => 510,
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
function noticia_cetav_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => t('Esto será el campo para agregar las noticias.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
