<?php
/**
 * @file
 * bookshelf_open.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bookshelf_open_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bookshelf_content_display';
  $view->description = 'Content Panes that Display various types of content.';
  $view->tag = 'Bookshelf';
  $view->base_table = 'node';
  $view->human_name = 'Bookshelf: Content Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Series Filter */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['ui_name'] = 'Series Filter';
  $handler->display->display_options['filters']['field_series_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_series_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator_id'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['label'] = 'Series';
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['identifier'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_series_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'series';
  $handler->display->display_options['filters']['field_series_tid']['hierarchy'] = 1;
  /* Filter criterion: Genre Filter */
  $handler->display->display_options['filters']['field_genre_tid']['id'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['table'] = 'field_data_field_genre';
  $handler->display->display_options['filters']['field_genre_tid']['field'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['ui_name'] = 'Genre Filter';
  $handler->display->display_options['filters']['field_genre_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_genre_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator_id'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['label'] = 'Genre';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['identifier'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_genre_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_genre_tid']['vocabulary'] = 'genre';
  /* Filter criterion: Rating Filter */
  $handler->display->display_options['filters']['field_rating_tid']['id'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['table'] = 'field_data_field_rating';
  $handler->display->display_options['filters']['field_rating_tid']['field'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['ui_name'] = 'Rating Filter';
  $handler->display->display_options['filters']['field_rating_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_rating_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['expose']['operator_id'] = 'field_rating_tid_op';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['operator'] = 'field_rating_tid_op';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['identifier'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_rating_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rating_tid']['vocabulary'] = 'rating';
  /* Filter criterion: Status Filter */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['ui_name'] = 'Status Filter';
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Stories */
  $handler = $view->new_display('panel_pane', 'Stories', 'story_pane');
  $handler->display->display_options['display_description'] = 'All Stories in the System';
  $handler->display->display_options['pane_title'] = 'Story Pane';
  $handler->display->display_options['pane_description'] = 'A pane showing all stories in the system.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Writing Prompts */
  $handler = $view->new_display('panel_pane', 'Writing Prompts', 'prompt_pane');
  $handler->display->display_options['display_description'] = 'The Writing Prompts in the site.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'writing_prompt' => 'writing_prompt',
  );
  $handler->display->display_options['pane_title'] = 'Writing Prompt Pane';
  $handler->display->display_options['pane_description'] = 'All Writing Prompts created in the system';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Just In */
  $handler = $view->new_display('panel_pane', 'Just In', 'just_in_pane');
  $handler->display->display_options['display_description'] = 'The most recently added Chapters into the system';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
    'title_1' => 'title_1',
    'name' => 'name',
    'field_summary' => 'field_summary',
    'field_chapter_no_' => 'field_chapter_no_',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Author';
  /* Relationship: Story Field */
  $handler->display->display_options['relationships']['field_story_target_id']['id'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['table'] = 'field_data_field_story';
  $handler->display->display_options['relationships']['field_story_target_id']['field'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['ui_name'] = 'Story Field';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Cover Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Cover Image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Story Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Story Title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Author';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['relationship'] = 'field_story_target_id';
  /* Field: Content: Chapter No. */
  $handler->display->display_options['fields']['field_chapter_no_']['id'] = 'field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['field'] = 'field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['label'] = 'Chapter #';
  $handler->display->display_options['fields']['field_chapter_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Chapter Summary */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Chapter Summary';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Series Filter */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['ui_name'] = 'Series Filter';
  $handler->display->display_options['filters']['field_series_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_series_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator_id'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['label'] = 'Series';
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['identifier'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_series_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'series';
  $handler->display->display_options['filters']['field_series_tid']['hierarchy'] = 1;
  /* Filter criterion: Genre Filter */
  $handler->display->display_options['filters']['field_genre_tid']['id'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['table'] = 'field_data_field_genre';
  $handler->display->display_options['filters']['field_genre_tid']['field'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['ui_name'] = 'Genre Filter';
  $handler->display->display_options['filters']['field_genre_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_genre_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator_id'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['label'] = 'Genre';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['identifier'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_genre_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_genre_tid']['vocabulary'] = 'genre';
  /* Filter criterion: Rating Filter */
  $handler->display->display_options['filters']['field_rating_tid']['id'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['table'] = 'field_data_field_rating';
  $handler->display->display_options['filters']['field_rating_tid']['field'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['ui_name'] = 'Rating Filter';
  $handler->display->display_options['filters']['field_rating_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_rating_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['expose']['operator_id'] = 'field_rating_tid_op';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['operator'] = 'field_rating_tid_op';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['identifier'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_rating_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rating_tid']['vocabulary'] = 'rating';
  /* Filter criterion: Status Filter */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['ui_name'] = 'Status Filter';
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $handler->display->display_options['pane_title'] = 'Just In';
  $handler->display->display_options['pane_description'] = 'A list of the most recent chapters added to the system';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: New Chapters Block */
  $handler = $view->new_display('block', 'New Chapters Block', 'block_1');
  $handler->display->display_options['display_description'] = 'A block for the last 10 newest chapters.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'stories/just-in';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_1' => 'title_1',
    'name' => 'name',
    'title' => 'title',
    'field_chapter_no_' => 'field_chapter_no_',
    'field_genre' => 'field_genre',
    'field_series' => 'field_series',
    'field_rating' => 'field_rating',
    'field_status' => 'field_status',
    'field_tags' => 'field_tags',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field Story */
  $handler->display->display_options['relationships']['field_story_target_id']['id'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['table'] = 'field_data_field_story';
  $handler->display->display_options['relationships']['field_story_target_id']['field'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['ui_name'] = 'Field Story';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Author';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Chapter # */
  $handler->display->display_options['fields']['field_chapter_no_']['id'] = 'field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['field'] = 'field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['ui_name'] = 'Chapter #';
  $handler->display->display_options['fields']['field_chapter_no_']['label'] = 'Chapter #';
  $handler->display->display_options['fields']['field_chapter_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['field_genre']['ui_name'] = 'Genre';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Content: Series */
  $handler->display->display_options['fields']['field_series']['id'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series']['field'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['field_series']['delta_offset'] = '0';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Newest Chapters';

  /* Display: Random Story */
  $handler = $view->new_display('block', 'Random Story', 'block_2');
  $handler->display->display_options['display_description'] = 'A Block showing a Random Story.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Random Story';
  $translatables['bookshelf_content_display'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Series'),
    t('Genre'),
    t('Rating'),
    t('Status'),
    t('Tags'),
    t('Stories'),
    t('All Stories in the System'),
    t('Story Pane'),
    t('A pane showing all stories in the system.'),
    t('Bookshelf'),
    t('Writing Prompts'),
    t('The Writing Prompts in the site.'),
    t('Writing Prompt Pane'),
    t('All Writing Prompts created in the system'),
    t('Just In'),
    t('The most recently added Chapters into the system'),
    t('author'),
    t('Content entity referenced from field_story'),
    t('By'),
    t('Summary'),
    t('Chapter #'),
    t('Tags (field_tags)'),
    t('A list of the most recent chapters added to the system'),
    t('New Chapters Block'),
    t('A block for the last 10 newest chapters.'),
    t('Newest Chapters'),
    t('Random Story'),
    t('A Block showing a Random Story.'),
  );
  $export['bookshelf_content_display'] = $view;

  $view = new view();
  $view->name = 'bookshelf_navigation';
  $view->description = 'Content Panes related to navigation through stories.';
  $view->tag = 'Bookshelf';
  $view->base_table = 'node';
  $view->human_name = 'Bookshelf: Navigation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid_2';
  $handler->display->display_options['style_options']['choose'] = '- Chapter -';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Chapter */
  $handler->display->display_options['relationships']['reverse_field_story_node']['id'] = 'reverse_field_story_node';
  $handler->display->display_options['relationships']['reverse_field_story_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_story_node']['field'] = 'reverse_field_story_node';
  $handler->display->display_options['relationships']['reverse_field_story_node']['ui_name'] = 'Chapter';
  $handler->display->display_options['relationships']['reverse_field_story_node']['label'] = 'Chapters';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Chapter No. (field_chapter_no_) */
  $handler->display->display_options['sorts']['field_chapter_no__value']['id'] = 'field_chapter_no__value';
  $handler->display->display_options['sorts']['field_chapter_no__value']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['sorts']['field_chapter_no__value']['field'] = 'field_chapter_no__value';
  $handler->display->display_options['sorts']['field_chapter_no__value']['relationship'] = 'reverse_field_story_node';
  /* Contextual filter: Story NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Story NID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
  );

  /* Display: Chapter Drop Down List */
  $handler = $view->new_display('panel_pane', 'Chapter Drop Down List', 'chapter_drop_down_menu');
  $handler->display->display_options['display_description'] = 'A Jump Menu of chapters in a story.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Story NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Story NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Chapter Number */
  $handler->display->display_options['fields']['field_chapter_no_']['id'] = 'field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['field'] = 'field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no_']['relationship'] = 'reverse_field_story_node';
  $handler->display->display_options['fields']['field_chapter_no_']['ui_name'] = 'Chapter Number';
  $handler->display->display_options['fields']['field_chapter_no_']['label'] = '';
  $handler->display->display_options['fields']['field_chapter_no_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chapter_no_']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Chapter Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_story_node';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Chapter Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Chapter NID */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_story_node';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Chapter NID';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Chapter Link */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'Chapter Link';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = 'stories/[nid]/[nid_1]';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
    'story_front_page' => 'story_front_page',
  );
  $handler->display->display_options['pane_title'] = 'Chapter Drop Down List';
  $handler->display->display_options['pane_description'] = 'The chapter drop-down selection menu';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Story NID',
    ),
  );

  /* Display: Chapter Pager */
  $handler = $view->new_display('freepager', 'Chapter Pager', 'chapter_pager');
  $handler->display->display_options['display_description'] = 'The pager to navigate back and forth through chapters.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_story_target_id']['id'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['table'] = 'field_data_field_story';
  $handler->display->display_options['relationships']['field_story_target_id']['field'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['label'] = 'Story NID';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Chapter Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Chapter Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Chapter Link */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Chapter Link';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Story ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Story ID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'nid';
  $handler->display->display_options['previous'] = 'title';
  $handler->display->display_options['next'] = 'title';
  $translatables['bookshelf_navigation'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Chapters'),
    t('Nid'),
    t('All'),
    t('Chapter Drop Down List'),
    t('A Jump Menu of chapters in a story.'),
    t('stories/[nid]/[nid_1]'),
    t('The chapter drop-down selection menu'),
    t('Bookshelf'),
    t('Chapter Pager'),
    t('The pager to navigate back and forth through chapters.'),
    t('Story NID'),
    t('node/[nid]'),
  );
  $export['bookshelf_navigation'] = $view;

  $view = new view();
  $view->name = 'bookshelf_reference_displays';
  $view->description = 'Entity References for pages like Storys and Prompts to display referencing content.';
  $view->tag = 'Bookshelf';
  $view->base_table = 'node';
  $view->human_name = 'Bookshelf: Reference Displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Author';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Author Story Reference */
  $handler = $view->new_display('entityreference', 'Author Story Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'An entity reference list of allstories by the currently logged in user.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'nid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = '$url = $_SERVER[\'HTTP_HOST\'] . request_uri();
$getnid = explode("/", $url);
$var = $getnid[2];

if (is_numeric($var)) { 

  $node = node_load($var);
  return $node->uid;

} else { 

  global $user;
  return $user->uid;

}';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['description'] = 'The Author of the story';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Writing Prompt Reference List */
  $handler = $view->new_display('entityreference', 'Writing Prompt Reference List', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'A Reference list displaying all prompts in the system.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Story Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Story Author';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'writing_prompt' => 'writing_prompt',
  );
  /* Filter criterion: Content: Genre (field_genre) */
  $handler->display->display_options['filters']['field_genre_tid']['id'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['table'] = 'field_data_field_genre';
  $handler->display->display_options['filters']['field_genre_tid']['field'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['value'] = '';
  $handler->display->display_options['filters']['field_genre_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator_id'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['label'] = 'Genre';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['operator'] = 'field_genre_tid_op';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['identifier'] = 'field_genre_tid';
  $handler->display->display_options['filters']['field_genre_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_genre_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_genre_tid']['vocabulary'] = 'genre';
  /* Filter criterion: Content: Rating (field_rating) */
  $handler->display->display_options['filters']['field_rating_tid']['id'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['table'] = 'field_data_field_rating';
  $handler->display->display_options['filters']['field_rating_tid']['field'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['value'] = '';
  $handler->display->display_options['filters']['field_rating_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['expose']['operator_id'] = 'field_rating_tid_op';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['operator'] = 'field_rating_tid_op';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['identifier'] = 'field_rating_tid';
  $handler->display->display_options['filters']['field_rating_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_rating_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_rating_tid']['vocabulary'] = 'rating';
  /* Filter criterion: Content: Series (field_series) */
  $handler->display->display_options['filters']['field_series_tid']['id'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['table'] = 'field_data_field_series';
  $handler->display->display_options['filters']['field_series_tid']['field'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['value'] = '';
  $handler->display->display_options['filters']['field_series_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator_id'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['label'] = 'Series';
  $handler->display->display_options['filters']['field_series_tid']['expose']['operator'] = 'field_series_tid_op';
  $handler->display->display_options['filters']['field_series_tid']['expose']['identifier'] = 'field_series_tid';
  $handler->display->display_options['filters']['field_series_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_series_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_series_tid']['vocabulary'] = 'series';

  /* Display: Chapter List Pane */
  $handler = $view->new_display('panel_pane', 'Chapter List Pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'A content pane displaying all chapters connected to a story.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Story ID */
  $handler->display->display_options['relationships']['field_story_target_id']['id'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['table'] = 'field_data_field_story';
  $handler->display->display_options['relationships']['field_story_target_id']['field'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['ui_name'] = 'Story ID';
  $handler->display->display_options['relationships']['field_story_target_id']['label'] = 'Story NID';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Chapter Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Chapter Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Chapter Teaser */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Chapter Teaser';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Chapter No. (field_chapter_no_) */
  $handler->display->display_options['sorts']['field_chapter_no__value']['id'] = 'field_chapter_no__value';
  $handler->display->display_options['sorts']['field_chapter_no__value']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['sorts']['field_chapter_no__value']['field'] = 'field_chapter_no__value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
  );
  $handler->display->display_options['pane_title'] = 'Chapter List';
  $handler->display->display_options['pane_description'] = 'A Pane to show the chapters in a story with a teaser.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Writing Prompt List */
  $handler = $view->new_display('panel_pane', 'Writing Prompt List', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'A list of all stories that reference a prompt.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_writing_prompt_target_id']['id'] = 'field_writing_prompt_target_id';
  $handler->display->display_options['relationships']['field_writing_prompt_target_id']['table'] = 'field_data_field_writing_prompt';
  $handler->display->display_options['relationships']['field_writing_prompt_target_id']['field'] = 'field_writing_prompt_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Story Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Story Author';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  /* Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Writing Prompt NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_writing_prompt_target_id';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Writing Prompt NID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  $handler->display->display_options['pane_title'] = 'Writing Prompt List';
  $handler->display->display_options['pane_description'] = 'A pane to show all stories referencing a displayed prompt.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Writing Prompt NID',
    ),
  );

  /* Display: Glossary Attachment */
  $handler = $view->new_display('attachment', 'Glossary Attachment', 'attachment_1');
  $handler->display->display_options['display_description'] = 'An attachment to provide a glossary for the page it\'s connected to.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'panel_pane_2' => 'panel_pane_2',
    'default' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: Story Summary pane */
  $handler = $view->new_display('panel_pane', 'Story Summary pane', 'story_summary_pane');
  $handler->display->display_options['display_description'] = 'A content pane that shows the main story summary on a chapter page.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_genre' => 'field_genre',
    'field_rating' => 'field_rating',
    'field_series' => 'field_series',
    'field_status' => 'field_status',
    'field_summary' => 'field_summary',
    'field_tags' => 'field_tags',
    'field_image' => 'field_image',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Cover Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Cover Image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Story Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Story Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Author';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  /* Field: Genre */
  $handler->display->display_options['fields']['field_genre']['id'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre']['field'] = 'field_genre';
  $handler->display->display_options['fields']['field_genre']['ui_name'] = 'Genre';
  $handler->display->display_options['fields']['field_genre']['delta_offset'] = '0';
  /* Field: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['ui_name'] = 'Rating';
  /* Field: Series */
  $handler->display->display_options['fields']['field_series']['id'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series']['field'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['ui_name'] = 'Series';
  $handler->display->display_options['fields']['field_series']['delta_offset'] = '0';
  /* Field: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['ui_name'] = 'Status';
  /* Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['ui_name'] = 'Tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['ui_name'] = 'Summary';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Story NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Story NID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  $handler->display->display_options['pane_title'] = 'Story Summary';
  $handler->display->display_options['pane_description'] = 'A pane showing the summary of the main story on a chapter.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['bookshelf_reference_displays'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('Author Story Reference'),
    t('An entity reference list of allstories by the currently logged in user.'),
    t('All'),
    t('Author'),
    t('The Author of the story'),
    t('Writing Prompt Reference List'),
    t('A Reference list displaying all prompts in the system.'),
    t('Genre'),
    t('Rating'),
    t('Series'),
    t('Chapter List Pane'),
    t('A content pane displaying all chapters connected to a story.'),
    t('Story NID'),
    t('Chapter List'),
    t('A Pane to show the chapters in a story with a teaser.'),
    t('Bookshelf'),
    t('Writing Prompt List'),
    t('A list of all stories that reference a prompt.'),
    t('Content entity referenced from field_writing_prompt'),
    t('By'),
    t('A pane to show all stories referencing a displayed prompt.'),
    t('Glossary Attachment'),
    t('An attachment to provide a glossary for the page it\'s connected to.'),
    t('Story Summary pane'),
    t('A content pane that shows the main story summary on a chapter page.'),
    t('Status'),
    t('Tags'),
    t('Summary'),
    t('Story Summary'),
    t('A pane showing the summary of the main story on a chapter.'),
  );
  $export['bookshelf_reference_displays'] = $view;

  $view = new view();
  $view->name = 'bookshelf_reviews';
  $view->description = 'Views displays related to chowing reviews and comments left for stories across various chapters.';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Bookshelf: Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access comments';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'comment';
  /* No results behavior: No Reviews for this Story */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No Reviews for this Story';
  $handler->display->display_options['empty']['area']['label'] = 'No Reviews';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Currently this story has yet to be reviewed. If you would like you can read the story and leave a review on the site.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Referenced Story */
  $handler->display->display_options['relationships']['field_story_target_id']['id'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['table'] = 'field_data_field_story';
  $handler->display->display_options['relationships']['field_story_target_id']['field'] = 'field_story_target_id';
  $handler->display->display_options['relationships']['field_story_target_id']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_story_target_id']['ui_name'] = 'Referenced Story';
  $handler->display->display_options['relationships']['field_story_target_id']['label'] = 'Story Reference';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Story NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_story_target_id';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Story NID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Reviews Page */
  $handler = $view->new_display('page', 'Reviews Page', 'page');
  $handler->display->display_options['display_description'] = 'A page showing all reviews left for a story across all chapters.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'comment';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = 'Chapter';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'stories/%/reviews';

  /* Display: Reviews Pane */
  $handler = $view->new_display('panel_pane', 'Reviews Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Here\'s What Others Had to Say...';
  $handler->display->display_options['display_description'] = 'A contentpane displaying a random set of reviews from a story.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'For More Reviews';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['pane_title'] = 'Reviews Pane';
  $handler->display->display_options['pane_description'] = 'A content pane to show a random selection of reviews for a story.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['bookshelf_reviews'] = array(
    t('Master'),
    t('Reviews'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No Reviews'),
    t('Currently this story has yet to be reviewed. If you would like you can read the story and leave a review on the site.'),
    t('Content'),
    t('Story Reference'),
    t('All'),
    t('Reviews Page'),
    t('A page showing all reviews left for a story across all chapters.'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Chapter'),
    t('By'),
    t('Reviews Pane'),
    t('Here\'s What Others Had to Say...'),
    t('A contentpane displaying a random set of reviews from a story.'),
    t('For More Reviews'),
    t('A content pane to show a random selection of reviews for a story.'),
    t('Bookshelf'),
  );
  $export['bookshelf_reviews'] = $view;

  $view = new view();
  $view->name = 'bookshelf_user_content_display_tabs';
  $view->description = 'A group of content panes created to display the content created by the viewed user.';
  $view->tag = 'Bookshelf';
  $view->base_table = 'node';
  $view->human_name = 'Bookshelf: User Content Display Tabs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Stories */
  $handler = $view->new_display('panel_pane', 'User Stories', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'A content pane showing all stories created by the user being viewed.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  $handler->display->display_options['pane_title'] = 'User Stories';
  $handler->display->display_options['pane_description'] = 'A content pane to show all stories created by the viewed user.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Author uid',
    ),
  );

  /* Display: User Prompts */
  $handler = $view->new_display('panel_pane', 'User Prompts', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'A content pane displaying all prompts created by the viewed user.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'writing_prompt' => 'writing_prompt',
  );
  $handler->display->display_options['pane_title'] = 'User Prompts';
  $handler->display->display_options['pane_description'] = 'A content pane to show all prompts created by the viewed user.';

  /* Display: Following */
  $handler = $view->new_display('panel_pane', 'Following', 'following');
  $handler->display->display_options['display_description'] = 'The Authors this user is following.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: following */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'following';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User UID */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['ui_name'] = 'User UID';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Favorite Stories */
  $handler = $view->new_display('panel_pane', 'Favorite Stories', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'The stories this user likes.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: following */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'following';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User UID */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['ui_name'] = 'User UID';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'Favorite Stories';
  $handler->display->display_options['pane_description'] = 'The stories this user likes.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['bookshelf_user_content_display_tabs'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('User Stories'),
    t('A content pane showing all stories created by the user being viewed.'),
    t('A content pane to show all stories created by the viewed user.'),
    t('Bookshelf'),
    t('User Prompts'),
    t('A content pane displaying all prompts created by the viewed user.'),
    t('A content pane to show all prompts created by the viewed user.'),
    t('View panes'),
    t('Following'),
    t('The Authors this user is following.'),
    t('author'),
    t('flag'),
    t('Flag user'),
    t('Favorite Stories'),
    t('The stories this user likes.'),
  );
  $export['bookshelf_user_content_display_tabs'] = $view;

  $view = new view();
  $view->name = 'bookshelf_user_content_management';
  $view->description = 'VIew pages related to content creation and managment for Users.';
  $view->tag = 'Bookshelf';
  $view->base_table = 'node';
  $view->human_name = 'Bookshelf: User Content Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own unpublished content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Add Chapters';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="node/add/chapter-page?[field_story]=[nid]"><b>+ Add Chapter</b></a>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Story NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Story NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  /* Field: Genre */
  $handler->display->display_options['fields']['field_genre_editable']['id'] = 'field_genre_editable';
  $handler->display->display_options['fields']['field_genre_editable']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre_editable']['field'] = 'field_genre_editable';
  $handler->display->display_options['fields']['field_genre_editable']['ui_name'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_editable']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genre_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_genre_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_genre_editable']['suppress_description'] = 0;
  /* Field: Series */
  $handler->display->display_options['fields']['field_series_editable']['id'] = 'field_series_editable';
  $handler->display->display_options['fields']['field_series_editable']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series_editable']['field'] = 'field_series_editable';
  $handler->display->display_options['fields']['field_series_editable']['ui_name'] = 'Series';
  $handler->display->display_options['fields']['field_series_editable']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_series_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_series_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_series_editable']['suppress_description'] = 0;
  /* Field: Summary */
  $handler->display->display_options['fields']['field_summary_editable']['id'] = 'field_summary_editable';
  $handler->display->display_options['fields']['field_summary_editable']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary_editable']['field'] = 'field_summary_editable';
  $handler->display->display_options['fields']['field_summary_editable']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['field_summary_editable']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_summary_editable']['widget_type'] = 'text_textarea';
  $handler->display->display_options['fields']['field_summary_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_summary_editable']['suppress_description'] = 0;
  /* Field: Tags */
  $handler->display->display_options['fields']['field_tags_editable']['id'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags_editable']['field'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['ui_name'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_tags_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_tags_editable']['suppress_description'] = 0;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Story';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Chapters and Reviews */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['ui_name'] = 'Chapters and Reviews';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Chapters';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Edit Chapters|stories/[node:nid]/chapters
See Reviews|stories/[node:nid]/reviews',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Chapter Editing Table */
  $handler = $view->new_display('page', 'Chapter Editing Table', 'chapter_editing_page');
  $handler->display->display_options['display_description'] = 'A Table to display all chapters in a story and allow quick and easy editing.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Add Chapters';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="../../node/add/chapter-page?[field_story]=[nid]"><b>+ Add Chapter</b></a>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: No Chapters */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No Chapters';
  $handler->display->display_options['empty']['area']['label'] = 'No Chapters';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Currently there are no chapters in this story. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Story ID */
  $handler->display->display_options['relationships']['reverse_field_story_node']['id'] = 'reverse_field_story_node';
  $handler->display->display_options['relationships']['reverse_field_story_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_story_node']['field'] = 'reverse_field_story_node';
  $handler->display->display_options['relationships']['reverse_field_story_node']['ui_name'] = 'Story ID';
  $handler->display->display_options['relationships']['reverse_field_story_node']['label'] = 'Story ID';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_story_node';
  /* Field: Content: Title (editable) */
  $handler->display->display_options['fields']['title_editable']['id'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['table'] = 'node';
  $handler->display->display_options['fields']['title_editable']['field'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['relationship'] = 'reverse_field_story_node';
  $handler->display->display_options['fields']['title_editable']['textfield_size'] = '';
  /* Field: Content: Chapter No. (editable) */
  $handler->display->display_options['fields']['field_chapter_no__editable']['id'] = 'field_chapter_no__editable';
  $handler->display->display_options['fields']['field_chapter_no__editable']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['fields']['field_chapter_no__editable']['field'] = 'field_chapter_no__editable';
  $handler->display->display_options['fields']['field_chapter_no__editable']['relationship'] = 'reverse_field_story_node';
  $handler->display->display_options['fields']['field_chapter_no__editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_chapter_no__editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_chapter_no__editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_chapter_no__editable']['suppress_description'] = 0;
  /* Field: Content: Body (editable) */
  $handler->display->display_options['fields']['body_editable']['id'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_editable']['field'] = 'body_editable';
  $handler->display->display_options['fields']['body_editable']['relationship'] = 'reverse_field_story_node';
  $handler->display->display_options['fields']['body_editable']['label'] = 'Summary';
  $handler->display->display_options['fields']['body_editable']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_editable']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body_editable']['widget_type'] = 'text_textarea_with_summary';
  $handler->display->display_options['fields']['body_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['body_editable']['suppress_description'] = 0;
  /* Field: Delete */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['ui_name'] = 'Delete';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['path'] = 'node/[nid]/delete?destination=user/dashboard/stories';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Edit */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'Edit';
  $handler->display->display_options['fields']['nid_2']['label'] = 'Operations';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nid_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['path'] = 'node/[nid]/edit?destination=user/dashboard';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Chapter No. (field_chapter_no_) */
  $handler->display->display_options['sorts']['field_chapter_no__value']['id'] = 'field_chapter_no__value';
  $handler->display->display_options['sorts']['field_chapter_no__value']['table'] = 'field_data_field_chapter_no_';
  $handler->display->display_options['sorts']['field_chapter_no__value']['field'] = 'field_chapter_no__value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chapter_page' => 'chapter_page',
  );
  $handler->display->display_options['path'] = 'stories/%/chapters';

  /* Display: My Stories */
  $handler = $view->new_display('panel_pane', 'My Stories', 'my_stories');
  $handler->display->display_options['display_description'] = 'The Content Display Pane for all the current users stories.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_genre_editable' => 'field_genre_editable',
    'field_series_editable' => 'field_series_editable',
    'field_summary_editable' => 'field_summary_editable',
    'field_tags_editable' => 'field_tags_editable',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'megarow_links' => 'megarow_links',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genre_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summary_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['scroll_padding'] = '120';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Add Story';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="../../node/add/story-front-page"><b>+ Add Story</b></a>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Stories';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You currently have no stories uploaded.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story_front_page' => 'story_front_page',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['pane_title'] = 'My Stories';
  $handler->display->display_options['pane_description'] = 'Stories created by the User';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: My Drafts */
  $handler = $view->new_display('panel_pane', 'My Drafts', 'my_drafts');
  $handler->display->display_options['display_description'] = 'Unpublished chapters and articles.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'nid' => 'nid',
    'title' => 'title',
    'field_genre_editable' => 'field_genre_editable',
    'field_series_editable' => 'field_series_editable',
    'field_summary_editable' => 'field_summary_editable',
    'field_tags_editable' => 'field_tags_editable',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'megarow_links' => 'megarow_links',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genre_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_series_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_summary_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Content Type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: Story NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Story NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  /* Field: Genre */
  $handler->display->display_options['fields']['field_genre_editable']['id'] = 'field_genre_editable';
  $handler->display->display_options['fields']['field_genre_editable']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre_editable']['field'] = 'field_genre_editable';
  $handler->display->display_options['fields']['field_genre_editable']['ui_name'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_editable']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genre_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_genre_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_genre_editable']['suppress_description'] = 0;
  /* Field: Series */
  $handler->display->display_options['fields']['field_series_editable']['id'] = 'field_series_editable';
  $handler->display->display_options['fields']['field_series_editable']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series_editable']['field'] = 'field_series_editable';
  $handler->display->display_options['fields']['field_series_editable']['ui_name'] = 'Series';
  $handler->display->display_options['fields']['field_series_editable']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_series_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_series_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_series_editable']['suppress_description'] = 0;
  /* Field: Summary */
  $handler->display->display_options['fields']['field_summary_editable']['id'] = 'field_summary_editable';
  $handler->display->display_options['fields']['field_summary_editable']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary_editable']['field'] = 'field_summary_editable';
  $handler->display->display_options['fields']['field_summary_editable']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['field_summary_editable']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_summary_editable']['widget_type'] = 'text_textarea';
  $handler->display->display_options['fields']['field_summary_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_summary_editable']['suppress_description'] = 0;
  /* Field: Tags */
  $handler->display->display_options['fields']['field_tags_editable']['id'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags_editable']['field'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['ui_name'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_tags_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_tags_editable']['suppress_description'] = 0;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Story';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Chapters and Reviews */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['ui_name'] = 'Chapters and Reviews';
  $handler->display->display_options['fields']['megarow_links']['label'] = 'Chapters';
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => 'Edit Chapters|stories/[node:nid]/chapters
See Reviews|stories/[node:nid]/reviews',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['pane_title'] = 'My Drafts';
  $handler->display->display_options['pane_description'] = 'A display of all content created by the logged in user.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: My Prompts */
  $handler = $view->new_display('panel_pane', 'My Prompts', 'my_prompts');
  $handler->display->display_options['display_description'] = 'A list of writing prompts created by the logged in user.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Add Writing Prompt';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="../../node/add/writing-prompt"><b>+ Add Writing Prompt</b></a>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area_1']['id'] = 'area_1';
  $handler->display->display_options['empty']['area_1']['table'] = 'views';
  $handler->display->display_options['empty']['area_1']['field'] = 'area';
  $handler->display->display_options['empty']['area_1']['label'] = 'No Writing Prompts';
  $handler->display->display_options['empty']['area_1']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_1']['content'] = 'Currently you have not yet created any writing prompts.';
  $handler->display->display_options['empty']['area_1']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Prompt NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Prompt NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  /* Field: Genre */
  $handler->display->display_options['fields']['field_genre_editable']['id'] = 'field_genre_editable';
  $handler->display->display_options['fields']['field_genre_editable']['table'] = 'field_data_field_genre';
  $handler->display->display_options['fields']['field_genre_editable']['field'] = 'field_genre_editable';
  $handler->display->display_options['fields']['field_genre_editable']['ui_name'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_editable']['label'] = 'Genre';
  $handler->display->display_options['fields']['field_genre_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_genre_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_genre_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_genre_editable']['suppress_description'] = 0;
  /* Field: Series */
  $handler->display->display_options['fields']['field_series_editable']['id'] = 'field_series_editable';
  $handler->display->display_options['fields']['field_series_editable']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series_editable']['field'] = 'field_series_editable';
  $handler->display->display_options['fields']['field_series_editable']['ui_name'] = 'Series';
  $handler->display->display_options['fields']['field_series_editable']['label'] = 'Series';
  $handler->display->display_options['fields']['field_series_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_series_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_series_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_series_editable']['suppress_description'] = 0;
  /* Field: Summary */
  $handler->display->display_options['fields']['field_summary_editable']['id'] = 'field_summary_editable';
  $handler->display->display_options['fields']['field_summary_editable']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary_editable']['field'] = 'field_summary_editable';
  $handler->display->display_options['fields']['field_summary_editable']['ui_name'] = 'Summary';
  $handler->display->display_options['fields']['field_summary_editable']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_summary_editable']['widget_type'] = 'text_textarea';
  $handler->display->display_options['fields']['field_summary_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_summary_editable']['suppress_description'] = 0;
  /* Field: Tags */
  $handler->display->display_options['fields']['field_tags_editable']['id'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags_editable']['field'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['ui_name'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['widget_type'] = 'taxonomy_autocomplete';
  $handler->display->display_options['fields']['field_tags_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_tags_editable']['suppress_description'] = 0;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Story';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'writing_prompt' => 'writing_prompt',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['pane_title'] = 'My Prompts';
  $handler->display->display_options['pane_description'] = 'A display of all prmotps created by the logged in user.';
  $handler->display->display_options['pane_category']['name'] = 'Bookshelf';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['bookshelf_user_content_management'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Add Chapters'),
    t('<a href="node/add/chapter-page?[field_story]=[nid]"><b>+ Add Chapter</b></a>'),
    t('author'),
    t('Title'),
    t('Genre'),
    t('Series'),
    t('Summary'),
    t('Tags'),
    t('Delete Story'),
    t('Operations'),
    t('Edit'),
    t('Chapters'),
    t('Chapter Editing Table'),
    t('A Table to display all chapters in a story and allow quick and easy editing.'),
    t('<a href="../../node/add/chapter-page?[field_story]=[nid]"><b>+ Add Chapter</b></a>'),
    t('No Chapters'),
    t('Currently there are no chapters in this story. '),
    t('Story ID'),
    t('Nid'),
    t('Title (editable)'),
    t('Chapter No. (editable)'),
    t('Delete'),
    t('All'),
    t('My Stories'),
    t('The Content Display Pane for all the current users stories.'),
    t('Add Story'),
    t('<a href="../../node/add/story-front-page"><b>+ Add Story</b></a>'),
    t('No Stories'),
    t('You currently have no stories uploaded.'),
    t('Stories created by the User'),
    t('Bookshelf'),
    t('My Drafts'),
    t('Unpublished chapters and articles.'),
    t('Type'),
    t('A display of all content created by the logged in user.'),
    t('My Prompts'),
    t('A list of writing prompts created by the logged in user.'),
    t('Add Writing Prompt'),
    t('<a href="../../node/add/writing-prompt"><b>+ Add Writing Prompt</b></a>'),
    t('No Writing Prompts'),
    t('Currently you have not yet created any writing prompts.'),
    t('A display of all prmotps created by the logged in user.'),
  );
  $export['bookshelf_user_content_management'] = $view;

  return $export;
}
