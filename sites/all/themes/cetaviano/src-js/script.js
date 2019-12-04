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

      function validateText(e){
        var tecla = (document.all) ? e.keyCode : e.which;
        //Tecla de retroceso para borrar, siempre la permite
        if (tecla===8) {
          return true;
        }
        // Patron de entrada, en este caso solo acepta letras
        var patron =/[A-Za-z]/;
        var tecla_final = String.fromCharCode(tecla);
        return patron.test(tecla_final);
      }

      function requiredForm() {
        $(".entitytype-formulario_envio_de_pago-form input").attr("required","required");
        $("#edit-field-form-email-und-0-email").attr("type", "email");
        $( "#edit-field-form-nombre-und-0-value" ).bind( "keypress", function( event ) {
          return validateText(event);
        });
      }

      function typed() {
        $("#typed").typed({
          stringsElement: $("#typed-strings"),
          typeSpeed: 30,
          backDelay: 500,
          loop: false,
          contentType: "html", // or text
          loopCount: false
        });

        $(".reset").click(function(){
          $("#typed").typed("reset");
        });
      }

      // esto debe estar en un bloque, no mantenible desde JS
      function changePage(){
        $("#cta-carrers").click(function(){
          window.location.href="/cetav/admision";
        });
      }

      return {
        cetavDisplayFormCourse :  displayFormCourse,
        cetavRequiredForm      :  requiredForm,
        cetavTyped             :  typed,
        cetavChangePage        :  changePage
      };

    })();

    cetav.cetavDisplayFormCourse();
    cetav.cetavRequiredForm();
    cetav.cetavTyped();
    cetav.cetavChangePage();

    $('a[href*="#"]:not([href="#"])').click(function() {
      if (location.pathname.replace(/^\//,'') === this.pathname.replace(/^\//,'') && location.hostname === this.hostname) {
        var target = $(this.hash);
        target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
        if (target.length) {
          $('html, body').animate({
            scrollTop: target.offset().top
          }, 1000);
          return false;
        }
      }
    });

    // Back to top
    $('a.top').click(function (e) {
      e.preventDefault();
      $(document.body).animate({scrollTop: 0}, 800);
    });

    // Funcionalidad del video para el hero banner 
    
    $("#show-reel").click(function() {
      $("#video-reel").addClass("hero-banner__reel-show");
    });
    $("#close-reel").click(function() {
      $("#video-reel").removeClass("hero-banner__reel-show");
      $("#videoReel").attr('src', 'https://player.vimeo.com/video/373945663?autoplay=0&loop=0&autopause='+'1');
    });

    // acordeon de preguntas frecuentes
    $( ".js-preg__item-button" ).each(function(index, element) {
      $(element).click(function() {
        $(element).toggleClass( "preg__item-button--active");
        $( ".js-preg__item-cont-answer" ).eq(index).toggleClass( "preg__item-cont-answer--active");
      });
    });

    $( ".js-preg__item-cont-answer" ).each(function(index, element) {
      var height = $(element).height();
      $(element).css("margin-top", "-" + height + "px");
    });
  });

}(jQuery));
