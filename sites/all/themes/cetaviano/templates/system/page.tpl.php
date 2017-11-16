<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 */
?>
<header class="header" role="banner">
  <div class="section-wide section-no-padding head-nav slab-orange">
    <?php if ($page['navigation']): ?>
      <div class="grid-width grid-full-limit">
        <div class="menu-collapse">
          <a id ="menu-toggle" href="#foot-nav" class="menu-toggle">
              <div class="menu-toggle-one"></div>
              <div class="menu-toggle-two"></div>
              <div class="menu-toggle-three"></div>
          </a>
        </div>

        <?php print render($page['navigation']); ?>

        <a href="http://parquelalibertad.org/" class="back-pll">Inicio Parque La Libertad</a>
      </div>
    <?php endif; // end Navigation ?>
  </div>

  <div class="section-wide section-no-padding brand-wrap">
    <div class="grid-width grid-full-limit">
      <?php if(drupal_is_front_page()):?>
        <a href="http://parquelalibertad.org/cetav" class="triada-logo"><span class="visually-hidden">Centro de Tecnologia y Artes Visuales</span></a>
      <?php else: ?>
        <a href="http://parquelalibertad.org/cetav" class="cetav-logo"><span class="visually-hidden">Centro de Tecnologia y Artes Visuales</span></a>
        <a href="http://parquelalibertad.org/" class="pll-logo"><span class="visually-hidden">Parque La Libertad</span></a>
      <?php endif?>
    </div>
  </div>

  <?php if ($page['header']): ?>
    <div class="header-content">
      <?php print render($page['header']); ?>
    </div><!-- /header-content -->
  <?php endif; ?>

  <?php if ($messages): ?>
  <div class="messages-wrapper">
    <div class="messages-content">
      <?php print $messages; ?>
    </div>
  </div>
  <?php endif; ?>

</header>

<?php if ($page['above_content']): ?>
  <section class="above-content">
    <?php print render($page['above_content']); ?>
  </section>
<?php endif; // end Above Content ?>

<div class="main-content">
    <a id="main-content"></a>
    <div class="main" role="main">
      <?php print render($title_prefix); ?>
      <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>

      <?php print render($page['help']); ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>

    </div>

  <?php if ($page['sidebar_first']): ?>
    <div id="sidebar-first" class="sidebar">
      <?php print render($page['sidebar_first']); ?>
    </div> <!-- /.section, /#sidebar-first -->
  <?php endif; ?>

    <?php if ($page['sidebar_second']): ?>
    <div id="sidebar-second" class="sidebar">
      <?php print render($page['sidebar_second']); ?>
    </div> <!-- /.section, /#sidebar-second -->
  <?php endif; ?>
</div>

<?php if ($page['below_content']): ?>
  <section class="below-content">
    <?php print render($page['below_content']); ?>
  </section>
<?php endif; // end Below Content ?>

<footer class="footer" id="foot-nav" role="contentinfo">
  <div class="footer-content">
    <div class="footer grid-width">
    <a class="action-top" title="Ir a inicio de secci&oacute;n" href="#">Back to top</a>
    <!-- ToDo: Este contenido debe estar en bloques y no alambrado en el tpl -->
      <div class="contact-info">
      <h4 class="foot-h">Conozca m&aacute;s</h4>
        <ul class="foot-menu">
        <li><a href="http://www.parquelalibertad.org/cetav/institucion" title="">Sobre el CETAV</a></li>
        <li><a href="http://www.parquelalibertad.org/cetav/actualizacion-profesional" title="">Actualización Profesional</a></li>
        <li><a href="http://www.parquelalibertad.org/cetav/egresados" title="">Egresados</a></li>
        <li><a href="http://www.parquelalibertad.org/cetav/noticias" title="">Noticias</a></li>
        <li class="no-desktop"><a href="http://www.parquelalibertad.org/cetav/user?current=home" title="">Mi Cuenta</a></li>
        </ul>
      </div>

      <div class="contact-info">
      <h4 class="foot-h">Carreras</h4>
        <ul class="foot-menu">
          <li><a href="http://www.parquelalibertad.org/cetav/carreras/animacion-digital-3d">Animación Digital 3D</a></li>
          <li><a href="http://www.parquelalibertad.org/cetav/carreras/diseno-desarrollo-web">Diseño y Desarrollo Web</a></li>
          <li><a href="http://www.parquelalibertad.org/cetav/carreras/postproduccion-imagen-sonido">Edición y Post Producción Digital de Imagen y Sonido</a></li>
          <li><a href="http://www.parquelalibertad.org/cetav/admision" title="">Proceso de Admisión</a></li>
        </ul>
      </div>

      <div class="contact-info">
        <h4 class="foot-h">¿Cómo llegar?</h4>
        <p>Parque la Libertad, 300 metros este y <br>100 metros norte del Palí de Fátima, Desamparados</p>
        <div class="btn-inverse btn--small" >
          <a href="http://parquelalibertad.org/#arrive" target="_blank">Ve cómo llegar</a>
        </div>
      </div>
      <div class="contact-info">
        <h4 class="foot-h">Contacto</h4>
        <p>Teléfono: 2276-9400 ext.2031</p>
        <p>E-mail: cetav@parquelalibertad.org</p>
        <nav>
          <ul class="social-icon icon-list">
            <li><i class="icon-vimeo"><a class="vimeo" href="https://vimeo.com/cetav" target="_blank">vimeo</a></i></li>
            <li><i class="icon-face"><a class="facebook" href="https://www.facebook.com/cetavcr" target="_blank">facebook</a></i></li>
          </ul>
        </nav>
      </div>
    </div>
  </div>
</footer>

<?php if ($page['closure']): ?>
<aside class="closure">
  <?php print render($page['closure']); ?>
</aside>
<?php endif; // end closure ?>
