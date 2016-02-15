<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a egresados-page for CETAV panel display layout.
 */
?>
<div class="section-wide panel-cetav-egresados">
  <?php if ($content['wide']): ?>
    <div class="grid-width info-graduate">
        <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
  <?php if ($content['wide_second']): ?>
    <div class="grid-width availability-info">
        <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
  <div class="grid-width about-graduate">
      <div class="panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-right-column">
        <?php print $content['right']; ?>
      </div>
  </div>
</div>
