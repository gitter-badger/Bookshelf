<?php
/**
 * @file
 * bookshelf_open.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bookshelf_open_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bookshelf_open_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function bookshelf_open_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite Story".
  $flags['favorite_story'] = array(
    'entity_type' => 'node',
    'title' => 'Favorite Story',
    'global' => 0,
    'types' => array(
      0 => 'story_front_page',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => 'Mark this story as one of your favorites',
    'flag_message' => 'Favorited',
    'unflag_short' => 'Remove this story',
    'unflag_long' => 'Removes this story from your favorite list',
    'unflag_message' => 'Unfavorited',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'bookshelf_open',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Following".
  $flags['following'] = array(
    'entity_type' => 'user',
    'title' => 'Following',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Follow This Author',
    'flag_long' => 'Click here to follow this author.',
    'flag_message' => 'Followed',
    'unflag_short' => 'Unfollow This Author',
    'unflag_long' => 'Unfollowed',
    'unflag_message' => 'Unfollowed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'bookshelf_open',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function bookshelf_open_node_info() {
  $items = array(
    'chapter_page' => array(
      'name' => t('Chapter Page'),
      'base' => 'node_content',
      'description' => t('A page of "real" content. This page contains the actual chapters of a story with areas for disclaimers, author\'s notes, and selection of the actual story.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story_front_page' => array(
      'name' => t('Story Front Page'),
      'base' => 'node_content',
      'description' => t('The front page of a story. The story meta data goes here including Genre, Series, Rating, and Status'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'writing_prompt' => array(
      'name' => t('Writing Prompt'),
      'base' => 'node_content',
      'description' => t('A page meant for creating writing prompts. Create an idea for a story and share it with the community. Includes a summary and a list of rules for each prompt.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
