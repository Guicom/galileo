<?php

/**
 * @file
 * Display Suite 1 column template.
 */
$image = file_create_url($node->field_basic_image_banniere['und'][0]['uri']);

?>
<?php if (isset($node->field_basic_image_banniere['und'][0]['uri'])): ?>
<div class="banner-wrapper">
  <div class="bg-content" style="background-image: url('<?php print $image;?>');">
  </div>
</div>
<?php endif; ?>
<div class="container">
  <?php print render($content['title']); ?>
  <?php print render($content['body']); ?>
</div>


