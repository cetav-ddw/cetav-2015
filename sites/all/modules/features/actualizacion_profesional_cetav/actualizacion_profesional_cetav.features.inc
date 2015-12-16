<?php
/**
 * @file
 * actualizacion_profesional_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function actualizacion_profesional_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function actualizacion_profesional_cetav_default_entityform_type() {
  $items = array();
  $items['formulario_envio_de_pago'] = entity_import('entityform_type', '{
    "type" : "formulario_envio_de_pago",
    "label" : "Formulario envio de pago",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "manati_texto_formato" },
      "submit_button_text" : "Enviar",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "submission",
      "submission_text" : { "value" : "", "format" : "manati_texto_formato" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0, "5" : 0, "6" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "submission",
      "instruction_pre" : { "value" : "", "format" : "manati_texto_formato" },
      "current_type" : "formulario_envio_de_pago",
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function actualizacion_profesional_cetav_node_info() {
  $items = array(
    'actualizacion_profesional' => array(
      'name' => t('Curso-actualización-profesional'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Curso-Actualización-Profesional'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
