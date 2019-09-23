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
        <div class="hero__admi">
          <h2>Proceso de Admisión</h2>
          <h3>Generación 2020 - 2021</h3>
          <p>¿Querés ser parte de nuestra siguiente generación? Te presentamos los requisitos y pasos que debés seguir para inscribirte.</p>
        </div>
    </div>
  <?php endif ?>
<div class="section-wide">
      
    <section>
      <ul class="req">
        <li class="req__item">
          <img class="item__img" src="<?php echo base_path().path_to_theme() ?>/img/step_1-admision" alt="">
          <p>Tener entre 17 y 25 años.</p>
        </li>
        <li class="req__item">
          <img class="item__img" src="<?php echo base_path().path_to_theme() ?>/img/step_2-admision" alt="">
          <p>Contar con Bachillerato en Educación Media aprobado.</p>
        </li>
        <li class="req__item">
          <img class="item__img" src="<?php echo base_path().path_to_theme() ?>/img/step_3-admision" alt="">
          <p>En caso de personas extranjeras, tener su estatus migratorio al día.</p>
        </li>
        <li class="req__item">
          <img class="item__img" src="<?php echo base_path().path_to_theme() ?>/img/step_4-admision" alt="">
          <p>Si necesitás un subsidio económico para tus estudios, solicitá la ficha de información social en el IMAS. </p>
          <p>Si requerís más información, podés llamar al 2202-4000.</p>
        </li>
        <li class="req__item">
          <img class="item__img" src="<?php echo base_path().path_to_theme() ?>/img/step_5-admision" alt="">
          <p>Conocimientos básicos en Adobe Photoshop y Adobe Illustrator.</p>
          <p>Si no los tienes, estos cursos se imparten de manera regular aquí en el Parque La Libertad.</p>
          <p>Para ingresar al Técnico en Diseño y Desarrollo Web, además es requisito llevar el curso de Introducción al Desarrollo Web que se imparte en el CETAV.</p>
        </li>
        <li class="req__item"> 
          <img class="item__img" src="<?php echo base_path().path_to_theme() ?>/img/step_6-admision" alt="">
          <p>Disponibilidad de tiempo completo.</p>
          <ul class="item__list">Nuestro programa comprende:
            <li>- Formación técnica.</li>
            <li>- Aprendizaje del idioma inglés.</li>
            <li>- Cursos para el desarrollo de estrategias para la inserción laboral.</li>
            <li>- Actividades extracurriculares.</li>
          </ul>
          <p>Por lo cual reafirmamos el compromiso con el que deben contar nuestros estudiantes para cumplir el horario.</p>
        </li>
      </ul>
    </section>

    <section class="admin__steps">
        <ul class="steps">
          <h3>Pasos a seguir</h3>
          <li class="step__item">
            <span class="step__number">1</span>
            <div class="step__info">
              <p>Inscribite en la base de datos del CETAV.</p>
              <p> <strong>Fecha límite</strong> para completar este formulario: <strong>02 de enero de 2020.</strong></p>
              <div class="intro__btn">
                <a href="" class="step__btn">Llenar formulario</a>
              </div>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">2</span>
            <div class="step__info">
              <p>Tener en cuenta tus <strong>opciones de financiamiento.</strong></p>
              <p>En caso de requerir un subsidio económico para tus estudios, es necesario que tengás la ficha de información social del IMAS.</p>
              <p>En caso de no requerir un subsidio, te invitamos a informarte sobre las cuotas de pago de la carrera.</p>
              <div class="intro__btn">
                <a href="" class="step__btn">Leer más sobre financiamiento</a>
              </div>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">3</span>
            <div class="step__info">
              <p><strong>Si no tenés conocimientos en Adobe Ilustrador y Adobe Photoshop,</strong> una opción es <strong>llevar estos cursos en los Centros de Cómputo del Parque La Libertad. </strong></p>
              <p>Si te interesa esta opción, te invitamos a llenar esta encuesta, que nos ayudará a determinar los horarios que más te sirven para llevar estos cursos.</p>
              <div class="intro__btn">
                <a href="" class="step__btn">Llenar encuesta</a>
              </div>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">4</span>
            <div class="step__info">
              <p><strong>Asistir</strong> a la <strong>charla inductiva. </strong></p>
              <p>Además, ese mismo día debés entregar la copia del título de bachillerato y la copia de tu cédula de identidad. Si sos una persona extranjera, entregá tu estatus migratorio legal al día.</p>
              <p><strong>Nota:</strong> Si ya te inscribiste en nuestra base de datos, la fecha de la charla se te estará comunicando por correo electrónico.</p>
            </div>
          </li>

          <li class="step__item">
            <span class="step__number">5</span>
            <div class="step__info">
              <p>Con el objetivo de medir aptitudes de nuestros postulantes en distintas áreas, realizamos pruebas utilizando los programas de <strong>Adobe Photoshop y Adobe Illustrator. </strong></p>
              <p>Además, las personas que deseen postular para el <strong>técnico en Diseño y Desarrollo Web</strong> deben realizar una <strong>prueba adicional relacionada a HTML y CSS. </strong></p>
              <p><strong>Nota: </strong>Si ya te inscribiste en nuestra base de datos, la fecha de la entrevista se te estará comunicando por correo electrónico.</p>
            </div>
          </li>
          
          <li class="step__item">
            <span class="step__number">6</span>
            <div class="step__info">
              <p><strong>Presentarte</strong> a la <strong>entrevista.</strong></p>
              <p>¡Nos interesa conocerte personalmente! En el Cetav nos gusta establecer un vínculo entre los estudiantes y los administrativos que hacen esto posible.</p>
              <p><strong>Nota:</strong> Si ya te inscribiste en nuestra base de datos, la fecha de la entrevista se te estará comunicando por correo electrónico.</p>
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
