(function ($) {

  Drupal.behaviors.galilleo = {
    attach: function (context, settings) {
      $('.navbar-toggle').click(function(){
        $(this).toggleClass('open');
      });
    }
  };
})(jQuery);
