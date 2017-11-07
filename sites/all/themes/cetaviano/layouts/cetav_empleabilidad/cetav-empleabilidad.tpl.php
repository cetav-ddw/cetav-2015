<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a carreras for CETAV panel display layout.
 */
?>
<div class="panel-display">
  <?php if ($content['top']): ?>
    <div class="section-wide">
      <div class="grid-width">
        <?php print $content['top']; ?>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['left'] && $content['right']): ?>
    <div class="grid-width">
      <div class="graph-layout">
        <?php print $content['left']; ?>
      </div>
      <div class="graph-layout">
      <?php print $content['right']; ?>
    </div>
    </div>
  <?php endif ?> 

  <?php if ($content['wide_first']): ?>
    <div class="section-wide slab-blue">
      <div class="grid-width">
        <?php print $content['wide_first']; ?>
      </div>
    </div>
  <?php endif ?>

   <?php if ($content['wide_second']): ?>
    <div class="section-wide">
      <div class="grid-width">
        <?php print $content['wide_second']; ?>
      </div>
    </div>
  <?php endif ?>

  <?php if ($content['buttom']): ?>
    <div class="section-wide slab-dark-blue">
      <div class="grid-width">
        <?php print $content['buttom']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
