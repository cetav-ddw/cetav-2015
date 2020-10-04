<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a frontpage for CETAV panel display layout.
 */
?>
<div class="panel-display page-cetav-preguntas">

    <div class="panel-wide panel-header">
      <div class="banner">
        <div class="banner__cont">
          <h2 class="banner__text">Preguntas frecuentes</h2>
        </div>
      </div>
    </div>
    <div class="section-wide">
      <div class="grid-width">
        <div class="bread-crumbs bread-crumbs--preg">
          <ul class="bread-crumbs__cont">
            <li class="bread-crumbs__item bread-crumbs__item--first">Estás aquí:</li>
            <li class="bread-crumbs__item bread-crumbs__item--second">Preguntas frecuentes</li>
          </ul>
        </div>
        <div class="intro-preg">
          <h2 class="intro-preg__title">¡Estamos aquí para ayudar!</h2>
          <p class="intro-preg__text-intro">Esta sección proporciona ayuda con las preguntas más comunes sobre el CETAV.</p>
          <div class="intro-preg__menu">
            <div class="intro-preg__menu-item">
              <a class="intro-preg__cont-item" title="Link a sobre el cetav" href="#sobreelCETAV">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/sobreelCetav-icon.png" class="intro-preg__icon">
                <p class="intro-preg__link">Sobre el CETAV</p>
              </a>
            </div>
            <div class="intro-preg__menu-item">
              <a class="intro-preg__cont-item" title="Link a sobre el cetav" href="#financiamiento">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/financiamiento-icon.png" class="intro-preg__icon">
                <p class="intro-preg__link intro-preg__link--financ">Financiamiento</p>
              </a>
            </div>
            <div class="intro-preg__menu-item">
              <a class="intro-preg__cont-item" title="Link a sobre el cetav" href="#carrerasTecnicas">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/carreras-tecnicas-icon.png" class="intro-preg__icon">
                <p class="intro-preg__link">Carreras técnicas</p>
              </a>
            </div>
            <div class="intro-preg__menu-item">
              <a class="intro-preg__cont-item"  title="Link a sobre el cetav" href="#admision">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/admision-icon.png" class="intro-preg__icon">
                <p class="intro-preg__link">Proceso de admisión</p>
              </a>
            </div>
            <div class="intro-preg__menu-item">
              <a class="intro-preg__cont-item" title="Link a sobre el cetav" href="#Insercion">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/insercion-icon.png" class="intro-preg__icon">
                <p class="intro-preg__link js-preg-scroll">Inserción laboral</p>
              </a>
            </div>
          </div>
        </div>
        <div class="preg">
          <div id="sobreelCETAV" class="preg__cont">
            <h3 class="preg__title">Sobre el CETAV</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cada cuánto tiempo se abre el proceso de admisión?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Cada dos años el CETAV realiza un proceso de reclutación, el próximo dará inicio a partir de setiembre del 2021.</p>
                </div>
              </li>
            </ul>
          </div>
          <div id="financiamiento" class="preg__cont">
            <h3 class="preg__title">Financiamiento</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cual es el costo mensual de las carreras técnicas del CETAV?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">El costo mensual de la carrera técnica es de &#8353;100,000 en caso de obtener la beca Empleate, gestionada en conjunto con el CETAV, el 50% del monto recibido es para pagar colegiatura y el 50% restante para transporte y alimentación.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cuánto pagan los estudiantes que reciben beca de EMPLEATE?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
            </ul>
          </div>
          <div id="carrerasTecnicas" class="preg__cont">
            <h3 class="preg__title">Carreras técnicas</h3>
            <ul class="preg__list">
            <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Animación 3D</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué tanta demanda laboral tiene esta carrera? </p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué conocimientos previos debo de tener para poder aplicar a esta carrera?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Cuáles empresas podrían contratarme al ser egresado del CETAV?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Diseño y desarrollo web</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué tanta demanda laboral tiene esta carrera? </p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué conocimientos previos debo de tener para poder aplicar a esta carrera?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Cuáles empresas podrían contratarme al ser egresado del CETAV?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Postproducción de imagen y sonido</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué tanta demanda laboral tiene esta carrera? </p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué conocimientos previos debo de tener para poder aplicar a esta carrera?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Cuáles empresas podrían contratarme al ser egresado del CETAV?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mercadeo digital, diseño e imagen comercial.</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué tanta demanda laboral tiene esta carrera? </p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Qué conocimientos previos debo de tener para poder aplicar a esta carrera?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">¿Cuáles empresas podrían contratarme al ser egresado del CETAV?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
            </ul>
          </div>
          <div id="admision" class="preg__cont">
            <h3 class="preg__title">Proceso de admisión</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cuál es el proceso para entrar al CETAV?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ol class="preg__item-answer">
                    <li>
                      Comprobá si cumplís con todos los requisitos y llenar el formulario
                      <a title="link a los requisitos" href="https://mailchi.mp/8b8c1550576e/requisitoscetav-1708277" >click aquí</a>
                    </li>
                    <li>
                      Si necesitás la beca de EMPLEATE debés llenar el siguiente formulario para iniciar el proceso:
                      <a title="link al formulario" href="https://pronae.info/empleate-formulario" >click aquí</a>
                      <ul>
                        <li>Al llenar el formulario, en el punto IV. REFERENCIAS : ¿Ha sido referido por una institución o actividad específica? debe elegir SÍ</li>
                        <li>En “Indique el nombre de la institución'', especificar: CETAV Parque La Libertad.</li>
                      </ul>
                    </li>
                    <li>
                      Nosotros nos estaremos comunicando con vos para convocarte a las pruebas de admisión.
                    </li>
                  </ol>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cuales son los requisitos para entrar al CETAV?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__item-answer">
                    <li>Tener entre 17 y 27 años.</li>
                    <li>Bachillerato aprobado.</li>
                    <li>Conocimiento comprobable en Adobe Photoshop y Adobe Ilustrador básico o programas de edición de imagen similares. Si no los tienen, pueden llamar al Centro de Cómputo del Parque La Libertad al 2276-9400 ext 2092, donde estos cursos se imparten de manera regular.</li>
                    <li>En caso de extranjeros, tener su estatus migratorio al día.</li>
                    <li>Interés en aprender inglés.</li>
                    <li>Disponibilidad de tiempo completo.</li>
                    <li>Para ingresar al Técnico en Diseño y desarrollo web, además es requisito aprobar el curso de Introducción al Desarrollo Web, que se imparte en el CETAV.</li>
                  </ul>
                </div>
              </li>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cuál es la edad límite para poder entrar al CETAV?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Entre 17 y 27 años.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Puedo escoger qué materias matricular y en qué orden llevarlas?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">No, es requisito llevar el bloque completo.</p>
                </div>
              </li>
            </ul>
          </div>
          <div id="Insercion" class="preg__cont">
            <h3 class="preg__title">Inserción laboral</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿Cuál es el promedio de inserción laboral de egresados y egresadas del CETAV?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pnibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pelleharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">¿En qué tipo de empresas trabajan los egresados de cada carrera? </p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
            </ul>
          </div>
        </div>
        <div class="more-info">
          <h3 class="more-info__title">¿Tenés alguna pregunta que no ha sido respondida aquí?</h3>
          <p class="more-info__text">Podés escribirnos a la dirección de correo electrónico <span class="more-info__link">admisiones@parquelalibertad.org</span> ó llamarnos al 2276-9400 ext. 2031.</p>
        </div>
      </div>
    </div>

</div>
