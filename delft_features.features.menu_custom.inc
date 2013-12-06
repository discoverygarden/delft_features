<?php
/**
 * @file
 * delft_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function delft_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-browse-by-category.
  $menus['menu-browse-by-category'] = array(
    'menu_name' => 'menu-browse-by-category',
    'title' => 'Browse by category',
    'description' => 'Frontpage browse block',
  );
  // Exported menu: menu-footer-men.
  $menus['menu-footer-men'] = array(
    'menu_name' => 'menu-footer-men',
    'title' => 'Footer Menu',
    'description' => 'Footer menu items
',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse by category');
  t('Footer Menu');
  t('Footer menu items
');
  t('Frontpage browse block');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
