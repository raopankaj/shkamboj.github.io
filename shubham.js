$(document).ready(function() {
  $("#home-content").css('padding-top', $(window).height() * .2);
  $("#about-content").css('padding-top', $(window).height() * .23);
  $("#portfolio-content").css('padding-top', $(window).height() * .23);
  $("#contact-content").css('padding-top', $(window).height() * .23);
  $("#home").css('min-height', $(window).height() * .8);
  $("#about").css('min-height', $(window).height() * .8);
  $("#portfolio").css('min-height', $(window).height() * .8);
  $("#contact").css('min-height', $(window).height() * .95);

  $("#footer").css('height', $(window).height() * .08);

  $(window).resize(function() {

  })
})

function newWindow(x) {
  window.open(x);
}
