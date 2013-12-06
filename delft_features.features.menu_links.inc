<?php
/**
 * @file
 * delft_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function delft_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sign-in-or-register:user/login
  $menu_links['main-menu_sign-in-or-register:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Sign in or register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sign-in-or-register:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sign-out:user/logout
  $menu_links['main-menu_sign-out:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Sign out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sign-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-category_buildings--town-plans:islandora/object
  $menu_links['menu-browse-by-category_buildings--town-plans:islandora/object'] = array(
    'menu_name' => 'menu-browse-by-category',
    'link_path' => 'islandora/object',
    'router_path' => 'islandora',
    'link_title' => 'Buildings & Town plans',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-by-category_buildings--town-plans:islandora/object',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-category_documents:islandora/objects
  $menu_links['menu-browse-by-category_documents:islandora/objects'] = array(
    'menu_name' => 'menu-browse-by-category',
    'link_path' => 'islandora/objects',
    'router_path' => 'islandora',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-by-category_documents:islandora/objects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-category_images:islandora/objects
  $menu_links['menu-browse-by-category_images:islandora/objects'] = array(
    'menu_name' => 'menu-browse-by-category',
    'link_path' => 'islandora/objects',
    'router_path' => 'islandora',
    'link_title' => 'Images',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-by-category_images:islandora/objects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-category_maps:islandora/object
  $menu_links['menu-browse-by-category_maps:islandora/object'] = array(
    'menu_name' => 'menu-browse-by-category',
    'link_path' => 'islandora/object',
    'router_path' => 'islandora',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-by-category_maps:islandora/object',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-category_organisations:islandora/objects
  $menu_links['menu-browse-by-category_organisations:islandora/objects'] = array(
    'menu_name' => 'menu-browse-by-category',
    'link_path' => 'islandora/objects',
    'router_path' => 'islandora',
    'link_title' => 'Organisations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-by-category_organisations:islandora/objects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-category_persons:islandora/objects
  $menu_links['menu-browse-by-category_persons:islandora/objects'] = array(
    'menu_name' => 'menu-browse-by-category',
    'link_path' => 'islandora/objects',
    'router_path' => 'islandora',
    'link_title' => 'Persons',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-by-category_persons:islandora/objects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Buildings & Town plans');
  t('Documents');
  t('Home');
  t('Images');
  t('Maps');
  t('Organisations');
  t('Persons');
  t('Sign in or register');
  t('Sign out');


  return $menu_links;
}
