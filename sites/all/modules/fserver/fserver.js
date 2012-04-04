// $Id$

(function ($) {

/**
 * JS behaviors for fserver.
 */
  Drupal.behaviors.fserver = {
    attach: function (context) {
      $('#edit-field-fserver-method-und:not(.processed)').each(function() {
        $(this).addClass('processed');
        $(this).change(function() {
          switch ($(this).val()) {
            case '0':
              $('#edit-field-fserver-repository').hide();
              break;
            default:
              $('#edit-field-fserver-repository').show();
              break;
          }
        });
        $(this).change();
      });
    }
  }

})(jQuery);
