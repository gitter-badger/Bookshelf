<?php
/**
 * @file
 * bookshelf_open.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function bookshelf_open_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'bookshelf_user_content_managemen';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Bookshelf: User Content Management';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'bookshelf_user_content_management',
      'display' => 'my_stories',
      'args' => '',
      'title' => 'My Stories',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'bookshelf_user_content_management',
      'display' => 'my_prompts',
      'args' => '',
      'title' => 'My Prompts',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'bookshelf_user_content_management',
      'display' => 'my_drafts',
      'args' => '',
      'title' => 'My Drafts',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Bookshelf: User Content Management');
  t('My Drafts');
  t('My Prompts');
  t('My Stories');

  $export['bookshelf_user_content_managemen'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'bookshelf_user_profile_managemen';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Your Profile and Messages';
  $quicktabs->tabs = array(
    0 => array(
      'path' => 'user/meuid/edit',
      'title' => 'Profile',
      'weight' => '-100',
      'type' => 'callback',
    ),
    1 => array(
      'machine_name' => 'bookshelf_user_content_managemen',
      'title' => 'My Stuff',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
    2 => array(
      'path' => 'messages',
      'title' => 'My Inbox',
      'weight' => '-98',
      'type' => 'callback',
    ),
    3 => array(
      'path' => 'messages/sent',
      'title' => 'My Outbox',
      'weight' => '-97',
      'type' => 'callback',
    ),
    4 => array(
      'path' => 'messages/blocked',
      'title' => 'Blocked Users',
      'weight' => '-96',
      'type' => 'callback',
    ),
    5 => array(
      'path' => 'messages/new',
      'title' => 'New Private Message',
      'weight' => '-95',
      'type' => 'callback',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Navlist';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocked Users');
  t('My Inbox');
  t('My Outbox');
  t('My Stuff');
  t('New Private Message');
  t('Profile');
  t('Your Profile and Messages');

  $export['bookshelf_user_profile_managemen'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'bookshelf_user_profile_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Bookshelf: User Profile Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'bookshelf_user_content_display_tabs',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Stories',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'bookshelf_user_content_display_tabs',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Writing Prompts',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Basic';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Bookshelf: User Profile Tabs');
  t('Stories');
  t('Writing Prompts');

  $export['bookshelf_user_profile_tabs'] = $quicktabs;

  return $export;
}
