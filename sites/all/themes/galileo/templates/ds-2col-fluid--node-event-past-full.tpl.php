<div class="<?php print $classes;?> past-event clearfix">
  <div class="left-side col-md-8 col-xs-12">
    <div class="event-info col-xs-12">
      <p class="date white">Cette soirée à eu lieu en <?php print $field_event_date[0]['value']; ?></p>
    </div>
    <?php print render($content['body']); ?>
  </div>
  <div class="right-side col-md-4 col-xs-12">
    <div class="back-link">
      <a href="evenemens">Retour à la liste de soirées</a>
    </div>
    <?php print render($content['field_event_intervenant']); ?>
  </div>
  <hr>
  <div class="bottom-side col-xs-12">
    <?php print render($content['field_event_photo']); ?>
  </div>
  <hr>
</div>