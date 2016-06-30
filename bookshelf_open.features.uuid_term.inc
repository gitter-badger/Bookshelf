<?php
/**
 * @file
 * bookshelf_open.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bookshelf_open_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'R',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '004fdf7a-c412-4c38-a83d-579c7ff0d049',
    'vocabulary_machine_name' => 'rating',
    'field_image' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'che',
    'description' => 'description of che',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  $terms[] = array(
    'name' => 'fr',
    'description' => 'description of fr',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '07259e32-01fa-4afd-a0d3-dd1a69dff450',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '44411a58-adb3-4d06-b931-038f24c91f9f',
    ),
  );
  $terms[] = array(
    'name' => 'trestidi',
    'description' => 'description of trestidi',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '0af0feb9-edc0-43c7-9ac2-457d5d6914c0',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'fr',
    'description' => 'description of fr',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '0b5ff5a7-ad83-4dc5-8c81-45b3f0535f51',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  $terms[] = array(
    'name' => 'Hurt/Comfort',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0cb203eb-b5d6-4cb5-8ab2-61b4e71de8ea',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'tri',
    'description' => 'description of tri',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '0d5ad3fa-6ed4-45e6-bc76-06ddcf9282e9',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'wrucugup',
    'description' => 'description of wrucugup',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '0e62a1dd-eec9-40b4-a408-a047ebca56fe',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'ch',
    'description' => 'description of ch',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '10392f6a-b485-499a-bfe6-6cc30af7f623',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'sokubrefro',
    'description' => 'description of sokubrefro',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '149b745e-3714-4edc-b69e-0557e2b2eef1',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'che',
    'description' => 'description of che',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '1545531e-1944-45d3-95c4-e937d404b672',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '422a9496-5974-44ef-ac3b-9b6952bc1064',
    ),
  );
  $terms[] = array(
    'name' => 'gerap',
    'description' => 'description of gerap',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '16730d6a-440e-4ede-9b18-10b0a282c629',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '24d94053-a93b-45e8-8824-fb1e8ec2bfec',
    ),
  );
  $terms[] = array(
    'name' => 'valestocluli',
    'description' => 'description of valestocluli',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '16f4c574-ab06-4ac8-875a-d58966ff6218',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'eb5eb1b6-28c1-4f24-a60b-b08fa1c4be24',
    ),
  );
  $terms[] = array(
    'name' => 'sluhofr',
    'description' => 'description of sluhofr',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '19990bff-370d-4d23-869f-d3a0fca58561',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Sci-Fi',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1b9d9b79-241c-407f-bf70-a8571398cc41',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'sawofranojis',
    'description' => 'description of sawofranojis',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '1d956798-5ed2-46a1-b3f0-b0601e61d806',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Spiritual',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e8a7a22-736d-4712-b9d0-91f5317106d4',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'frapewes',
    'description' => 'description of frapewes',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '1fd4a889-89cf-45f6-886e-88633848c3c1',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'cliweno',
    'description' => 'description of cliweno',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '1fd8b4b7-1075-4c6e-81e0-e233976e5dbc',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'Abandoned',
    'description' => '<p>All work has ceased and no new updates will be made.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '23eeff52-bca4-40d5-b91f-caf0fefdd8e3',
    'vocabulary_machine_name' => 'status',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'G',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '24433430-c17d-494f-ac71-f8bad00f4b06',
    'vocabulary_machine_name' => 'rating',
    'field_image' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'phecospi',
    'description' => 'description of phecospi',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '24d94053-a93b-45e8-8824-fb1e8ec2bfec',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'd7e5c70c-ed5b-4f59-8edf-f53e7a6c46aa',
    ),
  );
  $terms[] = array(
    'name' => 'trobes',
    'description' => 'description of trobes',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '257da0dc-cae9-434e-8849-7ae69602b195',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'chudravofru',
    'description' => 'description of chudravofru',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '27a581a2-0e26-4451-aaed-7ae766be32ef',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'kowrukaju',
    'description' => 'description of kowrukaju',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '28237b5b-61d0-4f9a-bdac-fecafc596f93',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'rethoslaw',
    'description' => 'description of rethoslaw',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '2933724e-0316-4e21-ab69-717b62684ad0',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'preclicimes',
    'description' => 'description of preclicimes',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '298e9e25-9fc9-499b-a406-16b3d46e863c',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'nislubut',
    'description' => 'description of nislubut',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2ab018f8-7a7c-4cfa-a9e7-dc115c086741',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Romance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2cde06b1-d784-4d7f-8595-1c040808ff66',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '30e875d1-4d3e-4f33-a133-1d337cb668de',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'kuuodr',
    'description' => 'description of kuuodr',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '32cea132-57e8-43c7-811d-d03a1b93acfa',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  $terms[] = array(
    'name' => 'stistuwo',
    'description' => 'description of stistuwo',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '3acd007e-8a2a-429d-8bd6-6e039ebf8a33',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '61716fa0-13e0-4653-bc21-c6873e1bae10',
    ),
  );
  $terms[] = array(
    'name' => 'douowreshor',
    'description' => 'description of douowreshor',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '3ded794d-bbd6-473e-8f33-122638052f93',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'gu',
    'description' => 'description of gu',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '3fccc213-851f-4d78-bcf2-e6c58f6dfea4',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'thuka',
    'description' => 'description of thuka',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '403901a5-8edd-4198-a0ed-1972d61f9f51',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'sheshopos',
    'description' => 'description of sheshopos',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '412af8f4-1afc-494e-8204-d7f6303d006d',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'spinucrawrit',
    'description' => 'description of spinucrawrit',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '422a9496-5974-44ef-ac3b-9b6952bc1064',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'c35d7c33-2f48-44a3-b315-821051399805',
    ),
  );
  $terms[] = array(
    'name' => 'phetrek',
    'description' => 'description of phetrek',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '4264d1c0-2ff3-4429-a4bb-758a6bafc376',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'vifrivothec',
    'description' => 'description of vifrivothec',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '42d7d7cc-6273-4dc9-989e-44d24db8e975',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'cloclaspasto',
    'description' => 'description of cloclaspasto',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '44411a58-adb3-4d06-b931-038f24c91f9f',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'joclol',
    'description' => 'description of joclol',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '460803d1-5e81-4ce8-bcbc-2e4bb337c5cb',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'kaw',
    'description' => 'description of kaw',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '49b9cd54-8ff2-4cc9-9d13-642021dfd825',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'gidrihu',
    'description' => 'description of gidrihu',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '4eabc7a3-15d7-4ff2-aec5-f9340eabfe25',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'chastec',
    'description' => 'description of chastec',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '52467627-2883-4f8c-8f28-8664a2addb9a',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '44411a58-adb3-4d06-b931-038f24c91f9f',
    ),
  );
  $terms[] = array(
    'name' => 'tadislame',
    'description' => 'description of tadislame',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '5550fef2-d35f-4b58-a50d-52410751fcf1',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'shiwr',
    'description' => 'description of shiwr',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '58cbdd42-1f3c-4ed6-a7b3-06548c3574fe',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'Poetry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '58f5c9a6-f447-4ffa-b22d-d0cf43500080',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'gonibreth',
    'description' => 'description of gonibreth',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '5a0cb95e-4601-4650-9cdf-117548928470',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '24d94053-a93b-45e8-8824-fb1e8ec2bfec',
    ),
  );
  $terms[] = array(
    'name' => 'XXX',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5fbfc398-73cf-460c-bb76-c1b0ce08db5f',
    'vocabulary_machine_name' => 'rating',
    'field_image' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'spo',
    'description' => 'description of spo',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '613b7058-4c99-4e0c-871c-bd0f8983ad6b',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'gophutrecru',
    'description' => 'description of gophutrecru',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '61480e82-842d-45ea-b9b7-fb28c2209606',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'wrosasuw',
    'description' => 'description of wrosasuw',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '6165707f-11cd-4808-bf5b-e48178a895c6',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'c35d7c33-2f48-44a3-b315-821051399805',
    ),
  );
  $terms[] = array(
    'name' => 'drugi',
    'description' => 'description of drugi',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '61716fa0-13e0-4653-bc21-c6873e1bae10',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'tecru',
    'description' => 'description of tecru',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '61b2728f-e40d-41f9-8b49-88523c7d83bd',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'ganid',
    'description' => 'description of ganid',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '65fa5a95-5317-42ce-b572-19243cb2fc7d',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'Horror',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6679e553-b488-45e9-95a5-ff6f2ad1e1e3',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'uupriuup',
    'description' => 'description of uupriuup',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '68a5a348-52c8-4a7f-b288-acc5fc2d7912',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'Angst',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6cea294e-2b62-4387-946b-0d16cdd9eb3e',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'nubepro',
    'description' => 'description of nubepro',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '6dcf2a2f-18ae-44b6-894a-36f166b033ed',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'Erotica',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '702d3de4-d638-4436-9048-4afc851ded68',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Action/Adventure',
    'description' => '<p>Featuring characters involved in exciting and usually dangerous activities and adventures</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '70d495fc-6991-4387-aa24-75be102dbba0',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'slutouedri',
    'description' => 'description of slutouedri',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '73a6efb1-39ba-4516-af75-b51c844bfc6e',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'Drama',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '769b44a0-7395-4455-9609-24c94182b6f6',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'photaphoclo',
    'description' => 'description of photaphoclo',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '7c853aac-139e-4a1a-b9ed-dec20bbea8be',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '42d7d7cc-6273-4dc9-989e-44d24db8e975',
    ),
  );
  $terms[] = array(
    'name' => 'Fantasy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7e33a659-22a0-4cb0-9617-42157070d28f',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'trislucl',
    'description' => 'description of trislucl',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7e63ff77-e90a-485a-84e0-0da34833da6f',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  $terms[] = array(
    'name' => 'Mystery',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '800126c7-80d1-419b-b932-6eeed2e28f64',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'shastu',
    'description' => 'description of shastu',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '80c420d6-84d0-48db-b44a-86a5e2c427b3',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'draho',
    'description' => 'description of draho',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '80d74a33-fdd6-4060-8119-ae7e05614a0b',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'swuguswomage',
    'description' => 'description of swuguswomage',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '83dd86d8-d60f-4260-bdf5-8bd02f4ce938',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'spe',
    'description' => 'description of spe',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '848ad30d-aa0b-4d30-9391-d10256991b80',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Suspense',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '858f5bff-be03-403c-8ced-b0d9a82c64d5',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'clesticlo',
    'description' => 'description of clesticlo',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '872aa761-3952-42a7-bb92-2a64814edae4',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  $terms[] = array(
    'name' => 'jeslusheja',
    'description' => 'description of jeslusheja',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '89975c2f-bd60-4ef5-84d5-4d692f5f138d',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'broprenoth',
    'description' => 'description of broprenoth',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '8a8d8cbd-99c3-4313-b123-99adbc032de4',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'hoshifrecrub',
    'description' => 'description of hoshifrecrub',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '8b637e90-9fa2-4f0a-be61-9f085b8afc60',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'wibri',
    'description' => 'description of wibri',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => '8e10e4fc-2c65-4e90-a9fa-f8316469c0eb',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'Family',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '902b327a-feb6-494d-bc2c-738cea6c954e',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'swapevubicr',
    'description' => 'description of swapevubicr',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '90684099-b2fb-4efb-9fea-6965c7ec7b54',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'Hiatus',
    'description' => '<p>Production is temporarily on hold.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9238e4f1-67b8-4fb5-b26e-cdd3913108a6',
    'vocabulary_machine_name' => 'status',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'prochaswe',
    'description' => 'description of prochaswe',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9349cd46-d14f-4b0f-8fb0-03664fac1d78',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'gelecrast',
    'description' => 'description of gelecrast',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '938bf935-0203-4f40-8150-e0f9c150077d',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'mebuchiv',
    'description' => 'description of mebuchiv',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '981c73f6-732f-4f57-8a7f-170518d80205',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'ju',
    'description' => 'description of ju',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '9a2645d8-4eaf-425b-b50a-3f7ba404fe33',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'trutacrawit',
    'description' => 'description of trutacrawit',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9a901b36-8af0-4094-bf9e-be60f5669c2b',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'slokeu',
    'description' => 'description of slokeu',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9d34946a-8bfe-48d0-a236-79a2492dc4a6',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'stas',
    'description' => 'description of stas',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '9e0e146f-334e-479b-856c-92f599f93ed5',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'drilocatho',
    'description' => 'description of drilocatho',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '24d94053-a93b-45e8-8824-fb1e8ec2bfec',
    ),
  );
  $terms[] = array(
    'name' => 'Friendship',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a10a19f6-3f86-4ca2-86a8-782f85eab05a',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'slufron',
    'description' => 'description of slufron',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'a1dd56e6-c91e-4b10-b29d-8732124ec14e',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'slepahipedra',
    'description' => 'description of slepahipedra',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a2d0c4db-9ce8-4178-a09f-cff18ec5ff52',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'Humor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a579bba2-7975-4340-80fd-295a6883804d',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'brarogo',
    'description' => 'description of brarogo',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'a5df1a08-c4aa-479c-a338-c1df750632b1',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'froshajoshi',
    'description' => 'description of froshajoshi',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'aa3db360-43e7-430e-95a0-a849af3ffb9d',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'spisop',
    'description' => 'description of spisop',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'abc106c9-8b12-4b0a-8904-ab558ef9b865',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  $terms[] = array(
    'name' => 'thiprosha',
    'description' => 'description of thiprosha',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'ac4d27f6-f806-474a-a8ff-5ff3cd2151a1',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'In Progress',
    'description' => '<p>The project is currently under active development.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ace135c9-75d9-4a0f-be65-957a3d773753',
    'vocabulary_machine_name' => 'status',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Parody',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ae5f7dd8-bb2f-4bac-a3ba-45963b7a0952',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'wuga',
    'description' => 'description of wuga',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'b2608e57-b377-495c-a3e8-64be97a69860',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'Crime',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b43ce653-7fb6-4832-8cca-bd47e18de6c1',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'PG',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b672a4f2-8ba5-46c6-a5f7-fd0ac483f515',
    'vocabulary_machine_name' => 'rating',
    'field_image' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'pr',
    'description' => 'description of pr',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'b90ea4a2-b7dc-4a62-a610-5abd6c120a83',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'c35d7c33-2f48-44a3-b315-821051399805',
    ),
  );
  $terms[] = array(
    'name' => 'cluthitiv',
    'description' => 'description of cluthitiv',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'b9873bb1-1aa6-42e2-8338-1b4f7ca6e6d7',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'Western',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c054337b-17d8-4bb2-b769-33fb84a2d472',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Supernatural',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c063dfb2-4e70-4c26-bafb-bbfb6107c7fb',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'hec',
    'description' => 'description of hec',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'c1643fac-90cf-4877-8ab8-a86f5761c84b',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'c35d7c33-2f48-44a3-b315-821051399805',
    ),
  );
  $terms[] = array(
    'name' => 'jejo',
    'description' => 'description of jejo',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'c35d7c33-2f48-44a3-b315-821051399805',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'thach',
    'description' => 'description of thach',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'c6272a20-58c6-4f60-8191-84dd81425956',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'chi',
    'description' => 'description of chi',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'c7b7957f-9176-45f1-8b3b-5434aec9534a',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'uona',
    'description' => 'description of uona',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'c8f40190-9593-407e-ab1a-6469ea4a2906',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'leclevutruje',
    'description' => 'description of leclevutruje',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'c9a9500e-5c71-40a2-8751-2bbc9191db64',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'rahacro',
    'description' => 'description of rahacro',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'd0d4a46c-e2fd-43d0-9ad7-39f49c9778b1',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'phephulibr',
    'description' => 'description of phephulibr',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd120da55-dc8b-4ced-bb96-21fb8c2a1f17',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'swophohast',
    'description' => 'description of swophohast',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7e5c70c-ed5b-4f59-8edf-f53e7a6c46aa',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '42d7d7cc-6273-4dc9-989e-44d24db8e975',
    ),
  );
  $terms[] = array(
    'name' => 'Tragedy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e063886c-4b57-4903-903c-265296d4b902',
    'vocabulary_machine_name' => 'genre',
    'path' => array(
      'pathauto' => 1,
    ),
    'panelizer' => array(
      'default' => array(
        'name' => 'taxonomy_term:genre:default:default',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'rufrustofraf',
    'description' => 'description of rufrustofraf',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'e167562e-e9e0-4092-b66f-d5da009fe6cc',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'bahulauageti',
    'description' => 'description of bahulauageti',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'e397b848-1e18-49e1-b6fd-373a5fa6afdc',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '61716fa0-13e0-4653-bc21-c6873e1bae10',
    ),
  );
  $terms[] = array(
    'name' => 'tab',
    'description' => 'description of tab',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => 'e5ecc5ce-1349-4ba0-b801-87f13dbc1eca',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'gupefr',
    'description' => 'description of gupefr',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'eb5eb1b6-28c1-4f24-a60b-b08fa1c4be24',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'bobopriw',
    'description' => 'description of bobopriw',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => 'ed3db042-f848-478a-baf2-8bb6db72d946',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '44411a58-adb3-4d06-b931-038f24c91f9f',
    ),
  );
  $terms[] = array(
    'name' => 'thijadruto',
    'description' => 'description of thijadruto',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eec3523e-ffe5-48db-a026-6d41256251d9',
    'vocabulary_machine_name' => 'series',
    'field_image' => array(),
  );
  $terms[] = array(
    'name' => 'spopiri',
    'description' => 'description of spopiri',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'f0d0fed4-8d60-4100-84cb-2decaf1ca8b8',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '24d94053-a93b-45e8-8824-fb1e8ec2bfec',
    ),
  );
  $terms[] = array(
    'name' => 'ne',
    'description' => 'description of ne',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'f17713bc-3bcc-4c56-930a-45e41ebb7155',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '24d94053-a93b-45e8-8824-fb1e8ec2bfec',
    ),
  );
  $terms[] = array(
    'name' => 'nutichucrebr',
    'description' => 'description of nutichucrebr',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'f1ea3650-06e5-4e98-bd2a-04926d5e5a3b',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'cislone',
    'description' => 'description of cislone',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'f3b0f83e-005a-4c05-84d7-0f6aa50f6517',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '01c7b043-565c-4819-944a-ca78b1ad8b32',
    ),
  );
  $terms[] = array(
    'name' => 'tra',
    'description' => 'description of tra',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => 'f442ce12-b7aa-45ed-b51d-0a3bea79226b',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'trobrocecr',
    'description' => 'description of trobrocecr',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'f4ca7c51-b8ef-4d49-9082-cde6b87ed1f1',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => 'eb5eb1b6-28c1-4f24-a60b-b08fa1c4be24',
    ),
  );
  $terms[] = array(
    'name' => 'Completed',
    'description' => '<p>The project has been finished and is completely posted.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8ad8de1-8a80-45d8-82e7-e49e16413a56',
    'vocabulary_machine_name' => 'status',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'PG-13',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fbeb040f-2c8c-4c6f-bd40-bac68a992762',
    'vocabulary_machine_name' => 'rating',
    'field_image' => array(),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'cr',
    'description' => 'description of cr',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'fce25171-3c2e-4301-90cf-891ffa8809fa',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'swebadraph',
    'description' => 'description of swebadraph',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => 'fdf44c4b-49cd-445b-af8d-51a07b947f65',
    'vocabulary_machine_name' => 'tags',
    'parent' => array(
      0 => '9e4fc73e-67e0-4860-948c-3a86fd13eefc',
    ),
  );
  return $terms;
}
