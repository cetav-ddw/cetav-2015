<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a noticias for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-noticias">
  <div class="center-wrapper">
  <div class="grid-width">
    <div class="panel-container panel-left-column container-news">
      <?php print $content['left']; ?>
    </div>
    <div class="panel-container panel-right-column aside">
      <?php print $content['right']; ?>
    </div>
  </div>
  </div>
</div>
