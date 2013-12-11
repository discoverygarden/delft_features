<?php
/**
 * @file
 * delft_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function delft_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Browse by category menu';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'browse_category';
  $fe_block_boxes->body = '<div class="browsecats"><ul><li class="buildings"><a href=""><span class="icon"></span> Buildings & Town plans</a></li><li class="maps"><a href=""><span class="icon"></span> Maps</a></li><li class="documents"><a href=""><span class="icon"></span> Documents</a></li><li class="images"><a href=""><span class="icon"></span> Images</a></li><li class="persons"><a href=""><span class="icon"></span> Persons</a></li><li class="organisations"><a href=""><span class="icon"></span> Organisations</a></li></ul></div>';

  $export['browse_category'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Frontpage Find on map link';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'front_find_map';
  $fe_block_boxes->body = '<a id="findonmap" title="Find on map" href=""><span class="icon"></span><em> Find on map</em></a>';

  $export['front_find_map'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Language Navigation';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'lang_navigation';
  $fe_block_boxes->body = '<div id="langnavigation">
<span class="openclose" id="langnav"><img src="/sites/all/themes/dtu-theme/images/lang/nl_NL.png" alt="Current language: Nederlands"></span>
<ul>
<li><a href=""><img src="/sites/all/themes/dtu-theme/images/lang/nl_NL.png" alt="Nederlands"> <span>NL</span> <em>Nederlands</em></a></li>
<li><a href=""><img src="/sites/all/themes/dtu-theme/images/lang/en_US.png" alt="English"> <span>EN</span> <em>English</em></a></li>
<li><a href=""><img src="/sites/all/themes/dtu-theme/images/lang/de_DE.png" alt="Deutsch"> <span>DE</span> <em>Deutsch</em></a></li>
<li><a href=""><img src="/sites/all/themes/dtu-theme/images/lang/es_ES.png" alt="Espanol"> <span>ES</span> <em>Espanol</em></a></li>
</ul>
 </div>';

  $export['lang_navigation'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mobile About this site';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mobile_about';
  $fe_block_boxes->body = '<h2>Explore European colonial architecture after 1850</h2>
<a href="about">About this site</a>';

  $export['mobile_about'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Islandora search block from PHP';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'php_search';
  $fe_block_boxes->body = '<?php
$form = drupal_get_form(\'islandora_solr_simple_search_form\');
print drupal_render($form);
?>';

  $export['php_search'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Search pages Find on map';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'search_find_map';
  $fe_block_boxes->body = '<a id="findonmap" title="Find on map" href=""><span class="icon"></span><em> Find on map</em></a>';

  $export['search_find_map'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Share options';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'share_options';
  $fe_block_boxes->body = '<ul>
<li class="share"><a href=""><span class="icon"></span> Share</a></li>
<li class="save"><a href=""><span class="icon"></span> Save to list</a></li>
<li class="export"><a href=""><span class="icon"></span> Export</a></li>
<li class="cite"><a href=""><span class="icon"></span> Cite</a></li>
</ul>';

  $export['share_options'] = $fe_block_boxes;

  return $export;
}
