// Cetaviano Theme JS functions
(function ($) {
  jQuery(document).ready(function($) {

    var cetav = ( function() {
      function typedText() {
        // Typing Text Header
        $("#typed").typed({
          stringsElement: $("#typed-strings"),
          typeSpeed: 50,
          backDelay: 500,
          loop: false,
          contentType: "html", // or text
          // defaults to false for infinite loop
          loopCount: false
        });
      } // end typedWords

      return {
        appTypedText : typedText
      };
    })();

    cetav.appTypedText();
  });
}(jQuery));