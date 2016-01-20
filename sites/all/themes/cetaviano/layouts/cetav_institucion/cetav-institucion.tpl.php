<?php
/**
 * @file
 * Template for a custom panel layout.
 *
 * This template provides a basic for CETAV panel display layout.
 */
?>

<div class="panel-display panel-cetav-institucion">
  <?php if ($content['wide_main']): ?>
    <div class="panel-container panel-wide panel-header">
      <?php print $content['wide_main']; ?>
    <div>
  <?php endif ?>
  </div>
  <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right']; ?>
      </div>
    </div>
    <?php if ($content['wide']): ?>
    <div class="panel-container panel-wide">
      <div class="grid-width">
        <?php print $content['wide']; ?>
      </div>
    </div>
  <?php endif ?>
  <div class="center-wrapper">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left_second']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right_second']; ?>
      </div>
    </div>
  </div>
    <?php if ($content['wide_second']): ?>
    <div class="panel-container panel-wide">
      <div class="grid-width">
        <?php print $content['wide_second']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
