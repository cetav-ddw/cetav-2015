<?php
/**
 * @file
 * Template for a custom panel layout.
 *
 * This template provides a prev-cursos-libres for CETAV panel display layout.
 */
?>

<div class="panel-display panel-cetav-prev-cursos-libres">
  <div class="section-wide">
  <?php if ($content['wide']): ?>
    <div class="grid-width">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
    <div class="grid-width">
      <div class="panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-right-column">
        <?php print $content['right']; ?>
      </div>
    </div>    
  </div>
    <?php if ($content['wide_second']): ?>
    <div class="section-wide slab-gray">
      <div class="grid-width">
        <?php print $content['wide_second']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
