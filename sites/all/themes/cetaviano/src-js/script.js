// Cetaviano Theme JS functions
(function ($) {
  jQuery(document).ready(function($) {
    var cetav = ( function() {

      function displayFormCourse() {
        $("#show-pay-form").click(function () {
          $(this).toggleClass("hide-button");
          $("#course-form").toggleClass("show-course-form");
          setTimeout(function(){
            $("#show-pay-form").remove();
          }, 1000);
        });

        $("#edit-field-form-nombre-und-0-value").attr("placeholder", "Nombre Completo");
        $("#edit-field-form-email-und-0-email").attr("placeholder", "Correo Electrónico");
      }

      function showMenu() {
        $("#menu-toggle").click(function() {
          console.log("hola");
          $(".content > .menu, .views-exposed-form").toggleClass("expandir");
        });
      }

      function showSubmenu() {
        $(".nolink").click(function() {
          $(".expanded > ul").toggleClass("show");
        });
      }

      function menuToggle() {
        $(".menu-toggle").click(function() {
          $(".menu-toggle").toggleClass("on");
          $(".header").toggleClass("header-style");
        });
      }

      return {
        cetavMenuToggle : menuToggle,
        cetavDisplayFormCourse : displayFormCourse,
        cetavShowMenu : showMenu,
        cetavShowSubmenu : showSubmenu
      };

    })();

    cetav.cetavMenuToggle();
    cetav.cetavShowSubmenu();
    cetav.cetavShowMenu();
    cetav.cetavDisplayFormCourse();

  });
}(jQuery));
