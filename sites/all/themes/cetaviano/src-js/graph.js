(function ($) {
  jQuery(document).ready(function ($) {
    var renderEmployabilityGraph = (function () {
      var svgContainer = '<svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px "style=display: none;"> <symbol id="wave" > < path d = "M420,20c21.5-0.4,38.8-2.5,51.1-4.5c13.4-2.2,26.5-5.2,27.3-5.4C514,6.5,518,4.7,528.5,2.7c7.1-1.3,17.9-2.8,31.5-2.7c0,0,0,0,0,0v20H420z"></path><path d="M420,20c-21.5-0.4-38.8-2.5-51.1-4.5c-13.4-2.2-26.5-5.2-27.3-5.4C326,6.5,322,4.7,311.5,2.7C304.3,1.4,293.6-0.1,280,0c0,0,0,0,0,0v20H420z"></path > < path d = "M140,20c21.5-0.4,38.8-2.5,51.1-4.5c13.4-2.2,26.5-5.2,27.3-5.4C234,6.5,238,4.7,248.5,2.7c7.1-1.3,17.9-2.8,31.5-2.7c0,0,0,0,0,0v20H140z" > < /path><path d="M140,20c-21.5-0.4-38.8-2.5-51.1-4.5c-13.4-2.2-26.5-5.2-27.3-5.4C46,6.5,42,4.7,31.5,2.7C24.3,1.4,13.6-0.1,0,0c0,0,0,0,0,0l0,20H140z"></path ></symbol></svg>';
      var graphPercentValue = $(".graph-percent")[0].innerText.replace('%', '');
      var graphPercent = '<div class="percent"> <div class="percent__inner"> <div class="percent__num" id="count">' + graphPercentValue + '</div><div class="percent__sign">%</div></div></div>';
      var graphWater = '<div class="water" id="water" > <svg class="water__wave water__wave_back" viewBox="0 0 560 20"> <use href="#wave"> </use></svg> <svg class="water__wave water__wave_front" viewBox = "0 0 560 20" > <use href = "#wave"> </use></svg> <div class="water__inner"></div></div>';
      var graphTemplate = '<div id="graphSvg" class="graph-svg">' + svgContainer + graphPercent + graphWater + '</div>';
      var graphContainer = $('div[data-graphid="employability"]');
      graphContainer.html(graphTemplate);
      
      ;(function () {
        var water = document.getElementById('water');
        var counter = document.getElementById('count');
        var page = document.getElementById('page');
        var basePercent = 0;
        var percent;
        var interval;

        (function update() {
          percent = counter.innerText;
          percent = parseInt(percent);

          interval = setInterval(function () {
            if (basePercent === percent) {
              clearInterval(interval);
              return;
            }

            if (basePercent < percent) {
              basePercent++;
            } else {
              basePercent--;
            }

            counter.innerHTML = basePercent;
            water.style.transform = 'translate(0, ' + (100 - basePercent) + '%)';
            water.querySelector('.water__inner').style.height = basePercent + '%';
          }, 16);
        }());
      }());
    }());

  });
}(jQuery));