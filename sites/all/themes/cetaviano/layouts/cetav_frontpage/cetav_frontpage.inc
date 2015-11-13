<?php

// Plugin definition
$plugin = array(
  'title' => t('CETAV frontpage'),
  'category' => t('CETAV'),
  'icon' => 'cetav_frontpage.png',
  'theme' => 'cetav_frontpage',
  'css' => 'cetav_frontpage.css',
  'regions' => array(
    'wide' => t('Wide'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'wide_second' => t('Wide second'),
    'wide_third' => t('Wide third'),
    'left_second' => t('Left side'),
    'right_second' => t('Right side'),
    'wide_fourth' => t('Wide fourth')
  ),
);
