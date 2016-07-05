<?php 

/**
 * Implementation of hook_rules_action_info().
 */
function theme_rules_rules_action_info() {
  return array(
    'theme_rules_action_user_set_theme' => array(
      'label' => t('Change users\'s theme'),
      'group' => t('User'),
      'arguments' => array(
        'user' => array(
          'type' => 'user', 'label' => t('User, whose theme will be 
changed'),
          'label' => t('User'),
        ),
      ),
      'provides' => array(
        'theme' => array('type' => 'string', 'label' => t('Theme to load')),
      ),
      'module' => 'theme_rules',
    ),
  );
}



/**
 * Changes a users theme
 */
function theme_rules_action_user_set_theme($user, $theme) {
  $user = user_save($user, array('theme' => $theme));
  return $user;
}

