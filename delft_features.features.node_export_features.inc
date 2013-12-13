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
      \'changed\' => \'1386361046\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'16ab8dfd-ed0f-4e96-a470-63d3cfcf540b\',
      \'revision_timestamp\' => \'1386361046\',
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
      \'menu\' => NULL,
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhigAyAMQAAPX19UVFRe3t7bKysnp6eru7u/Hx8enp6aKiouLi4llZWc3NzdXV1aqqqtnZ2ZWVldHR0To6Ovz8/Pj4+MnJyd3d3eXl5WdnZ8XFxZqamoGBgcHBwZ2dnYyMjDMzM////yH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RTU1MEMwNUVERTY4MTFFMkIyRTZDNjNEMUEzRkI4MDIiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RTU1MEMwNUZERTY4MTFFMkIyRTZDNjNEMUEzRkI4MDIiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpFNTUwQzA1Q0RFNjgxMUUyQjJFNkM2M0QxQTNGQjgwMiIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpFNTUwQzA1RERFNjgxMUUyQjJFNkM2M0QxQTNGQjgwMiIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/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\',
          ),
          array(
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhQAAqAMQAAMTExNzc3Ovr66SkpPX19XFxcaurq5OTk7Kysrq6uoKCgs7Ozl1dXYmJifn5+fz8/G5ubn19fdbW1ubm5vHx8VpaWpiYmGBgYHl5eeHh4dLS0snJyZ2dnXV1dWdnZ////yH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6NzNCNjg0MkRFNEFCMTFFMjkzNThFNDJBRTQ0NjExNzUiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6NzNCNjg0MkVFNEFCMTFFMjkzNThFNDJBRTQ0NjExNzUiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo3M0I2ODQyQkU0QUIxMUUyOTM1OEU0MkFFNDQ2MTE3NSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo3M0I2ODQyQ0U0QUIxMUUyOTM1OEU0MkFFNDQ2MTE3NSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PgH//v38+/r5+Pf29fTz8vHw7+7t7Ovq6ejn5uXk4+Lh4N/e3dzb2tnY19bV1NPS0dDPzs3My8rJyMfGxcTDwsHAv769vLu6ubi3trW0s7KxsK+urayrqqmop6alpKOioaCfnp2cm5qZmJeWlZSTkpGQj46NjIuKiYiHhoWEg4KBgH9+fXx7enl4d3Z1dHNycXBvbm1sa2ppaGdmZWRjYmFgX15dXFtaWVhXVlVUU1JRUE9OTUxLSklIR0ZFRENCQUA/Pj08Ozo5ODc2NTQzMjEwLy4tLCsqKSgnJiUkIyIhIB8eHRwbGhkYFxYVFBMSERAPDg0MCwoJCAcGBQQDAgEAACH5BAAAAAAALAAAAABAACoAAAX/4CeOZGmeaKqubOu+cCzPtClIG3EGW6bXQJGA46lUBo5TBlNhYABBGoJhvARWA2Olk4nCLE0Go8viVC5NibeFOKMTrw7jMqesVRMxHQJbuCsKdykHfwYxEHNoV4IlDnQXdGQvFokVHIwlAYl0EzEciU6YJABue50uU5B0HqIjCaUXAx4NAD8nEwYQCgegrK0fGqUMEw8GGB4FCg0WzA0YEBANGx+8kAwFvx8Cm0cjDgEACAPjCQunIh6VDdkfctYeDy+vqhVQ2aT0Ay4P6e/sIgqETWPRoFS9fx8IFLHGYGCKgvQuIdRWoAmdCgcEnFgAwQ0VfRNHICiiZQscbRbQ/5SMoCYkiQcLDFg4wCHBqQcSZNJMIMmlz59AgwodSrSoCgIAFijtsWFBUxIZkjrdEE8EgANKsy5I0MAWuKUaSPBQCmAC0gUAek7AUABCgQgJIniAcIBEgrZuFdhK4KGvWwh9O9gagLeABRK5oBUAIKDD3JMkLNAVwaGrCQIRCiAokQCDhg0ROljQkACCnREBChRoSWJCB80iJAg+Iblu59MlMEPYTGIDyMybKRyw9SGDataRk1E+TBsCBwkekJPQzftyZkM7jm9sG7bAAhQWCjTIDNL6bhSYC2A3kXo1igYFOGzAkCK8BcLuzVfPfR1Fe+muvIXBeiZIxsEDCohX1ZV0EZx3QnoEiqXdCRRgwNY5JnAw2QZt7SeCAw16OMID/d2i2iIDLDKChnWd8IAAB0RDAAUJdqCBLQRI8MwAGuWmo3M9kkABAKoxJgAGDsXmAWQluBZBBBjQFIECDdrzwV1PYhABcVe+pYCWuIlA2JNQshVWCQ1g2MgDbLbJpgMLPgDnmybI2WYSJdj5pgN4lhCmUTOEAAA7\',
          ),
          array(
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhLwArAMQAAMPDw7GxscvLy4ODg7u7u9ra2tLS0kVFRf39/fX19Xt7e+Tk5GxsbODg4KamppGRkXNzc/Dw8Ojo6KCgoJ2dnYyMjOzs7JmZmVRUVImJiZWVlWJiYvv7+/n5+fr6+v///yH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6ODBGMjUwNThFNEFCMTFFMjg2RUVGRTNFQzlCQTczRjIiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6ODBGMjUwNTlFNEFCMTFFMjg2RUVGRTNFQzlCQTczRjIiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4MEYyNTA1NkU0QUIxMUUyODZFRUZFM0VDOUJBNzNGMiIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4MEYyNTA1N0U0QUIxMUUyODZFRUZFM0VDOUJBNzNGMiIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PgH//v38+/r5+Pf29fTz8vHw7+7t7Ovq6ejn5uXk4+Lh4N/e3dzb2tnY19bV1NPS0dDPzs3My8rJyMfGxcTDwsHAv769vLu6ubi3trW0s7KxsK+urayrqqmop6alpKOioaCfnp2cm5qZmJeWlZSTkpGQj46NjIuKiYiHhoWEg4KBgH9+fXx7enl4d3Z1dHNycXBvbm1sa2ppaGdmZWRjYmFgX15dXFtaWVhXVlVUU1JRUE9OTUxLSklIR0ZFRENCQUA/Pj08Ozo5ODc2NTQzMjEwLy4tLCsqKSgnJiUkIyIhIB8eHRwbGhkYFxYVFBMSERAPDg0MCwoJCAcGBQQDAgEAACH5BAAAAAAALAAAAAAvACsAAAX/4CeOZGmeaKqubFt2UixLkQjPciImTe83tU8CFwuKAgeMcsnQAZLL5USUgUYrood1qSAFNoOwWBH4AMDisILwiWAUmfQgU3sw5AqKl1HJVP59AxYCfIB/A2wBGA8aD45/GQIfDwoPhgMOe3Fzc3EOAAyMDxl+iB8QAwAGBgUFBBcPUw8DAQULBQAPmSMBDBcOAQEOo30TARK3AYcACxgEER0I0gmvFRaUxxEJBRpTvAoFCBwICQAaGboN4hy5FQMCEwwCHfT0HAUTFQS3Eh07Cwu8gENgz0IAR886JGAHiQCECgU81OvgIUKACxfiQWAAQcFGDV4gGCBoD5+GANCi/+VydIGBgwUS6XnwwOEVpY4DAkF4EFIASYrlflmwt3JUBpQxZ9LEZ+nkggQRGjjYdQSCT4oUESyY2q8Du0aONACYSNEDAgnDHB1LUFHYHgAzZc4U4KCBRAQCLmjYe2EeULY0ExxUOxSqW14MCJRVyiECgIheC1DAeIFCOIoL7HLYnFdtBA9Dpu4JsJAeYA8NFthrMBnjBHUSDcybiaDBhEYv6W2l+qGXgwgcQBcoDXV1a6GbqR1DYNYi7uEdFkzg3YuCheDURsalp/U46cAFDEjYPI6AIweQd++5MB40gN8/oy04rliiWWlKERiARcEAh+iiIaaBXfQIIBZW3ElHmf9/WUmDn1kWTPBAfxKph9gDAvzHgQHdFPBBPRxIMAFll3UQwQw0gWbeBAIkAEOAR/BBwH/66YPSfxRFkBYFC4iDFgWTwUeRgX3pBmNvDBxFowADGABAACSBlpYDbOn3y1QXaNedWNKgRV2SDnDHpE8PlJiAA38E4NUHBADgoDAJMMdaBRQQQIAyXw5AgYt4KQDABwY8sJBEDoTxW1QTBCSCARBQIMwscgzgjQgAVABMlawZ8AECATBTAF0TTBcMMAiMkAAFoYY61aoOTMCGCyIER9sIDsJq6624krCASBV0BMEGG1SQQAYeUcCAAhdggSYAGTC7QWIeaepCAQcAe4D/nxhQcAADGBwAwQQHDFDtBxsssi0GDDzhrSQuGFDuAQc84K4DGNB7QAXgYjBAtkl4m8QGE2BwwRuwSkCAVMPY2QABCEwVCwASBKDBOwVk8OkwGhSQrAW2LkAaBb8RkIoAHjw52QSOLoDJbRRwIIA5BHDoAAcuiKuIuBsEoAAGGSgxwLP31htPuQUwEG63i5TKQgT//gsBAuByy0AAOW3gwAERWEBBBvK8i8GvZbQAABnZCqMAGA5IUAkAjm7gCAYnAcPzAwQQCwbHLCSwgAUeLBABAbisIsDLT72sCgESmEoCc3G2UEC38aBbQblfJ+EnvBt4+2euJRigRBIVJKkBOwV+Wu2nAmQP4CHnJDwOwQUHcO32BWtsAIASOitCBuskRCeBVgsAANWJen+wgCQSbCNAA7w37/zzzYcAADs=\',
          ),
          array(
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhmAAqAMQAAJOTk4qKimtra3Nzc+3t7enp6dXV1eXl5d3d3ZycnNnZ2YKCgnx8fPn5+f39/b29vfX19dHR0cnJyeHh4c3Nzbm5ufHx8cLCwmJiYsXFxWVlZaSkpLCwsKqqqrW1tf///yH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OEM0NTU4MkJFNEFCMTFFMjg1NzJFNTJGMkRFODc1QTAiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6OEM0NTU4MkNFNEFCMTFFMjg1NzJFNTJGMkRFODc1QTAiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo4QzQ1NTgyOUU0QUIxMUUyODU3MkU1MkYyREU4NzVBMCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo4QzQ1NTgyQUU0QUIxMUUyODU3MkU1MkYyREU4NzVBMCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/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\',
          ),
          array(
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhuAAsAMQAAMPDw6Wlpbu7u+Hh4fb29pubm5KSkqysrN3d3eXl5YODg9XV1fDw8O7u7rOzs4uLi8zMzKOjo4+Pj9LS0sTExNnZ2bS0tPf39+jo6K2trZeXl8rKyp6ennt7e4mJif///yH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OUQyRjk0MjNFNEFCMTFFMjhBODdDMEY1QTlGMzhGRjkiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6OUQyRjk0MjRFNEFCMTFFMjhBODdDMEY1QTlGMzhGRjkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo5RDJGOTQyMUU0QUIxMUUyOEE4N0MwRjVBOUYzOEZGOSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDo5RDJGOTQyMkU0QUIxMUUyOEE4N0MwRjVBOUYzOEZGOSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/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\',
          ),
          array(
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhwQAqAMQAANbW1oWFhZqamq2trfT09GhoaODg4MHBwY+Pj6Ojo+rq6nx8fHFxcbe3t66ursvLy15eXv///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QUNFMUU3QzlFNEFCMTFFMjk0OTBEODZGMTVDNkFBQTEiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QUNFMUU3Q0FFNEFCMTFFMjk0OTBEODZGMTVDNkFBQTEiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpBQ0UxRTdDN0U0QUIxMUUyOTQ5MEQ4NkYxNUM2QUFBMSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpBQ0UxRTdDOEU0QUIxMUUyOTQ5MEQ4NkYxNUM2QUFBMSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/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\',
          ),
          array(
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'R0lGODlhkAAqAMQAAHp6eqOjo6qqqvX19bu7u0RERPHx8WdnZ+Hh4fr6+oSEhOnp6TY2Nt3d3eXl5ZGRkf39/Z2dndnZ2ZmZme3t7bW1tVhYWNDQ0JWVlYyMjMnJybCwsMXFxdXV1cHBwf///yH/C1hNUCBEYXRhWE1QPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4wLWMwNjAgNjEuMTM0Nzc3LCAyMDEwLzAyLzEyLTE3OjMyOjAwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M1IFdpbmRvd3MiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6QkRFRjNDQTRFNEFCMTFFMkI1OThBQ0VFNzQ2QjJCNDUiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6QkRFRjNDQTVFNEFCMTFFMkI1OThBQ0VFNzQ2QjJCNDUiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpCREVGM0NBMkU0QUIxMUUyQjU5OEFDRUU3NDZCMkI0NSIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpCREVGM0NBM0U0QUIxMUUyQjU5OEFDRUU3NDZCMkI0NSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/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\',
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
      \'changed\' => \'1386361056\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d4ece5a6-433e-41e2-a3b6-e066409fb3c1\',
      \'revision_timestamp\' => \'1386361056\',
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
      \'menu\' => NULL,
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
      \'changed\' => \'1386953015\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f8b0a9e5-1f51-4dbb-91f4-f15a8b57ade6\',
      \'revision_timestamp\' => \'1386953015\',
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
        \'alias\' => \'search-tips\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
