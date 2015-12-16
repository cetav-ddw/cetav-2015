<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a submission for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-submission">
  <?php if ($content['wide']): ?>
    <div class="panel-container panel-wide submission-message">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
</div>
