<?php
// Plugin definition
$plugin = array(
  'title' => t('CETAV Footer'),
  'category' => t('CETAV'),
  'icon' => 'cetav_footer.png',
  'theme' => 'cetav_footer',
  'css' => 'cetav_footer.css',
  'regions' => array(
    'wide_first' => t('Wide First'),
    'wide_second' => t('Wide Second'),
    'wide_third' => t('Wide Third'),
    'wide_fourth' => t('Wide Fourth')
  ),
);
