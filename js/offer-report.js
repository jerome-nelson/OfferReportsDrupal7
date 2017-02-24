Drupal.behaviors.offerReport = {
  attach: function (context) {
    jQuery(document).ready(function () {
      if (!jQuery.cookie('agree_offer_report')) { jQuery.cookie('agree_offer_report', 0, { expires: 365 }); }
    });
    jQuery('#agree_terms', context).click(function (onEvent) {
      onEvent.preventDefault();
      jQuery.cookie('agree_offer_report', 1);
      window.location.href = 'offer-reports';
    });
    jQuery('#exit_terms', context).click(function (onEvent) {
      onEvent.preventDefault();
      jQuery.cookie('agree_offer_report', 0);
      window.location.href = window.location.origin;
    });
  }
};
