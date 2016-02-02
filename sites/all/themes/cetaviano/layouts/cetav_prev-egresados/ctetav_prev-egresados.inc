<?php

// Plugin definition
$plugin = array(
  'title' => t('CETAV  prev egresados'),
  'category' => t('CETAV'),
  'icon' => 'cetav_prev-egresados.png',
  'theme' => 'cetav_prev-egresados',
  'css' => 'cetav_prev-egresados.css',

  'regions' => array(
    'left' => t('Left side'),
    'left_intro' => t('Left Intro'),
    'right' => t('Right side'),
    'center_intro' => t('Center Intro'),
    'right_intro' => t('Right Intro')
  ),
);
