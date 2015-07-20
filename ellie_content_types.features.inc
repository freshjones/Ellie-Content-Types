<?php
/**
 * @file
 * ellie_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ellie_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function ellie_content_types_eck_bundle_info() {
  $items = array(
    'content_elements_text_block' => array(
      'machine_name' => 'content_elements_text_block',
      'entity_type' => 'content_elements',
      'name' => 'text_block',
      'label' => 'Text Block',
      'config' => array(),
    ),
    'content_sections_section' => array(
      'machine_name' => 'content_sections_section',
      'entity_type' => 'content_sections',
      'name' => 'section',
      'label' => 'Section',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ellie_content_types_eck_entity_type_info() {
  $items = array(
    'content_elements' => array(
      'name' => 'content_elements',
      'label' => 'Content Elements',
      'properties' => array(),
    ),
    'content_sections' => array(
      'name' => 'content_sections',
      'label' => 'Content Sections',
      'properties' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function ellie_content_types_node_info() {
  $items = array(
    'pages' => array(
      'name' => t('Pages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
