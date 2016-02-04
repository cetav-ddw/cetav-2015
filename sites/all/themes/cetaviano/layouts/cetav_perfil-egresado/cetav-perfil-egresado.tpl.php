<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a egresados-page for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-egresados">
  <?php if ($content['wide']): ?>
    <div class="panel-container panel-wide info-graduate">
      <div class="grid-width">
        <?php print $content['wide']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['wide_second']): ?>
    <div class="grid-width">
      <div class="panel-container panel-wide availability-info">
        <?php print $content['wide_second']; ?>
      </div>
    </div>
  <?php endif ?>
  <div class="section-wide about-graduate">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right']; ?>
      </div>
    </div>
  </div>
</div>
