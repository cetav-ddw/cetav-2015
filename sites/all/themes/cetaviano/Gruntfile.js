'use strict';
// Configuring Grunt tasks:
// http://gruntjs.com/configuring-tasks
module.exports = function (grunt) {
    // load all grunt tasks matching the `grunt-*` pattern
    // https://github.com/sindresorhus/load-grunt-tasks
    require('load-grunt-tasks')(grunt);

    grunt.initConfig({
        pkg: grunt.file.readJSON('package.json'),
        // Watch for changes and trigger compass, jshint & uglify
        watch: {
          sass: {
            files: ['sass/{,**/}*.scss'],
            tasks: ['sass:dev', 'postcss']
          },
          js: {
            files: '<%= jshint.all %>',
            tasks: ['newer:jshint', 'uglify:dev']
          },
          images: {
            files: ['src-img/**/*.{png,jpg,gif,svg}'],
            tasks: ['newer:imagemin'],
            options: {
            spawn: false,
            }
          }
        },

        // Sass
        sass: {
          dev: {
            options: {
              sourceMap: true,
              includePaths: require('node-neat').includePaths,
              outputStyle: 'nested',
            },
            files: {
              'css/main.css': 'sass/main.scss',
            }
          },
          prod: {
            options: {
              outputStyle: 'compressed',
            },
            files: {
              'css/main.css': 'sass/main.scss',
            },
          },
        },

        // PostCSS Autoprefixer
        postcss: {
          options: {
            map: true,
            processors: [
              require('autoprefixer')({browsers: ['last 2 version']})
            ]
          },
          dist: {
            src: 'css/main.css'
          }
        },

        // Javascript linting with jshint
        jshint: {
          options: {
            jshintrc: '.jshintrc',
            reporter: require('jshint-stylish')
          },
          all: [
            'src-js/*.js'
          ]
        },

        imagemin: {
          options: {
            optimizationLevel: 3,
            cache: false
          },
          dist: {
            files: [{
              // cwd is 'current working directory'
              expand: true,                  // Enable dynamic expansion
              cwd: 'src-img/',               // Src matches are relative to this path
              src: ['**/*.{png,jpg,gif,svg}'],   // Actual patterns to match
              dest: 'img/'                  // Destination path prefix
            }]
          }
        },

        // Concat & minify
        uglify: {
          dev: {
            options: {
              mangle: false,
              compress: false,
              preserveComments: 'all',
              beautify: true
            },
            files: {
              'js/script.min.js': ['src-js/navigation.js', 'src-js/script.js', 'src-js/share.js']
            }
          },
          prod: {
            options: {
              mangle: true,
              compress: {}
            },
            files: {
              'js/script.min.js': ['src-js/navigation.js', 'src-js/script.js', 'src-js/share.js']
            }
          }
        }
    });

    // Load the plugin(s), but I'm using load-grunt-tasks
    // https://github.com/sindresorhus/load-grunt-tasks
    // grunt.loadNpmTasks('grunt-concurrent');


    // Where we tell Grunt what to do when we type "grunt" into the terminal.
    // The "default" task is what I leave running all the time. Since it is the default,
    // you can start it by simply running
    // $ grunt
    // or, to run production's tasks
    // $ grunt build

    grunt.registerTask('prod', [
        'imagemin',
        'jshint',
        'uglify:prod',
        'sass:prod',
        'postcss'
    ]);

    grunt.registerTask('default', [
        'newer:jshint',
        'uglify:dev',
        'sass:dev',
        'postcss',
        'watch'
    ]);
};
