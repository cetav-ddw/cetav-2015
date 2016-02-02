<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a prev-egresados for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-prev-egresados">
  <div class="section-wide section-intro">
    <div class="grid-width">
      <div class="panel-left-column">
        <?php print $content['left_intro']; ?>
      </div>
      <div class="panel-right-column">
        <?php print $content['right_intro']; ?>
      </div>
    </div>
  </div>
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
</div>
