<?php
/**
 * @file
 * panels_cetav_home.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panels_cetav_home_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_fieldable-panels-panes:admin/structure/fieldable-panels-panes.
  $menu_links['management_fieldable-panels-panes:admin/structure/fieldable-panels-panes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/fieldable-panels-panes',
    'router_path' => 'admin/structure/fieldable-panels-panes',
    'link_title' => 'Fieldable Panels Panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Create and manage fieldable panels pane types.',
      ),
      'identifier' => 'management_fieldable-panels-panes:admin/structure/fieldable-panels-panes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels.
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fieldable Panels Panes');
  t('Panels');

  return $menu_links;
}
