<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a egresados for CETAV panel display layout.
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
  <?php if ($content['wide_first']): ?>
    <div class="section-wide slab-blue">
      <div class="grid-width grid-quotes-width">
        <?php print $content['wide_first']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['wide_second']): ?>
    <div class="section-wide-egresados">
      <div class="grid-width">
        <?php print $content['wide_second']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['left'] && $content['right']): ?>
    <div class="section-no-padding graduetes-container slab-blue">
      <div class="layout-small">
        <?php print $content['left']; ?>
      </div>
      <div class="layout-x-large">
        <?php print $content['right']; ?>
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