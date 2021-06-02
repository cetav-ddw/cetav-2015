<?php
/**
 * @file
 * Administrative interface for the Client-Side Adaptive Image module.
 */

/**
 * Builds the module's settings form.
 */
function cs_adaptive_image_settings_form() {
  $form['cs_adaptive_image_breakpoint_count'] = array(
    '#title' => t('Number of breakpoints'),
    '#type' => 'textfield',
    '#description' => t('The maximum number of configurable client width breakpoints available in adaptive image display settings.'),
    '#size' => 5,
    '#maxlength' => 3,
    '#default_value' => variable_get('cs_adaptive_image_breakpoint_count', 5),
    '#element_validate' => array('element_validate_integer_positive'),
  );

  // Get field count
  $count = (variable_get('cs_adaptive_image_breakpoint_count') ? variable_get('cs_adaptive_image_breakpoint_count') : 5);

  // Fieldset for default breakpoints
  $form['cs_adaptive_default_breakpoint'] = array(
    '#type' => 'fieldset',
    '#title' => t('Default breakpoints'),
    '#description' => t('Enter breakpoints, lowest first'),
  );

  // Create fields for default breakpoints
  for ($i=1;$i<=$count;$i++) {
    $form['cs_adaptive_default_breakpoint']['cs_adaptive_default_breakpoint_' . $i] = array(
      '#type' => 'textfield',
      '#title' => t('Breakpoint') . ' ' . ($i),
      '#size' => 4,
      '#maxlength' => 4,
      '#default_value' => (variable_get('cs_adaptive_default_breakpoint_' . $i) ? variable_get('cs_adaptive_default_breakpoint_' . $i) : ''),
      '#element_validate' => array('element_validate_integer_positive'),
    );
  }

  return system_settings_form($form);
}

/**
 * Renders the styles form in a table.
 */
function theme_cs_adaptive_image_styles_form($variables) {
  $styles = $variables['styles'];

  // Prepare rows for breakpoint styles.
  $header = array(t('Client width breakpoint'), t('Image style'));
  for ($i = 1; $i <= variable_get('cs_adaptive_image_breakpoint_count', 5); $i++) {
    $rows[] = array(drupal_render($styles['breakpoint_' . $i]), drupal_render($styles['style_' . $i]));
  }

  // Prepare row for max style.
  $description = '<div class="description">' . $styles['max_style']['#description'] . '</div>';
  unset($styles['max_style']['#description']);
  $rows[] = array($styles['max_style']['#title'] . $description, drupal_render($styles['max_style']));

  // Prepare row for fallback style.
  $description = '<div class="description">' . $styles['fallback_style']['#description'] . '</div>';
  unset($styles['fallback_style']['#description']);
  $rows[] = array($styles['fallback_style']['#title'] . $description, drupal_render($styles['fallback_style']));

  return theme('table', array('header' => $header, 'rows' => $rows));
}
