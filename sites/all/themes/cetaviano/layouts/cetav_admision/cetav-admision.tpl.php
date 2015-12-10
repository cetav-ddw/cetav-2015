<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a admision-page for CETAV panel display layout.
 */
?>

<div class="panel-display panel-cetav-admission">
  <div class="center-wrapper call-out call-out-admission-intro">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right']; ?>
      </div>
    </div>
  </div>

  <div class="center-wrapper requirements-admission-wrapper">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left_second']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right_second']; ?>
      </div>
    </div>
  </div>

    <?php if ($content['wide']): ?>
    <div class="panel-container panel-wide">
      <div>
        <?php print $content['wide']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
