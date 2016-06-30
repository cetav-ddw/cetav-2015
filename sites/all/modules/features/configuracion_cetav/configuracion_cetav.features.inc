<?php
/**
 * @file
 * configuracion_cetav.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuracion_cetav_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function configuracion_cetav_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function configuracion_cetav_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "db_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_title_noticia" : true,
              "field_acerca_de_mi" : true,
              "field_email" : true,
              "field_numero_telefono" : true,
              "field_profesion_egresado" : true,
              "field_sub_title_carreras" : true,
              "field_titulo_carrera" : true,
              "field_profesor" : true,
              "field_horario" : true,
              "field_duracion" : true,
              "field_precio" : true,
              "field_cupo" : true,
              "field_telefono" : true,
              "field_lugar" : true,
              "field_title_curso" : true,
              "field_correo" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_title_noticia" : true,
              "field_acerca_de_mi" : true,
              "field_email" : true,
              "field_numero_telefono" : true,
              "field_profesion_egresado" : true,
              "field_sub_title_carreras" : true,
              "field_titulo_carrera" : true,
              "field_profesor" : true,
              "field_horario" : true,
              "field_duracion" : true,
              "field_precio" : true,
              "field_cupo" : true,
              "field_telefono" : true,
              "field_lugar" : true,
              "field_title_curso" : true,
              "field_correo" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_title_noticia" : true,
              "field_acerca_de_mi" : true,
              "field_email" : true,
              "field_numero_telefono" : true,
              "field_profesion_egresado" : true,
              "field_sub_title_carreras" : true,
              "field_titulo_carrera" : true,
              "field_profesor" : true,
              "field_horario" : true,
              "field_duracion" : true,
              "field_precio" : true,
              "field_cupo" : true,
              "field_telefono" : true,
              "field_lugar" : true,
              "field_title_curso" : true,
              "field_correo" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_title_noticia" : true,
              "field_acerca_de_mi" : true,
              "field_email" : true,
              "field_numero_telefono" : true,
              "field_profesion_egresado" : true,
              "field_sub_title_carreras" : true,
              "field_titulo_carrera" : true,
              "field_profesor" : true,
              "field_horario" : true,
              "field_duracion" : true,
              "field_precio" : true,
              "field_cupo" : true,
              "field_telefono" : true,
              "field_lugar" : true,
              "field_title_curso" : true,
              "field_correo" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:format" : { "type" : "string" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_acerca_de_mi" : { "type" : "text" },
        "field_carrera_tecnica" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_correo" : { "type" : "text" },
        "field_cupo" : { "type" : "text" },
        "field_disponibilidad_egresado" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_duracion" : { "type" : "text" },
        "field_email" : { "type" : "text" },
        "field_generacion_egresado" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_habilidades_egresado" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_horario" : { "type" : "text" },
        "field_lugar" : { "type" : "text" },
        "field_numero_telefono" : { "type" : "text" },
        "field_precio" : { "type" : "text" },
        "field_profesion_egresado" : { "type" : "text" },
        "field_profesor" : { "type" : "text" },
        "field_programa_carreras" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_sub_title_carreras" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_telefono" : { "type" : "text" },
        "field_testimonios" : { "type" : "integer", "entity_type" : "paragraphs_item" },
        "field_title_curso" : { "type" : "text" },
        "field_title_noticia" : { "type" : "text" },
        "field_titulo_carrera" : { "type" : "text" },
        "promote" : { "type" : "boolean" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['fpp_index'] = entity_import('search_api_index', '{
    "name" : "FPP Index",
    "machine_name" : "fpp_index",
    "description" : null,
    "server" : "db_server",
    "item_type" : "fieldable_panels_pane",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "admin_description" : { "type" : "text" },
        "admin_title" : { "type" : "text" },
        "bundle" : { "type" : "string" },
        "category" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "field_admision_title" : { "type" : "text" },
        "field_cetav_font_character" : { "type" : "text" },
        "field_personal" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_preview_curso_home" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_steps_admisions" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_sub_title" : { "type" : "text" },
        "field_title_carrers" : { "type" : "text" },
        "field_titulo" : { "type" : "text" },
        "field_titulo_proximos_cursos" : { "type" : "text" },
        "language" : { "type" : "string" },
        "link" : { "type" : "boolean" },
        "path" : { "type" : "uri" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "admin_title" : true,
              "admin_description" : true,
              "category" : true,
              "field_titulo" : true,
              "field_cetav_font_character" : true,
              "field_titulo_proximos_cursos" : true,
              "field_title_carrers" : true,
              "field_admision_title" : true,
              "field_sub_title" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "admin_title" : true,
              "admin_description" : true,
              "category" : true,
              "field_titulo" : true,
              "field_cetav_font_character" : true,
              "field_titulo_proximos_cursos" : true,
              "field_title_carrers" : true,
              "field_admision_title" : true,
              "field_sub_title" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "admin_title" : true,
              "admin_description" : true,
              "category" : true,
              "field_titulo" : true,
              "field_cetav_font_character" : true,
              "field_titulo_proximos_cursos" : true,
              "field_title_carrers" : true,
              "field_admision_title" : true,
              "field_sub_title" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "admin_title" : true,
              "admin_description" : true,
              "category" : true,
              "field_titulo" : true,
              "field_cetav_font_character" : true,
              "field_titulo_proximos_cursos" : true,
              "field_title_carrers" : true,
              "field_admision_title" : true,
              "field_sub_title" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['users_index'] = entity_import('search_api_index', '{
    "name" : "Users Index",
    "machine_name" : "users_index",
    "description" : null,
    "server" : "db_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "created" : { "type" : "date" },
        "edit_url" : { "type" : "uri" },
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_language" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_role_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "roles" : [] }
        },
        "search_api_alter_user_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "mail" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "mail" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "mail" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "mail" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function configuracion_cetav_default_search_api_server() {
  $items = array();
  $items['db_server'] = entity_import('search_api_server', '{
    "name" : "DB Server",
    "machine_name" : "db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : {
        "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_default_node_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_title_noticia" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_acerca_de_mi" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_carrera_tecnica" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_carrera_tecnica",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_disponibilidad_egresado" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_disponibilidad_egresado",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_email" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_generacion_egresado" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_generacion_egresado",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_habilidades_egresado" : {
            "table" : "search_api_db_default_node_index_field_habilidades_egresado",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_numero_telefono" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_profesion_egresado" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_programa_carreras" : {
            "table" : "search_api_db_default_node_index_field_programa_carreras",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_sub_title_carreras" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_titulo_carrera" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_profesor" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_horario" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_duracion" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_precio" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cupo" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_telefono" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_lugar" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_title_curso" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_correo" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_testimonios" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_testimonios",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_default_node_index_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:format" : {
            "table" : "search_api_db_default_node_index",
            "column" : "body_format",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "fpp_index" : {
          "bundle" : {
            "table" : "search_api_db_fpp_index",
            "column" : "bundle",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "admin_title" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "admin_description" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "category" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "language" : {
            "table" : "search_api_db_fpp_index",
            "column" : "language",
            "type" : "string",
            "boost" : "1.0"
          },
          "link" : {
            "table" : "search_api_db_fpp_index",
            "column" : "link",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "path" : {
            "table" : "search_api_db_fpp_index",
            "column" : "path",
            "type" : "uri",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_fpp_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_titulo" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cetav_font_character" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_preview_curso_home" : {
            "table" : "search_api_db_fpp_index_field_preview_curso_home",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_titulo_proximos_cursos" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_title_carrers" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_admision_title" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_steps_admisions" : {
            "table" : "search_api_db_fpp_index_field_steps_admisions",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_personal" : {
            "table" : "search_api_db_fpp_index_field_personal",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_sub_title" : {
            "table" : "search_api_db_fpp_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_fpp_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "users_index" : {
          "name" : {
            "table" : "search_api_db_users_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "mail" : {
            "table" : "search_api_db_users_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_users_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "edit_url" : {
            "table" : "search_api_db_users_index",
            "column" : "edit_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_users_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "roles" : {
            "table" : "search_api_db_users_index_roles",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_users_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
