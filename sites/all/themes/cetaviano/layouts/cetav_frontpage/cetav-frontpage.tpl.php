<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a frontpage for CETAV panel display layout.
 */
?>
<div class="panel-display panel-cetav-frontpage">
  <?php if ($content['wide']): ?>
    <div class="panel-wide panel-wide-hero">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
  <div class="section-wide slab-gray">
    <div class="grid-width">
      <div class="panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-right-column one-pager">
        <?php print $content['right']; ?>
      </div>
    </div>
  </div>
  <?php if ($content['wide_second']): ?>
    <div class="section-wide ">
      <div class="grid-width panel-wide-home__courses section-intro">
        <?php print $content['wide_second']; ?>
      </div>      
    </div>
  <?php endif ?>
  <div class="section-wide">
    <div class="grid-width">
      <div class="sub-careers__title">
        <?php print $content['left_second']; ?>
      </div>
      <div class="sub-careers__cta">
        <?php print $content['right_second']; ?>
      </div>
    </div>
  </div>
  <?php if ($content['wide_third']): ?>
    <div class="section-wide slab-gray">
      <div class="grid-width">
        <?php print $content['wide_third']; ?>
      </div>
    </div>
  <?php endif ?>
</div>