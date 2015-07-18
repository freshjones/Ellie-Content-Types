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
