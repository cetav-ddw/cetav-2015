<?php
/**
 * @file
 * Template for a 3 regions panel layout.
 *
 * This template provides a news node for CETAV panel display layout.
 */
?>
<div class="panel-display" id="initNews">
  <?php if ($content['top']): ?>
    <div class="section-wide section-intro">
      <div class="grid-width">
        <?php print $content['top']; ?>
      </div>
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