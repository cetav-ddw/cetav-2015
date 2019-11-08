<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a admision-page for CETAV panel display layout.
 */
?>

<div class="panel-display panel-cetav-admission">
 <?php if ($content['wide']): ?>
    <div class="panel-wide panel-header">
      <div class="banner banner--admi">
        <div class="banner__cont">
          <h2 class="banner__text">Proceso de Admisión</h2>
          <p class="banner__info">¿Querés ser parte de nuestra siguiente generación? Te contamos los requisitos y pasos para inscribirte.</p>
        </div>
      </div>
    </div>
  <?php endif ?>
<div class="section-wide">

    <section class="admi-require__cont">
      <div class="bread-crumbs bread-crumbs--admi">
        <ul class="bread-crumbs__cont">
          <li class="bread-crumbs__item bread-crumbs__item--first">Estás aquí:</li>
          <li class="bread-crumbs__item bread-crumbs__item--second">Proceso de admisión</li>
        </ul>
      </div>
      <div class="admi-require">
        <h3>Requisitos</h3>
        <p>Cada dos años, el CETAV realiza un proceso de reclutamiento. Si te interesa ingresar, es indispensable cumplir con lo siguiente:</p>
        <ul class="admi-require-cont-list">
          <li class="admi-require__item">
            <img class="admi-require__item-img" src="<?php echo base_path().path_to_theme() ?>/img/step_1-admision.png" alt="">
            <p class="admi-require__item-text">Tener entre 17 y 25 años.</p>
          </li>
          <li class="admi-require__item">
            <img class="admi-require__item-img" src="<?php echo base_path().path_to_theme() ?>/img/step_2-admision.png" alt="">
            <p class="admi-require__item-text">Contar con Bachillerato en Educación Media aprobado.</p>
          </li>
          <li class="admi-require__item">
            <img class="admi-require__item-img" src="<?php echo base_path().path_to_theme() ?>/img/step_3-admision.png" alt="">
            <p class="admi-require__item-text">En caso de personas extranjeras, tener su estatus migratorio al día.</p>
          </li>
          <li class="admi-require__item">
            <img class="admi-require__item-img" src="<?php echo base_path().path_to_theme() ?>/img/step_5-admision.png" alt="">
            <p class="admi-require__item-text">Conocimientos básicos en Adobe Photoshop y Adobe Illustrator.</p>
            <p class="admi-require__item-text">Si no los tienes, estos cursos se imparten de manera regular aquí en el Parque La Libertad.</p>
            <p class="admi-require__item-text">Para ingresar al Técnico en Diseño y Desarrollo Web, además es requisito llevar el curso de Introducción al Desarrollo Web que se imparte en el CETAV.</p>
          </li>
          <li class="admi-require__item">
            <img class="admi-require__item-img" src="<?php echo base_path().path_to_theme() ?>/img/step_6-admision.png" alt="">
            <p class="admi-require__item-text">Disponibilidad de tiempo completo.</p>
            <ul class="admi-require__item-list">Nuestro programa comprende:
              <li>Formación técnica.</li>
              <li>Aprendizaje del idioma inglés.</li>
              <li>Cursos para el desarrollo de estrategias para la inserción laboral.</li>
              <li>Actividades extracurriculares.</li>
            </ul>
            <p class="admi-require__item-text">Por lo cual reafirmamos el compromiso con el que deben contar nuestros estudiantes para cumplir el horario.</p>
          </li>
          <li class="admi-require__item">
            <img class="admi-require__item-img" src="<?php echo base_path().path_to_theme() ?>/img/step_4-admision.png" alt="">
            <p class="admi-require__item-text">Si necesitás un subsidio económico del programa EMPLEATE, llená el siguiente fomulario. </p>
            <a class="admi-btn" href="https://pronae.info/empleate-formulario/">Completar formulario</a>
          </li>
        </ul>
      </div>
    </section>

    <section class="admi-step__cont">
        <ul class="admi-step">
          <h3>Pasos a seguir</h3>
          <li class="admi-step__item">
            <span class="admi-step__number">1</span>
            <div class="admi-step__info">
              <p>Para recibir información sobre el proceso de admisión, llená el siguiente formulario.</p>
              <div class="admi-intro__btn">
                <a href=" https://docs.google.com/forms/d/e/1FAIpQLSfDfiOhd0X1_OpXVVzRgUKr34t6WovtQ5Jma5YOWhBD9KlW8w/viewform" title="Formulario para solicitar beca de PONAE" class="admi-btn">Llenar formulario</a>
              </div>
            </div>
          </li>

          <li class="admi-step__item">
            <span class="admi-step__number">2</span>
            <div class="admi-step__info">
              <p>Costo de la carrera técnica.</p>
              <p>El costo mensual es de 100,000 colones.</p>
              <p>En caso de obtener beca de EMPLEATE, el 50% del monto es para pagar colegiatura y el 50% restante para tu transporte y alimentación.</p>
            </div>
          </li>

          <li class="admi-step__item">
            <span class="admi-step__number">3</span>
            <div class="admi-step__info">
              <p>Conocimientos comprobables en Adobe Photoshop y Adobe Ilustardor.</p>
              <p>Si no tenés conocimientos en Adobe Ilustrador y Adobe Photoshop, una opción es llevar estos cursos en los Centros de Cómputo del Parque La Libertad. </p>
              <p>Podes comunicarte con Rebeca Arias, Coordinadora de Programas de Diseño en el Centro de Computo del Parque La Libertad, al correo: rebeca.arias@parquelalibertad.org o al telefono: 2276-9400 ext 2092</p>
            </div>
          </li>

          <li class="admi-step__item">
            <span class="admi-step__number">4</span>
            <div class="admi-step__info">
              <p>Charla inductiva. </p>
              <p>Asistir a una charla donde te explicaremos con detalle el proceso de admisión y el programa de estudios. Traer copia del título de bachillerato y de tu cédula de identidad. Si sos una persona extranjera, además, el comprobante de tu estatus migratorio al día.</p>
              <p><strong>Nota:</strong> Si ya llenaste el formulario, la fecha de la charla se te estará comunicando por correo electrónico.</p>
            </div>
          </li>

          <li class="admi-step__item">
            <span class="admi-step__number">5</span>
            <div class="admi-step__info">
              <p>Pruebas de aptitud.</p>
              <p>Realizamos pruebas de aptitud para cada una de las carreras técnicas, además de comprobar conocimientos básicos en Adobe Illustrator y Adobe Photoshop.</p>
              <p><strong>Nota: </strong>Si ya llenaste el formulario, la fecha de las pruebas se te estará comunicando por correo electrónico.</p>
            </div>
          </li>

          <li class="admi-step__item">
            <span class="admi-step__number">6</span>
            <div class="admi-step__info">
              <p>Entrevista individual.</p>
              <p>¡Nos interesa conocerte personalmente! Con este paso, finalizamos el proceso de selección.</p>
              <p><strong>Nota:</strong> Si ya llenaste el formulario, la fecha de la entrevista se te estará comunicando por correo electrónico.</p>
            </div>
          </li>
        </ul>
    </section>
</div>
<div>
  <?php if ($content['wide']): ?>
    <div class="section-wide">
      <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
</div>
