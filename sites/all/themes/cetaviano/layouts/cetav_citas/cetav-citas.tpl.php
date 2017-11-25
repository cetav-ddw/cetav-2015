<?php
/**
 * @file
 * Template for a 2 regions panel layout.
 *
 * This template provides a news node for CETAV citas
 */
?>

<div class="panel-cetav-citas">
  <?php if ($content['top']): ?>
    <div class="panel-cetav-citas-top">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>
  <?php if ($content['bottom']): ?>
    <div class="panel-cetav-citas-bottom">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>
</div>