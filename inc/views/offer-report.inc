<?php
$view = new view();
$view->name = 'offer_reports_view';
$view->description = 'View for Offer Reports Content Type (this doesn\'t have a module)';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Offer Reports View';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Offer by Betsson AB';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_offer_date' => 'field_offer_date',
  'title' => 'title',
  'field_new_pdf_link' => 'field_new_pdf_link',
  'php' => 'php',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_offer_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_new_pdf_link' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: Content: Date */
$handler->display->display_options['fields']['field_offer_date']['id'] = 'field_offer_date';
$handler->display->display_options['fields']['field_offer_date']['table'] = 'field_data_field_offer_date';
$handler->display->display_options['fields']['field_offer_date']['field'] = 'field_offer_date';
$handler->display->display_options['fields']['field_offer_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_offer_date']['settings'] = array(
  'format_type' => 'mini',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Types of Release';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: New PDF link */
$handler->display->display_options['fields']['field_new_pdf_link']['id'] = 'field_new_pdf_link';
$handler->display->display_options['fields']['field_new_pdf_link']['table'] = 'field_data_field_new_pdf_link';
$handler->display->display_options['fields']['field_new_pdf_link']['field'] = 'field_new_pdf_link';
$handler->display->display_options['fields']['field_new_pdf_link']['label'] = '';
$handler->display->display_options['fields']['field_new_pdf_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_new_pdf_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_new_pdf_link']['click_sort_column'] = 'fid';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$lBasisHtml = \'<a href="%s" target="_blank"><img class="file-icon" alt="View Report" title="application/pdf" src="/modules/file/icons/application-pdf.png">pdf</a>\';

//check if new or old pdf file 
//file is considered as new if it has been uploaded from Storage API Module. 
//That means this file was stored directly in the database and the URL is different than before
$lNewPDFFiles = $data->_field_data[\'nid\'][\'entity\']->field_offer_file_pdf_link;
if (count($lNewPDFFiles ))
{
	$lPDFURL = file_create_url($lNewPDFFiles["und"][0]["uri"]);
	

}else{
	$lOldPDFFiles = $data->_field_data[\'nid\'][\'entity\']->field_offer_file_pdf_link;
	if (count( $lOldPDFFiles))
	{
		$lPDFURL = file_create_url( $lOldPDFFiles["und"][0]["uri"]);
	}else{
		$lPDFURL = "undefined";
	}
}

//replace the PDFUrl
echo sprintf($lBasisHtml , $lPDFURL );

?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
/* Sort criterion: Content: Date (field_offer_date) */
$handler->display->display_options['sorts']['field_offer_date_value']['id'] = 'field_offer_date_value';
$handler->display->display_options['sorts']['field_offer_date_value']['table'] = 'field_data_field_offer_date';
$handler->display->display_options['sorts']['field_offer_date_value']['field'] = 'field_offer_date_value';
$handler->display->display_options['sorts']['field_offer_date_value']['expose']['label'] = 'Date (field_offer_date)';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'offer_reports' => 'offer_reports',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'offer-reports';
$translatables['offer_reports_view'] = array(
  t('Master'),
  t('Offer by Betsson AB'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Date'),
  t('Types of Release'),
  t('Date (field_offer_date)'),
  t('Page'),
);


return $view;