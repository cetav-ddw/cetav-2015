<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a carreras for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-carreras">
  <?php if ($content['wide']): ?>
    <div class="panel-wide panel-header">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
  <div class="section-wide section-intro">
    <div class="grid-width grid-cont">
      <div class="panel-left-column">
        <?php print $content['left']; ?>
      </div>
    </div>
  </div>
  <?php if ($content['wide_third']): ?>
    <div class="section-wide  slab-blue">
      <div class="grid-width grid-cont">
        <?php print $content['wide_third']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['wide_second']): ?>
    <div class="section-wide study-carrer">
      <div class="grid-width grid-cont">
        <?php print $content['wide_second']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['wide_four']): ?>
    <div class="section-wide cta-carrers">
      <div class="grid-width">
        <?php print $content['wide_four']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
