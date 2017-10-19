<?php
/**
 * @file
 * Template for a 3 regions panel layout.
 *
 * This template provides a news node for CETAV panel display layout.
 */
?>
<div class="panel-display">
  <?php if ($content['top']): ?>
    <div class="panel-wide panel-header">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>
  <?php if ($content['wide']): ?>
    <div class="section-wide">
      <div class="grid-width">
        <?php print $content['wide']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['bottom']): ?>
    <div class="section-wide slab-gray">
      <div class="grid-width">
        <?php print $content['bottom']; ?>
      </div>
    </div>
  <?php endif ?>
</div>