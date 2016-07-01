<?php
/**
 * @file
 * perfil_egresado_cetav.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function perfil_egresado_cetav_default_rules_configuration() {
  $items = array();
  $items['rules_notify_new_graduate_node'] = entity_import('rules_config', '{ "rules_notify_new_graduate_node" : {
      "LABEL" : "Notify new graduate node",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--perfil_egresado" : { "bundle" : "perfil_egresado" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "Se ha creado un nuevo perfil de egresado",
            "message" : "[node:title] [node:field-apellido] ha creado su perfil de egresado, si deseas verificar el contenido que ha suministrado puedes utilizar el siguiente enlace: [node:url]",
            "from" : [ "site:mail" ]
          }
        }
      ]
    }
  }');
  $items['rules_verify_add_link_of_graduate'] = entity_import('rules_config', '{ "rules_verify_add_link_of_graduate" : {
      "LABEL" : "Verify add link of graduate",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "init" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "site:current-page:path" ],
            "value" : "node\\/add\\/perfil-egresado"
          }
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "site:current-user:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "current_user" : "Current User" } }
          }
        },
        { "redirect" : { "url" : "user\\/[current-user:uid]\\/edit" } }
      ]
    }
  }');
  return $items;
}
