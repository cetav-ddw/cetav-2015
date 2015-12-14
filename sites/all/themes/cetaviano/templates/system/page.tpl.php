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
  <?php if ($messages): ?>
  <div class="messages-wrapper">
    <div class="messages-content">
      <?php print $messages; ?>
    </div>
  </div>
  <?php endif; ?>
  <div class="header-content">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" class="site-logo" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
      </a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>

        <?php if ($site_name): ?>
          <?php if ($title): ?>
          <div class="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
          </div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="site-slogan">
            <?php print $site_slogan; ?>
          </div>
        <?php endif; ?>

    <?php endif; ?>

    <?php print render($page['header']); ?>

  </div><!-- /header-content -->
  <?php if ($page['navigation']): ?>
    <div class="menu-highlights">
      <div class="menu-highlights-content">
        <div class="pll-logo"></div>
        <a class="link-nav" href="http://parquelalibertad.org">parquelalibertad.org</a>
      </div>
    </div><!-- /menu-highlights -->
    <nav class="nav-main">
      <div class="menu-collapse">
          <div id ="menu-toggle" class="menu-toggle">
              <div class="one"></div>
              <div class="two"></div>
              <div class="three"></div>
           </div>
        </div>
      <?php print render($page['navigation']); ?>
    </nav>
  <?php endif; // end Navigation ?>

  <?php if ($page['secundary_navigation']): ?>
    <nav class="nav-secundary-main">
      <?php print render($page['secundary_navigation']); ?>
    </nav>
  <?php endif; // end secundary_Navigation ?>

</header>



<?php if ($page['above_content']): ?>
  <section class="above-content">
    <?php print render($page['above_content']); ?>
  </section>
<?php endif; // end Above Content ?>

<div class="main-content">
  <?php if ($breadcrumb): ?>
    <!-- <?php print $breadcrumb; ?> -->
  <?php endif; ?>

  <?php if ($page['highlighted']): ?>
    <?php print render($page['highlighted']); ?>
  <?php endif; ?>

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

<footer class="footer" role="contentinfo">
<div class="grid-width">
      <div class="contact-info">
        <h5>¿Cómo llegar?</h5>
        <p>Parque la Libertad, 300 metros este y <br>100 metros norte del Palí de Fátima, Desamparados</p>
        <a href="#" class="btn-direction">Ver con Waze</a>
        <a href="#" class="btn-direction">Ver con Maps</a>
      </div>
      <div class="contact-info">
        <h5>Contacto</h5>
        <p>Teléfono: 2276-9400 ext.2031</p>
        <p>E-mail: cetav@parquelalibertad.org</p>
        <nav>
          <ul class="social-icon icon-list">
            <li><i class="icon-face"><a href="#">facebook</a></i></li>
            <li><i class="icon-vimeo"><a href="#">vimeo</a></i></li>
          </ul>
        </nav>
      </div>

      <div class="contact-info">
        <h5>Somos parte del</h5>
        <div class="logo-parque-footer"></div>
        <div class="logo-ministerio-footer"></div>
      </div>
    </div>
</footer>

<?php if ($page['closure']): ?>
<aside class="closure">
  <?php print render($page['closure']); ?>
</aside>
<?php endif; // end closure ?>
