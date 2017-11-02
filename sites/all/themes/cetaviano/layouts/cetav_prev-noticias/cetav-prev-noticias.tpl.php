<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides noticias for CETAV panel display layout.
 */
?>
<div class="panel-display news-section"> 
  <?php if ($content['top']): ?>
    <div class="grid-width news-layout__heading">
      <div class="panel-wide panel-header">
        <?php print $content['top']; ?>
      </div>
    </div>
  <?php endif ?>
  <div class="section-wide slab-gray">
    <div class="grid-width">
      <?php if ($content['right']): ?>
        <div class="layout-minor news__category-list">
          <?php print $content['right']; ?>
        </div>
      <?php endif ?>
      <?php if ($content['left']): ?>
        <div class="layout-large">
          <?php print $content['left']; ?>
        </div>
      <?php endif ?>
    </div>
  </div>    
  <?php if ($content['wide']): ?>
    <div class="grid-width">
      <div class="section-wide">
        <?php print $content['wide']; ?>
      </div>
    </div>
  <?php endif ?>
</div>
