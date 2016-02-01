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
    </div>
  <?php endif ?>
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

  <div class="section-wide slab-blue">
    <div class="grid-width">
      <div class="panel-left-column">
        <?php print $content['left_second']; ?>
      </div>
      <div class="panel-right-column">
        <?php print $content['right_second']; ?>
      </div>
    </div>
  </div>

    <?php if ($content['wide']): ?>
    <div class="section-wide">
      <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
</div>
