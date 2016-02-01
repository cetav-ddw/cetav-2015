<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a  page for cursos libres for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-cursos-libres">
  <div class="section-wide">
    <div class="grid-width">
      <div class="panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-right-column">
        <?php print $content['right']; ?>
      </div>
    </div>
  </div>
    <?php if ($content['wide']): ?>
    <div class="section-wide slab-blue">
      <div class="grid-width">
        <?php print $content['wide']; ?>
      </div>  
    </div>
  <?php endif ?>
  <div class="section-wide section-intro">
    <div class="grid-width">
      <div class="panel-left-column">
        <?php print $content['left_second']; ?>
      </div>
      <div class="panel-right-column">
        <?php print $content['right_second']; ?>
      </div>
    </div>
  </div>
  <?php if ($content['wide_second']): ?>
    <div class="section-wide panel-wide-courses">
      <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
</div>
