<?php
/**
 * @file
 * delft_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function delft_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function delft_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function delft_features_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Type',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'link_to_object' => 1,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date',
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_range' => '-100:+3',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'range_facet_select' => NULL,
      'range_facet_variable_gap' => NULL,
      'range_facet_slider_enabled' => NULL,
      'date_filter_datepicker_enabled' => NULL,
    ),
  ),
  5 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Construction Date',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}

/**
 * Implements hook_node_info().
 */
function delft_features_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
