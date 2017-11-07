(function ($) {
  jQuery(document).ready(function ($) {
    var renderEmployabilityGraph = (function () {
      var graphContainer = $('div[data-graphid="employability"]');
      
      function createSVG() {
        var svg = $('<svg></svg>');
        var svgSymbol = $('<symbol></symbol>');
        var svgPath1 = $('<path d="M420,20c21.5-0.4,38.8-2.5,51.1-4.5c13.4-2.2,26.5-5.2,27.3-5.4C514,6.5,518,4.7,528.5,2.7c7.1-1.3,17.9-2.8,31.5-2.7c0,0,0,0,0,0v20H420z"></path>');
        var svgPath2 = $('<path d="M420,20c-21.5-0.4-38.8-2.5-51.1-4.5c-13.4-2.2-26.5-5.2-27.3-5.4C326,6.5,322,4.7,311.5,2.7C304.3,1.4,293.6-0.1,280,0c0,0,0,0,0,0v20H420z"></path>');
        var svgPath3 = $('<path d="M140,20c21.5-0.4,38.8-2.5,51.1-4.5c13.4-2.2,26.5-5.2,27.3-5.4C234,6.5,238,4.7,248.5,2.7c7.1-1.3,17.9-2.8,31.5-2.7c0,0,0,0,0,0v20H140z"></path>');
        var svgPath4 = $('<path d="M140,20c-21.5-0.4-38.8-2.5-51.1-4.5c-13.4-2.2-26.5-5.2-27.3-5.4C46,6.5,42,4.7,31.5,2.7C24.3,1.4,13.6-0.1,0,0c0,0,0,0,0,0l0,20H140z"></path>');
        svg.attr({
          version: '1.1',
          xmlns: 'http://www.w3.org/2000/svg',
          'xmlns:xlink': 'http://www.w3.org/1999/xlink',
          x: '0px',
          y: '0px',
        });
        svg.css('display', 'none');
        svgSymbol.prop('id', 'wave');
        svgSymbol.append([svgPath1, svgPath2, svgPath3, svgPath4]);      
        svg.append(svgSymbol);
        return svg;
      }
      $(document.body).prepend('<div id="svgContainer"></div>');
      $('#svgContainer').append(createSVG());
      $("#svgContainer").html($("#svgContainer").html());

      function graphAnimation(idx) {
        var water = $('#water'+idx);
        var counter = $('#count'+idx);
        var basePercent = 0;
        var percent;
        var interval;

        function update() {
          percent = counter.text();
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

            counter.html(basePercent);
            water.css('transform', 'translate(0, ' + (100 - basePercent) + '%)');
            $('#water'+idx+' .water__inner').css('height', basePercent + '%');
          }, 30);
        }
        update();
      }

      function createWaves(idx, hasPercent) {
        var graphPercentValue = $(".graph-percent")[idx].innerText.replace('%', '');
        var percentNum = $('<div class="percent__num" id="count' + idx + '">' + graphPercentValue + '</div>');
        var percentSign = hasPercent ? '%':'';
        var graphPercent = $('<div class="percent"></div>').append(
          $('<div class="percent__inner"></div>').append(
            [percentNum, percentSign]
          )
        );
        var graphWater = $('<div class="water" id="water' + idx + '"></div>');
        var waterBack = $('<svg class="water__wave water__wave_back" viewBox="0 0 560 20"> <use href="#wave"> </use></svg>');
        var waterFront = '<svg class="water__wave water__wave_front" viewBox = "0 0 560 20"> <use href = "#wave"> </use></svg>';
        graphWater.append([waterBack, waterFront]);
        var graphTemplate = $('<div class="graph-svg"></div>');
        graphTemplate.append([graphPercent, graphWater]);
        return graphTemplate;
      }

      graphContainer.each(function(idx) {
        var graphTemplate;
        if(idx === 0) {
          console.log('Im'+idx);
          graphTemplate = createWaves(idx, true);
        } else {
          graphTemplate = createWaves(idx);
        }

        $(".graph-percent")[idx].innerText = '';
        $(this).html(graphTemplate);
        graphAnimation(idx);
      });
    }());
  });
}(jQuery));