<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a generaciones for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-generaciones">
  <div class="center-wrapper">
  <div class="grid-width">
    <div class="panel-container panel-left-column container-news-prev">
      <?php print $content['left']; ?>
    </div>
    <div class="panel-container panel-right-column aside">
      <?php print $content['right']; ?>
    </div>
  </div>
  </div>
  <?php if ($content['wide']): ?>
    <div class="panel-container panel-wide">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
</div>
