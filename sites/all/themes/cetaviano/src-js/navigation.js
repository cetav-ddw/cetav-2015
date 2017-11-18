(function ($) {
  jQuery(document).ready(function($) {
    var navigation = ( function() {
		var menu = $("#block-system-main-menu");

    function displayNavigation() {
      $("#menu-toggle").click(function () {
        $(this).toggleClass("on");
        menu.toggleClass("hide-content");
      });
    }

    return {
      displayNavigation :  displayNavigation
    };

    })();

    navigation.displayNavigation();
  });
}(jQuery));