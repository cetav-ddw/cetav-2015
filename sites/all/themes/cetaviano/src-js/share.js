(function ($) {
  $(window).on('load', function () {
    var pathname = window.location.pathname;
    var validPath = /^\/noticias/;
    
    if (validPath.test(pathname)) {
      var url = encodeURIComponent(window.location.href);
  
      $('#facebookShare').click(function () {
        $(this).attr('href', 'https://www.facebook.com/sharer/sharer.php?u=' + url);
      });
      $('#tweetShare').click(function () {
        $(this).attr('href', 'https://twitter.com/share?text=' + url);
      });
      $('#linkedInShare').click(function () {
        $(this).attr('href', 'https://www.linkedin.com/cws/share?url='+url);
      });
    }
  });
}(jQuery));
