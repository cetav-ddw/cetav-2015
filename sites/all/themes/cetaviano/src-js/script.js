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
          $(".content > .menu, .views-exposed-form").toggleClass("expandir");
          $(".main-content").toggleClass("hide-content");
        });

      $("#edit-search-api-multi-fulltext").attr("placeholder", "Buscar");
      }

      function showSubmenu() {
        $(".nolink").click(function() {
          $(".content .expandir li.expanded").toggleClass("cero");
          $(".expanded > ul").toggleClass("show");
        });
      }

      function menuToggle() {
        $(".menu-toggle").click(function() {
          $(".menu-toggle").toggleClass("on");
          $(".header").toggleClass("header-style");
        });
      }

      function showSearch() {
        $("#edit-submit-global-search").click(function() {
          $(".views-widget-filter-search_api_multi_fulltext").toggleClass("display");
        });
      }

      function requiredForm() {
        $(".entitytype-formulario_envio_de_pago-form input").attr("required","required");
        $("#edit-field-form-email-und-0-email").attr("type", "email");
        $( "#edit-field-form-nombre-und-0-value" ).bind( "keypress", function( event ) {
          return validateText(event);
        });
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

      function valOrFunction(val, ctx, args) {
        if (typeof val === "function") {
            return val.apply(ctx, args);
        } else {
            return val;
        }
      }

      function InvalidInputHelper(input, options) {
        input.setCustomValidity(valOrFunction(options.defaultText, window, [input]));

        function changeOrInput() {
            if (input.value === "") {
                input.setCustomValidity(valOrFunction(options.emptyText, window, [input]));
            } else {
                input.setCustomValidity("");
            }
      }

      function invalid() {
            if (input.value === "") {
                input.setCustomValidity(valOrFunction(options.emptyText, window, [input]));
            } else {
               console.log("INVALID!"); input.setCustomValidity(valOrFunction(options.invalidText, window, [input]));
            }
      }

        input.addEventListener("change", changeOrInput);
        input.addEventListener("input", changeOrInput);
        input.addEventListener("invalid", invalid);
    }

      new InvalidInputHelper(document.getElementById("edit-field-form-nombre-und-0-value"), {
          defaultText: "Por favor ingrese su nombre",
          emptyText: "Por favor ingrese su nombre",
      });

      new InvalidInputHelper(document.getElementById("edit-field-form-email-und-0-email"), {
          defaultText: "Por favor ingrese una dirección de email",
          emptyText: "Por favor ingrese una dirección de email",
            invalidText: function (input) {
                return "Este email '" + input.value + "' es invalido";
            }
      });

      new InvalidInputHelper(document.getElementById("edit-field-subir-comprobante-und-0-upload"), {
          defaultText: "Por favor seleccione un archivo",
          emptyText: "Por favor seleccione un archivo",
      });

      return {
        cetavMenuToggle             :  menuToggle,
        cetavDisplayFormCourse      :  displayFormCourse,
        cetavShowMenu               :  showMenu,
        cetavShowSubmenu            :  showSubmenu,
        cetavshowSearch             :  showSearch,
        cetavRequiredForm           :  requiredForm,
        cetavTyped                  :  typed,
        cetavInvalidInputHelper     :  InvalidInputHelper
      };

    })();

    cetav.cetavMenuToggle();
    cetav.cetavShowSubmenu();
    cetav.cetavShowMenu();
    cetav.cetavshowSearch();
    cetav.cetavDisplayFormCourse();
    cetav.cetavRequiredForm();
    cetav.cetavTyped();
    cetav.cetavInvalidInputHelper();

  });

}(jQuery));
