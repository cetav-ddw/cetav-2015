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
        <?php print $content['wide']; ?>
        <p class="panel-header_info">¿Querés ser parte de nuestra siguiente generación? Te contamos los requisitos y pasos para inscribirte.</p>
    </div>
  <?php endif ?>
<div class="section-wide">
    
    <section>
      <ul class="req">
        <h3>Requisitos</h3>
        <p>Cada dos años, el CETAV realiza un proceso de reclutamiento. Si te interesa ingresar, es indispensable cumplir con lo siguiente:</p>
        <li class="req__item">
          <img class="req__img-item" src="<?php echo base_path().path_to_theme() ?>/img/step_1-admision.png" alt="">
          <p class="req__p-item">Tener entre 17 y 25 años.</p>
        </li>
        <li class="req__item">
          <img class="req__img-item" src="<?php echo base_path().path_to_theme() ?>/img/step_2-admision.png" alt="">
          <p class="req__p-item">Contar con Bachillerato en Educación Media aprobado.</p>
        </li>
        <li class="req__item">
          <img class="req__img-item" src="<?php echo base_path().path_to_theme() ?>/img/step_3-admision.png" alt="">
          <p class="req__p-item">En caso de personas extranjeras, tener su estatus migratorio al día.</p>
        </li>
        <li class="req__item">
          <img class="req__img-item" src="<?php echo base_path().path_to_theme() ?>/img/step_4-admision.png" alt="">
          <p class="req__p-item">Si necesitás un subsidio económico del programa EMPLEATE, llená el siguiente fomulario. </p>
          <a class="req__btn" href="https://pronae.info/empleate-formulario/">Completar formulario</a>
        </li>
        <li class="req__item">
          <img class="req__img-item" src="<?php echo base_path().path_to_theme() ?>/img/step_5-admision.png" alt="">
          <p class="req__p-item">Conocimientos básicos en Adobe Photoshop y Adobe Illustrator.</p>
          <p class="req__p-item">Si no los tienes, estos cursos se imparten de manera regular aquí en el Parque La Libertad.</p>
          <p class="req__p-item">Para ingresar al Técnico en Diseño y Desarrollo Web, además es requisito llevar el curso de Introducción al Desarrollo Web que se imparte en el CETAV.</p>
        </li>
        <li class="req__item"> 
          <img class="req__img-item" src="<?php echo base_path().path_to_theme() ?>/img/step_6-admision.png" alt="">
          <p class="req__p-item">Disponibilidad de tiempo completo.</p>
          <ul class="item__list">Nuestro programa comprende:
            <li>- Formación técnica.</li>
            <li>- Aprendizaje del idioma inglés.</li>
            <li>- Cursos para el desarrollo de estrategias para la inserción laboral.</li>
            <li>- Actividades extracurriculares.</li>
          </ul>
          <p class="req__p-item">Por lo cual reafirmamos el compromiso con el que deben contar nuestros estudiantes para cumplir el horario.</p>
        </li>
      </ul>
    </section>

    <section class="admin__steps">
        <ul class="steps">
          <h3>Pasos a seguir</h3>
          <li class="step__item">
            <span class="step__number">1</span>
            <div class="step__info">
              <p>Para recibir información sobre el proceso de admisión, llená el siguiente formulario.</p>
              <div class="intro__btn">
                <a href="" class="step__btn">Llenar formulario</a>
              </div>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">2</span>
            <div class="step__info">
              <p>Formas de pago.</p>
              <p>En caso de requerir un subsidio económico para tus estudios, es necesario que tengás la ficha de información social del IMAS.</p>
              <p>En caso de no requerir un subsidio, te invitamos a informarte sobre las cuotas de pago de la carrera.</p>
              <div class="intro__btn">
                <a href="" class="step__btn">Ir a financiamiento</a>
              </div>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">3</span>
            <div class="step__info">
              <p>Si no tenés conocimientos en Adobe Ilustrador y Adobe Photoshop, una opción es llevar estos cursos en los Centros de Cómputo del Parque La Libertad. </p>
              <p>Si te interesa esta opción, te invitamos a llenar esta encuesta, que nos ayudará a determinar los horarios que más te sirven para llevar estos cursos.</p>
              <div class="intro__btn">
                <a href="" class="step__btn">Llenar encuesta</a>
              </div>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">4</span>
            <div class="step__info">
              <p>Charla inductiva. </p>
              <p>Asistir a una charla donde te explicaremos con detalle el proceso de admisión y el programa de estudios. Traer copia del título de bachillerato y de tu cédula de identidad. Si sos una persona extranjera, además, el comprobante de tu estatus migratorio al día.</p>
              <p><strong>Nota:</strong> Si ya llenaste el formulario, la fecha de la charla se te estará comunicando por correo electrónico.</p>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">5 </span>
            <div class="step__info">
              <p>Pruebas de aptitud.</p>
              <p>Realizamos pruebas de aptitud para cada una de las carreras técnicas, además de comprobar conocimientos básicos en Adobe Illustrator y Adobe Photoshop.</p>
              <p><strong>Nota: </strong>Si ya llenaste el formulario, la fecha de las pruebas se te estará comunicando por correo electrónico.</p>
            </div>
          </li>
          
          <li class="step__item">
            <span class="step__number">6</span>
            <div class="step__info">
              <p>Entrevista individual.</p>
              <p>¡Nos interesa conocerte personalmente! Con este paso, finalizamos el proceso de selección.</p>
              <p><strong>Nota:</strong> Si ya llenaste el formulario, la fecha de la entrevista se te estará comunicando por correo electrónico.</p>
            </div>
          </li>
        </ul>
    </section>
    <div class="admi__note">
      <h3>¿Querés saber más?</h3>
      <p>Contamos con una sección de preguntas frecuentes que podés encontrar haciendo <a href="">clic aquí</a></p>
    </div>
</div>

<div>
  <?php if ($content['wide']): ?>
    <div class="section-wide">
      <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
</div>
