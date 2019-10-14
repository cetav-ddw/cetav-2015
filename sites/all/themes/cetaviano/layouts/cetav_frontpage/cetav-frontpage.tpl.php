<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a frontpage for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-frontpage">
  <!--Hero banner-->
  <section class="hero-banner">
    <div id="video-reel" class="hero-banner__video">
      <button id="close-reel" class="hero-banner__btn-close">x</button>
      <iframe id="videoReel" class="video-reel" src="https://player.vimeo.com/video/247321835" width="800px" height="450px" frameborder="0" title="Reel de la tera generación del CETAV" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>
    </div>

    <div id="image-reel" class="hero-banner__reel">
      <button id="show-reel" class="hero-banner__btn-open"></button>
    </div>

    <div id="hero-text" class="hero-banner__cont-desc">
      <h1 class="hero-banner__title">Somos CETAV</h1>
      <p class="hero-banner__desc">Brindamos a personas jóvenes, la oportunidad de desarrollar competencias técnicas en áreas relacionadas a la tecnología y las artes visuales. En el CETAV, proponemos un modelo de inclusión social para la innovación.</p>
    </div>
  </section>
  <!--end Hero banner-->

  <!--Introduction-->
  <section class="intro">
    <div class="intro__cont-intro">
      <h2 class="intro__title">Centro de Tecnología y Artes Visuales (CETAV)</h2>
      <p class="intro__text">Como parte de nuestro compromiso por formar personas jóvenes responsables, emprendedoras y participativas; desarrollamos las capacidades de forma integral, abarcando:</p>
      <ul class="intro__list">
        <li class="intro__list-item">La especialización técnica.</li>
        <li class="intro__list-item">La formación en el idioma inglés.</li>
        <li class="intro__list-item">Las habilidades de comunicación empática.</li>
        <li class="intro__list-item">El desarrollo del pensamiento creativo.</li>
        <li class="intro__list-item">La formación en gestión de negocios.</li>
      </ul>
      <p class="intro__text">Buscamos darles las mejores herramientas para desarrollarse exitosamente en el mundo laboral.</p>
      <div class="intro__btn"><a href="http://www.parquelalibertad.org/cetav/institucion" class="intro__link">Conozca más del CETAV</a></div>
    </div>
    <div class="intro__cont-image">
      <img src="<?php echo base_path().path_to_theme() ?>/img/img_intro.jpg" alt='' class="intro__image">
    </div>
  </section>
  <!--end Introduction-->

  <!--Carreras Técnicas-->
  <section class="cont-careers">
    <h2 class="titles">Carreras Técnicas</h2>
    <p class="sub-titles">Te presentamos nuestra oferta académica</p>

    <article class="career career--animation lazy-image">
      <div class="career__info">
        <h3 class="career__title">Animación Digital 3D</h3>
        <a href="http://parquelalibertad.org/cetav/carreras/animacion-digital-3d" class="career__link"> Información sobre la carrera
          <svg class="btn-border">
            <rect x="0" y="0" rx="7" ry="7" fill="none" width="100%" height="100%"/>
          </svg>
        </a>
      </div>
    </article>

    <article class="career career--web lazy-image">
      <div class="career__info">
        <h3 class="career__title">Diseño y Desarrollo Web</h3>
        <a href="http://parquelalibertad.org/cetav/carreras/diseno-desarrollo-web" class="career__link"> Información sobre la carrera
          <svg class="btn-border">
            <rect x="0" y="0" rx="7" ry="7" fill="none" width="100%" height="100%"/>
          </svg>
        </a>
      </div>
    </article>

    <article class="career career--post lazy-image">
      <div class="career__info">
        <h3 class="career__title">Edición y Postproducción de Imagen y Sonido</h3>
        <a href="http://parquelalibertad.org/cetav/carreras/postproduccion-imagen-sonido" class="career__link"> Información sobre la carrera
          <svg class="btn-border">
            <rect x="0" y="0" rx="7" ry="7" fill="none" width="100%" height="100%"/>
          </svg>
        </a>
      </div>
    </article>
  </section>
  <!--end Carreras Técnicas-->

  <?php if ($content['wide_third']): ?>
    <div class="section-wide cont-news">
      <div class="grid-width">
        <h2 class="titles">Noticias</h2>
        <p class="sub-titles">¿Qué está sucediendo en el CETAV?</p>
        <?php print $content['wide_third']; ?>
        <div class="news-btn">
          <a href="/noticias" class="news-btn__link">Leer más noticias</a>
        </div>
      </div>
    </div>
  <?php endif ?>
</div>
