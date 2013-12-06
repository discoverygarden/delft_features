<?php
/**
 * @file
 * delft_features.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function delft_features_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'About\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a777ca13-1799-49d3-b77f-bbedcc40ce5f\',
      \'nid\' => \'10\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386274137\',
      \'changed\' => \'1386274137\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'16ab8dfd-ed0f-4e96-a470-63d3cfcf540b\',
      \'revision_timestamp\' => \'1386274137\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'About page content goes here\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>About page content goes here</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386274137\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/10\',
        \'alias\' => \'about\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'About\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Explore European colonial architecture after 1850\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2766c9be-91ca-4ce5-8914-19c7900eb1ec\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386273805\',
      \'changed\' => \'1386273805\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1fd6cc60-ef57-4110-ab53-a0274535520c\',
      \'revision_timestamp\' => \'1386273805\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386273805\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Partners\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3b97c75c-7318-4a8b-92ae-f8441a87487f\',
      \'nid\' => \'5\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386274019\',
      \'changed\' => \'1386274019\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'37ef28e4-12ab-4b49-be98-9fda638a057d\',
      \'revision_timestamp\' => \'1386274019\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'138\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'tudelft-logo.gif\',
            \'uri\' => \'public://tudelft-logo.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'2511\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'921b471d-52c6-4020-b5ef-2704dce6c940\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'2\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'64\',
            \'height\' => \'42\',
            \'uid\' => \'1\',
            \'filename\' => \'kitlv.gif\',
            \'uri\' => \'public://kitlv.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'1842\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'3a39d81f-d0e3-4cd9-ab6e-6ccdb2026267\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'3\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'47\',
            \'height\' => \'43\',
            \'uid\' => \'1\',
            \'filename\' => \'nai.gif\',
            \'uri\' => \'public://nai.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'2264\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'ca58ed41-0a35-44d5-8177-9672535f86ae\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'4\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'152\',
            \'height\' => \'42\',
            \'uid\' => \'1\',
            \'filename\' => \'rijksuniversiteit-groningen.gif\',
            \'uri\' => \'public://rijksuniversiteit-groningen.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'2884\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'aae8d1d7-ea60-402e-b8dc-937e3350a7aa\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'5\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'184\',
            \'height\' => \'44\',
            \'uid\' => \'1\',
            \'filename\' => \'tropenmuseum.gif\',
            \'uri\' => \'public://tropenmuseum.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'2746\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'9b337be1-5c7f-4cb3-add9-dc10edda69fe\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'6\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'193\',
            \'height\' => \'42\',
            \'uid\' => \'1\',
            \'filename\' => \'kit.gif\',
            \'uri\' => \'public://kit.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'2574\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'6b2bd5e0-8d72-41d6-ab31-9cfe0ea0706e\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'7\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'144\',
            \'height\' => \'42\',
            \'uid\' => \'1\',
            \'filename\' => \'nwo.gif\',
            \'uri\' => \'public://nwo.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'2483\',
            \'status\' => \'1\',
            \'timestamp\' => \'1386274019\',
            \'uuid\' => \'a075884b-bd6a-44eb-98ae-c757c74b9cc1\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386274019\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Privacy policy\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3b7bd773-91c1-4b50-aab5-b39d1b0d401e\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386273652\',
      \'changed\' => \'1386274168\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'596ec5e6-dfb7-49ee-ae3a-0e3574dd3997\',
      \'revision_timestamp\' => \'1386274168\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Privacy policy\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Privacy policy</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386273652\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/2\',
        \'alias\' => \'privacy-policy\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Colofon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'204f9486-c101-4296-9585-18c51879ace3\',
      \'nid\' => \'6\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386274044\',
      \'changed\' => \'1386274044\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'68109751-128f-4c0c-ad10-6002811fc4d9\',
      \'revision_timestamp\' => \'1386274044\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Colofon page content? Or external link\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Colofon page content? Or external link</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386274044\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/6\',
        \'alias\' => \'colofon\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Contribute\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'15d6bfd9-e75e-4f0b-acf2-e6f4832ed445\',
      \'nid\' => \'8\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386274094\',
      \'changed\' => \'1386274094\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7c665113-a067-4a9e-b972-b81bd22c88e9\',
      \'revision_timestamp\' => \'1386274094\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Contribute page details go here\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Contribute page details go here</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386274094\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'6\',
        \'source\' => \'node/8\',
        \'alias\' => \'contribute\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Terms of Use\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'57e25118-c7e0-4e02-ac04-81519924eade\',
      \'nid\' => \'7\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386274065\',
      \'changed\' => \'1386274065\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'aae0ba6f-9acf-4870-b387-ee77d903ebc1\',
      \'revision_timestamp\' => \'1386274065\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Terms of Use page content goes here\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Terms of Use page content goes here</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386274065\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/7\',
        \'alias\' => \'terms-of-use\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Contact\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9ffc5782-ebc5-4edd-a004-479f599a6389\',
      \'nid\' => \'9\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386274121\',
      \'changed\' => \'1386274121\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d4ece5a6-433e-41e2-a3b6-e066409fb3c1\',
      \'revision_timestamp\' => \'1386274121\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'contact page goes here\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>contact page goes here</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386274121\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/9\',
        \'alias\' => \'contact\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Search tips\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e865a119-91c4-4e45-9a4e-b350ba939889\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1386273833\',
      \'changed\' => \'1386273833\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f8b0a9e5-1f51-4dbb-91f4-f15a8b57ade6\',
      \'revision_timestamp\' => \'1386273833\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Advanced search and search tips?\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Advanced search and search tips?</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1386273833\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/4\',
        \'alias\' => \'adv-search\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
