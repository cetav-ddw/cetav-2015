// Manatí Base Theme JS functions
jQuery(function($) {
    /*
    *** Typing Text Header ***
    */
    $("#typed").typed({
        // strings: ["Typed.js is a <strong>jQuery</strong> plugin.", 
        // "It <em>types</em> out sentences.", "And then deletes them.",
        // "Try it out!"],
        stringsElement: $("#typed-strings"),
        typeSpeed: 30,
        backDelay: 500,
        loop: false,
        contentType: "html", // or text
        // defaults to false for infinite loop
        loopCount: false
    });

    $(".reset").click(function(){
        $("#typed").typed("reset");
    });

    $("#show-pay-form").click(function () {
        $(this).toggleClass("hide-button");
        $("#course-form").toggleClass("show-course-form");
        setTimeout(function(){
            $("#show-pay-form").remove();
        }, 1000);
    });

    $("#edit-field-form-nombre-und-0-value").attr("placeholder", "Nombre Completo");
    $("#edit-field-form-email-und-0-email").attr("placeholder", "Correo Electrónico");

});

