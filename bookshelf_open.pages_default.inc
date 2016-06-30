<?php
/**
 * @file
 * bookshelf_open.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bookshelf_open_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'just_in';
  $page->task = 'page';
  $page->admin_title = 'Just In';
  $page->admin_description = '';
  $page->path = 'stories/just-in';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_just_in__panel';
  $handler->task = 'page';
  $handler->subtask = 'just_in';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Just In',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Just In';
  $display->uuid = 'a8683b77-da95-4af7-9a3c-11594abcdf42';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0fe2b86f-e315-4ab5-8091-cb948b7f0aa6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookshelf_content_display-just_in_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fe2b86f-e315-4ab5-8091-cb948b7f0aa6';
    $display->content['new-0fe2b86f-e315-4ab5-8091-cb948b7f0aa6'] = $pane;
    $display->panels['left'][0] = 'new-0fe2b86f-e315-4ab5-8091-cb948b7f0aa6';
    $pane = new stdClass();
    $pane->pid = 'new-fb31e6a3-edb9-4a7a-ac8f-34d4ba5117ed';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'views-5a07ca3251dc8279a57d2a0cfe3941f5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb31e6a3-edb9-4a7a-ac8f-34d4ba5117ed';
    $display->content['new-fb31e6a3-edb9-4a7a-ac8f-34d4ba5117ed'] = $pane;
    $display->panels['top'][0] = 'new-fb31e6a3-edb9-4a7a-ac8f-34d4ba5117ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0fe2b86f-e315-4ab5-8091-cb948b7f0aa6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['just_in'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'stories_page';
  $page->task = 'page';
  $page->admin_title = 'Stories Page';
  $page->admin_description = 'The main stories page.';
  $page->path = 'stories';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Stories',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Stories',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_stories_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'stories_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Stories Panels',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '76.71658717440462',
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '23.283412825595373',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Stories';
  $display->uuid = '77154558-c0cb-4432-9833-c1596841d53c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3edf02fe-5ee9-4fb6-9765-86353a72a2b2';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-e3b48ab9eca7098544a1e96c1c8a1b9d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3edf02fe-5ee9-4fb6-9765-86353a72a2b2';
    $display->content['new-3edf02fe-5ee9-4fb6-9765-86353a72a2b2'] = $pane;
    $display->panels['middle'][0] = 'new-3edf02fe-5ee9-4fb6-9765-86353a72a2b2';
    $pane = new stdClass();
    $pane->pid = 'new-9b5e5f0d-263b-4d05-8d75-e1e2d0cdafd9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookshelf_content_display-story_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9b5e5f0d-263b-4d05-8d75-e1e2d0cdafd9';
    $display->content['new-9b5e5f0d-263b-4d05-8d75-e1e2d0cdafd9'] = $pane;
    $display->panels['middle'][1] = 'new-9b5e5f0d-263b-4d05-8d75-e1e2d0cdafd9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['stories_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'writing_prompt_page';
  $page->task = 'page';
  $page->admin_title = 'Writing Prompt Page';
  $page->admin_description = 'The page displaying writing prompts created in the site.';
  $page->path = 'prompts';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Writing Prompts',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_writing_prompt_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'writing_prompt_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Writing Prompts',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '69.6377797692146',
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '30.3622202307854',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Writing Prompts';
  $display->uuid = 'cb72b578-76e3-429a-91a2-cf6c41b1709a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9b053e6-8cb8-4bb2-bacf-fc617159fbc9';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookshelf_content_display-prompt_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9b053e6-8cb8-4bb2-bacf-fc617159fbc9';
    $display->content['new-a9b053e6-8cb8-4bb2-bacf-fc617159fbc9'] = $pane;
    $display->panels['center'][0] = 'new-a9b053e6-8cb8-4bb2-bacf-fc617159fbc9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['writing_prompt_page'] = $page;

  return $pages;

}
