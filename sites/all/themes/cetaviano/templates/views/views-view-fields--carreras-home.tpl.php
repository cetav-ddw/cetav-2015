<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($fields as $id => $field): ?>

  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php if ($id === 'title'): ?>
      <?php $class = ''; ?>
      <?php $class1 = ''; ?>
      <?php if (strpos($field->raw, 'Animación') !== FALSE): ?>
        <?php $class = 'icon-animacion'; ?>
        <?php $class1 = 'container-gif-animacion'; ?>
      <?php elseif (strpos($field->raw, 'Postproducción') !== FALSE): ?>
        <?php $class = 'container-gif-post'; ?>
                <?php $class = 'icon-post'; ?>
      <?php elseif (strpos($field->raw, 'web') !== FALSE): ?>
        <?php $class = 'icon-web'; ?>
        <?php $class1 = 'container-gif-web'; ?>
      <?php endif; ?>
      <?php if (!empty($class)): ?>

      <div class="container-card">
        <div class="container-gif <?php print $class1;?>">
          <div class="container-title-course">
            <div class="<?php print $class;?>">
              <?php endif; ?>
              <?php endif; ?>
              <?php print $field->label_html; ?>
              <?php print $field->content; ?>
              <?php if (!empty($class)): ?>
              <?php print $field->wrapper_suffix; ?>
            </div>
          </div> <!-- container-title-course -->
        </div> <!-- container-gif -->
      </div> <!-- container-card -->
    <?php endif; ?>
<?php endforeach; ?>
