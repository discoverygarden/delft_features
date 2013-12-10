<?php
/**
 * @file
 * delft_features.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function delft_features_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-browse_category'] = array(
    'cache' => -1,
    'css_class' => 'browse-menu',
    'custom' => 0,
    'machine_name' => 'browse_category',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -17,
      ),
    ),
    'title' => 'Browse by category',
    'visibility' => 1,
  );

  $export['block-front_find_map'] = array(
    'cache' => -1,
    'css_class' => 'find-map',
    'custom' => 0,
    'machine_name' => 'front_find_map',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -16,
      ),
    ),
    'title' => 'Find on map',
    'visibility' => 1,
  );

  $export['block-lang_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'lang_navigation',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-mobile_about'] = array(
    'cache' => -1,
    'css_class' => 'mobile-about',
    'custom' => 0,
    'machine_name' => 'mobile_about',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-php_search'] = array(
    'cache' => -1,
    'css_class' => 'simple-search',
    'custom' => 0,
    'machine_name' => 'php_search',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-search_find_map'] = array(
    'cache' => -1,
    'css_class' => 'find-map',
    'custom' => 0,
    'machine_name' => 'search_find_map',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-share_options'] = array(
    'cache' => -1,
    'css_class' => 'shareoptions',
    'custom' => 0,
    'machine_name' => 'share_options',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['delftdora-delftdora_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'delftdora_facets',
    'module' => 'delftdora',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-advanced'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advanced',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -19,
      ),
    ),
    'title' => 'View type',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -22,
      ),
    ),
    'title' => 'Search',
    'visibility' => 1,
  );

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -17,
      ),
    ),
    'title' => 'Sort by',
    'visibility' => 0,
  );

  $export['menu-menu-browse-by-category'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-browse-by-category',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => -15,
      ),
    ),
    'title' => 'Browse by category',
    'visibility' => 1,
  );

  $export['menu-menu-footer-men'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-men',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dtu_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-image_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'dtu_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'dtu_theme',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
