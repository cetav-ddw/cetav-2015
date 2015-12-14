// Manatí Base Theme JS functions
(function($) {
  //Este js se incorporara en un patron, temporalmente esta asi hasta terminar de incorporar las funciones resantes.
    $("#show-pay-form").click(function () {
      $(this).toggleClass("hide-button");
      $("#course-form").toggleClass("show-course-form");
      setTimeout(function(){
        $("#show-pay-form").remove();
      }, 1000);
    });

    $("#edit-field-form-nombre-und-0-value").attr("placeholder", "Nombre Completo");
    $("#edit-field-form-email-und-0-email").attr("placeholder", "Correo Electrónico");

})(jQuery);