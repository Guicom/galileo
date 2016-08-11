<div class="<?php print $classes;?> next-event clearfix">
  <div class="left-side col-md-8 col-xs-12">
    <div class="event-info">
      <div class="event-date col-sm-6 col-xs-12">
        <div class="calendar icon"></div>
        <div class="text-wrapper">
          <p class="date white"><?php print $date_mois; ?></p>
          <p class="heure yellow">à <?php print $date_heure; ?></p>
        </div>
      </div>
      <div class="event-lieu col-sm-6 col-xs-12">
        <div class="pin icon"></div>
        <div class="text-wrapper">
          <p class="adresse white"><?php print $field_event_lieu[0]['value']; ?></p>
          <p class="lieu yellow"><?php print $field_event_adresse[0]['value']; ?></p>
        </div>
      </div>
    </div>
    <?php print render($content['field_event_date_limite']); ?>
    <?php print render($content['body']); ?>
    <a class="tarif-link" href="/tarifs">Voir les tarifs</a>
    <?php print render($content['field_event_inscription']); ?>
  </div>
  <div class="right-side col-md-4 col-xs-12">
    <div class="back-link">
      <a href="/evenements">Retour à la liste de soirées</a>
    </div>
      <?php print render($content['field_event_intervenant']); ?>
  </div>
</div>