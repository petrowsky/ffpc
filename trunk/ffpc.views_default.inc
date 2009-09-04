<?php

// This needs to be added as a default view?

$view = new view;
$view->name = 'podcast_feed';
$view->description = 'Podcast Feed';
$view->tag = 'podcast';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'title' => array(
    'label' => 'Title',
    'link_to_node' => 0,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
  ),
  'body' => array(
    'id' => 'body',
    'table' => 'node_revisions',
    'field' => 'body',
  ),
));
$handler->override_option('sorts', array(
  'created' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'name' => array(
    'default_action' => 'not found',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '%1 Podcast Feed',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'taxonomy_term',
    'validate_fail' => 'not found',
    'glossary' => 0,
    'limit' => '0',
    'case' => 'ucwords',
    'path_case' => 'lower',
    'transform_dash' => 1,
    'add_table' => 0,
    'require_value' => 0,
    'id' => 'name',
    'table' => 'term_data',
    'field' => 'name',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '4' => 0,
      '5' => 0,
      '3' => 0,
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'craft' => 0,
      'page' => 0,
      'podcast_episode' => 0,
      'story' => 0,
      'video' => 0,
      'video_series' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '1' => 1,
    ),
    'validate_argument_type' => 'name',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_php' => '',
    'override' => array(
      'button' => 'Override',
    ),
  ),
));
$handler->override_option('filters', array(
  'status' => array(
    'operator' => '=',
    'value' => 1,
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'status',
    'table' => 'node',
    'field' => 'status',
    'relationship' => 'none',
  ),
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'podcast_episode' => 'podcast_episode',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'Node: Type',
      'use_operator' => FALSE,
      'identifier' => 'type',
      'remember' => FALSE,
      'single' => TRUE,
      'optional' => TRUE,
      'reduce' => FALSE,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Podcasts');
$handler->override_option('header_format', '3');
$handler->override_option('header_empty', 0);
$handler->override_option('items_per_page', 25);
$handler->override_option('link_display', 'page_1');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'asc',
  'columns' => array(
    'title' => 'title',
    'body' => 'body',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'body' => array(
      'separator' => '',
    ),
  ),
  'default' => '-1',
));
$handler = $view->new_display('feed', 'Public Feed', 'feed_1');
$handler->override_option('fields', array(
  'field_podcast_file_fid' => array(
    'label' => 'File',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => TRUE,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => FALSE,
    ),
    'exclude' => 0,
    'id' => 'field_podcast_file_fid',
    'table' => 'node_data_field_podcast_file',
    'field' => 'field_podcast_file_fid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('title', '%1 Podcast Feed');
$handler->override_option('style_plugin', 'podcast');
$handler->override_option('style_options', array(
  'mission_description' => FALSE,
  'description' => '',
));
$handler->override_option('row_plugin', 'podcast');
$handler->override_option('row_options', array(
  'relationship' => 'none',
  'item_length' => 'fulltext',
));
$handler->override_option('path', 'itunes/public/%/feed');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));
$handler->override_option('displays', array());
$handler->override_option('sitename_title', 0);
$handler = $view->new_display('feed', 'Private Feed', 'feed_2');
$handler->override_option('fields', array(
  'field_podcast_file_fid' => array(
    'id' => 'field_podcast_file_fid',
    'table' => 'node_data_field_podcast_file',
    'field' => 'field_podcast_file_fid',
  ),
));
$handler->override_option('access', array(
  'type' => 'role',
  'role' => array(
    '5' => 5,
  ),
));
$handler->override_option('title', '%1 Podcast Feed');
$handler->override_option('style_plugin', 'podcast');
$handler->override_option('style_options', array(
  'mission_description' => FALSE,
  'description' => '',
));
$handler->override_option('row_plugin', 'podcast');
$handler->override_option('path', 'itunes/private/%/feed');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));
$handler->override_option('displays', array());
$handler->override_option('sitename_title', 0);
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'podcasts/%');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));