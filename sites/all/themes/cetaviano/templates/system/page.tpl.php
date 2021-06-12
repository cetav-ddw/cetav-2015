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
  <!--logo-->
  <div class="section-wide head-nav slab-orange">
    <?php if ($page['navigation']): ?>
    <div class="grid-width">
        <a href="<?php echo base_path();?>" class="header__logo"><img class="icon-cetav" src="<?php echo base_path().path_to_theme() ?>/img/triada-logo.png" alt="Inicio sitio web CETAV"></a>
        <div class="cont-burger menu-collapse">
          <a id ="menu-toggle" class="menu-toggle">
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

<?php if ($page['footer']): ?>
  <?php print render($page['footer']); ?>
<?php endif; // end footer ?>

<?php if ($page['closure']): ?>
<aside class="closure">
  <?php print render($page['closure']); ?>
</aside>
<?php endif; // end closure ?>
