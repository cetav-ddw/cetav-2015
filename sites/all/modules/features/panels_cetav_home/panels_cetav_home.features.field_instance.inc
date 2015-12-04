<?php
/**
 * @file
 * panels_cetav_home.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function panels_cetav_home_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-aliados_logo-field_aliados_img'.
  $field_instances['fieldable_panels_pane-aliados_logo-field_aliados_img'] = array(
    'bundle' => 'aliados_logo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_aliados_img',
    'label' => 'aliados-img',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-cetav_brand-field_cetav_logo'.
  $field_instances['fieldable_panels_pane-cetav_brand-field_cetav_logo'] = array(
    'bundle' => 'cetav_brand',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_cetav_logo',
    'label' => 'cetav-logo',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 8,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-cursos_actuales-field_preview_curso_home'.
  $field_instances['fieldable_panels_pane-cursos_actuales-field_preview_curso_home'] = array(
    'bundle' => 'cursos_actuales',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_preview_curso_home',
    'label' => 'preview-curso-home',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'actualizaci_n_profesional_home' => 'actualizaci_n_profesional_home',
        'cetav_carreras_home' => -1,
        'colaboradores_institucion' => -1,
        'consejo_asesor' => -1,
        'detalles_cursolibre' => -1,
        'programas_carreras' => -1,
        'skills' => -1,
        'testimonios' => -1,
      ),
      'bundle_weights' => array(
        'actualizaci_n_profesional_home' => 2,
        'cetav_carreras_home' => 3,
        'colaboradores_institucion' => 4,
        'consejo_asesor' => 5,
        'detalles_cursolibre' => 6,
        'programas_carreras' => 7,
        'skills' => 8,
        'testimonios' => 9,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-cursos_actuales-field_titulo_proximos_cursos'.
  $field_instances['fieldable_panels_pane-cursos_actuales-field_titulo_proximos_cursos'] = array(
    'bundle' => 'cursos_actuales',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_titulo_proximos_cursos',
    'label' => 'titulo-proximos-cursos',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-consejo_asesor-field_nombre_consejo_asesor'.
  $field_instances['paragraphs_item-consejo_asesor-field_nombre_consejo_asesor'] = array(
    'bundle' => 'consejo_asesor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_nombre_consejo_asesor',
    'label' => 'nombre-consejo-asesor',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-consejo_asesor-field_nombre_empresa_consejo_ase'.
  $field_instances['paragraphs_item-consejo_asesor-field_nombre_empresa_consejo_ase'] = array(
    'bundle' => 'consejo_asesor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_nombre_empresa_consejo_ase',
    'label' => 'nombre-empresa-consejo-asesor',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('aliados-img');
  t('cetav-logo');
  t('nombre-consejo-asesor');
  t('nombre-empresa-consejo-asesor');
  t('preview-curso-home');
  t('titulo-proximos-cursos');

  return $field_instances;
}
