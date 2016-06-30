<?php
/**
 * @file
 * carreras_cetav.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function carreras_cetav_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'amacion-css';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'carreras/animacion-digital-3d' => 'carreras/animacion-digital-3d',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'animacion-3d',
    ),
  );
  $context->condition_mode = 0;
  $export['amacion-css'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ddw-class';
  $context->description = 'added class for ddw section';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'carreras/diseno-desarrollo-web' => 'carreras/diseno-desarrollo-web',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'diseno-desarrollo-web',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('added class for ddw section');
  $export['ddw-class'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'post-css';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'carreras/postproduccion-imagen-sonido' => 'carreras/postproduccion-imagen-sonido',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'post-produccion',
    ),
  );
  $context->condition_mode = 0;
  $export['post-css'] = $context;

  return $export;
}
