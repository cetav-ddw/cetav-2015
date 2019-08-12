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
    <div class="hero-banner__cont-description">
      <h1 class="hero-banner__title">Somos CETAV</h1>
      <p class="hero-banner__description">Brindamos a personas jóvenes, la oportunidad de desarrollar competencias técnicas en áreas relacionadas a la tecnología y las artes visuales. En el CETAV, proponemos un modelo de inclusión social para la innovación.</p>
    </div>
    <div class="hero-banner__cont-reel">
      <div class="hero-banner__reel"></div>
    </div>
  </section>
  <!--end Hero banner-->

  <!--Carreras Técnicas-->
  <section class="cont-carreers">
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
          <a href="http://parquelalibertad.org/cetav/noticias" class="news-btn__link">Leer más noticias</a>
        </div>
      </div>
    </div>
  <?php endif ?>
</div>
