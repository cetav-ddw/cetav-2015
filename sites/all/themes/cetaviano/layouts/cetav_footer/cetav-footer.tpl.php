<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a egresados for CETAV panel display layout.
 */
?>
<footer class="footer" id="foot-nav" role="contentinfo">
  <div class="footer-content">
    <div class="footer grid-width">
    <a class="action-top" title="Ir a inicio de secci&oacute;n" href="#">volver arriba</a>
      <?php if ($content['wide_first']): ?>
        <div class="contact-info">
            <?php print $content['wide_first']; ?>
        </div>
      <?php endif ?>
      <?php if ($content['wide_second']): ?>
        <div class="contact-info">
            <?php print $content['wide_second']; ?>
        </div>
      <?php endif ?>
    <?php if ($content['wide_third']): ?>
        <div class="contact-info">
            <?php print $content['wide_third']; ?>
        </div>
    <?php endif ?>
    <?php if ($content['wide_fourth']): ?>
        <div class="contact-info">
            <?php print $content['wide_fourth']; ?>
        </div>
    <?php endif ?>
    </div>
  </div>
</footer>