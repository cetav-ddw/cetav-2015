<?php
/**
 * @file
 * noticia_cetav.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function noticia_cetav_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_title_noticia'.
  $field_bases['field_title_noticia'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_title_noticia',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
