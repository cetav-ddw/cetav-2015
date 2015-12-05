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
    <div class="panel-container panel-wide">
      <?php print $content['wide']; ?>
    </div>
  <?php endif ?>
  <div class="center-wrapper call-out call-out-home-intro">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right']; ?>
      </div>
    </div>    
  </div>
  <?php if ($content['wide_second']): ?>
    <div class="panel-container panel-wide panel-wide-courses">
      <?php print $content['wide_second']; ?>
    </div>
  <?php endif ?>
  <div class="center-wrapper">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left_second']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right_second']; ?>
      </div>
    </div>    
  </div>
  <div class="center-wrapper">
    <div class="grid-width">
      <div class="panel-container panel-left-column">
        <?php print $content['left_third']; ?>
      </div>
      <div class="panel-container panel-right-column">
        <?php print $content['right_third']; ?>
      </div>
    </div>    
  </div>
  <?php if ($content['wide_fourth']): ?>
    <div class="panel-container panel-wide panel-wide-allies">
      <div class="grid-width center-wrapper">
      <?php print $content['wide_fourth']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
