/**
 * @file
 * JavaScript functions for the Client-Side Adaptive Image module.
 */

(function ($, Drupal) {
  Drupal.behaviors.csAdaptiveImage = {
      /**
       * Retrieves an adapted image based element's data attributes
       * and the current client width.
       */
      "getAdaptedImage": function(element, excluded_breakpoint) {
        let selected_breakpoint = 'max';
        let breakpoints = $(element).attr('data-adaptive-image-breakpoints');
        if (breakpoints) {
          // Find applicable target resolution.
          $.each(breakpoints.split(' '), function(key, breakpoint) {
            if (document.documentElement.clientWidth <= Number(breakpoint) && (selected_breakpoint == 'max' || Number(breakpoint) < Number(selected_breakpoint))) {
              selected_breakpoint = breakpoint;
            }
            // check for retina availability
            if (
              typeof(window.devicePixelRatio) != 'undefined' && window.devicePixelRatio > 1 && $(element).attr('data-adaptive-image-' + selected_breakpoint + '-retina-img')) {
              selected_breakpoint = selected_breakpoint + '-retina';
            }
          });
        }
        if (selected_breakpoint != excluded_breakpoint) {
          return $(element).attr('data-adaptive-image-' + selected_breakpoint + '-img');
        }
        else {
          return false;
        }
      },

      "attach": function(context, settings) {
      // Insert adapted images.
      $('noscript.adaptive-image', context).once('adaptive-image', function() {
        let img = Drupal.behaviors.csAdaptiveImage.getAdaptedImage(this);
        $(this).after(img);
        Drupal.attachBehaviors(img);
      });

      $('body').once('adaptive-image-event-listener', function() {
        // Replace adapted images on window resize.
        $(window).resize(function() {
          $('noscript.adaptive-image-processed').each(function() {
            // Replace image if it does not match the same breakpoint.
            let excluded_breakpoint = $(this).next('img.adaptive-image').attr('data-adaptive-image-breakpoint');
            let img = Drupal.behaviors.csAdaptiveImage.getAdaptedImage(this, excluded_breakpoint);
            if (img) {
              $(this).next('img.adaptive-image').replaceWith(img);
              // Drupal.attachBehaviors(img);
            }
          });
        });
      });
    }
  };
})(jQuery, Drupal);
