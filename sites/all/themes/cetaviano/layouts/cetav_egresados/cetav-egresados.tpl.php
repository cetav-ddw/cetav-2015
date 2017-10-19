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
    <div class="panel-wide panel-header">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>
  <?php if ($content['wide_first']): ?>
    <div class="section-wide">
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
 <?php if ($content['wide_third']): ?>
    <div class="section-wide">
      <div class="grid-width">
        <?php print $content['wide_third']; ?>
      </div>
    </div>
  <?php endif ?>
   <?php if ($content['bottom']): ?>
    <div class="section-wide">
      <div class="grid-width">
        <?php print $content['bottom']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
