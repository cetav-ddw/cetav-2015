;(function($) {
  jQuery(document).ready(function ($) {
    var renderEmployabilityGraph = (function () {
      var instance;

      function init() {        
        var graphContainer = $('div[data-graphid="employability"]');

        function createWaterSVG() {
          var svgPath1 = $('<path d="M420,20c21.5-0.4,38.8-2.5,51.1-4.5c13.4-2.2,26.5-5.2,27.3-5.4C514,6.5,518,4.7,528.5,2.7c7.1-1.3,17.9-2.8,31.5-2.7c0,0,0,0,0,0v20H420z"></path>');
          var svgPath2 = $('<path d="M420,20c-21.5-0.4-38.8-2.5-51.1-4.5c-13.4-2.2-26.5-5.2-27.3-5.4C326,6.5,322,4.7,311.5,2.7C304.3,1.4,293.6-0.1,280,0c0,0,0,0,0,0v20H420z"></path>');
          var svgPath3 = $('<path d="M140,20c21.5-0.4,38.8-2.5,51.1-4.5c13.4-2.2,26.5-5.2,27.3-5.4C234,6.5,238,4.7,248.5,2.7c7.1-1.3,17.9-2.8,31.5-2.7c0,0,0,0,0,0v20H140z"></path>');
          var svgPath4 = $('<path d="M140,20c-21.5-0.4-38.8-2.5-51.1-4.5c-13.4-2.2-26.5-5.2-27.3-5.4C46,6.5,42,4.7,31.5,2.7C24.3,1.4,13.6-0.1,0,0c0,0,0,0,0,0l0,20H140z"></path>');
          return [svgPath1, svgPath2, svgPath3, svgPath4];
        }

        function createSmoke() {
          var g = $('<g></g>');
          var path1 = $('<path class="smoke" fill="#D9DBDB" d="M382.7,1587.1V1434c-6.8-0.7-13.7-1.1-20.7-1.1c-93.7,0-171.9,66.1-190.7,154.2H382.7z" />');
          var path2 = $('<path class="smoke" fill="#D8D8D8" d="M194.8,1587.1c0.1-2.4,0.1-4.8,0.1-7.2c0-107.7-87.3-195-195-195v202.2H194.8z" />');
          var path3 = $('<path class="smoke" fill="#D6D6D6" d="M0,1587.1h365.9c-24-80.5-98.6-139.2-186.9-139.2c-80.2,0-149.1,48.4-179,117.6V1587.1z" />');
          g.append([path1, path2, path3]);
          return g;
        }

        function rocketAnimation() {
          var rocket = $('.rocket');
          var fire = $('.fire');
          var flames = $('.flame-main');
          var littleFlames = $('.flame');
          var smokes = $('.smoke');

          setTimeout(function () {
            smokes.each(function () {
              $(this).attr('class', 'smokeTakeOff');
            });
          }, 2000);

          setTimeout(function () {
            rocket.attr('class', 'takeOff');
            fire.addClass('fireTakeOff');
          }, 3000);

          setTimeout(function () {
            rocket.attr('class', '');
            fire.removeClass('fire--off');
            fire.removeClass('fireTakeOff');
            fire.addClass('flyFire');
            rocket.attr('class', 'fly');
            flames.each(function () {
              $(this).attr('class', 'flameWobble');
            });
            littleFlames.each(function () {
              $(this).attr('class', 'flamefly');
            });
          }, 5000);  
        }

        function createRocket() {
          var rocketContainer = $('<div></div>');
          var svg = $('<svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox = "0 0 382.7 1587.1" enable-background = "new 0 0 382.7 1587.1" xml: space = "preserve"></svg>');
          var g1 = $('<g></g>');
          var g2 = createSmoke();
          var polygon1 = $('<polygon fill="#2D9B96" points="350.5,1175.4 324.7,1264.1 261.6,1155.2 284.9,1046.4" />');
          var polygon2 = $('<polygon fill="#1A4240" points="23.5,1175.4 49.3,1264.1 112.4,1155.2 89.1,1046.4" />');
          var path1 = $('<path fill="#2D9B96" d="M120.5,1203.6c0,0-144.8-514.2,69.3-650l0.6,650H120.5z" />');
          var path2 = $('<path fill="#BBF9F4" d="M254.7,1203.6c0,0,133.5-514.2-63.9-650l-0.5,650H254.7z" />');
          var circle1 = $('<circle fill="#1A4240" cx="188.7" cy="794.2" r="74.7" />');
          var circle2 = $('<circle fill="#BBF9F4" cx="188.7" cy="794.2" r="52.8" />');
          var circle3 = $('<circle fill="#1A4240" cx="190.3" cy="971.9" r="36.8" />');
          var circle4 = $('<circle fill="#1A4240" cx="201" cy="665.9" r="3" />');
          var circle5 = $('<circle fill="#1A4240" cx="201" cy="708.4" r="3" />');
          var circle6 = $('<circle fill="#1A4240" cx="201" cy="920.1" r="3" />');
          var circle7 = $('<circle fill="#1A4240" cx="198" cy="1023.5" r="3" />');
          var circle8 = $('<circle fill="#1A4240" cx="255.5" cy="1152.2" r="3" />');
          var circle9 = $('<circle fill="#1A4240" cx="223" cy="1152.2" r="3" />');
          var circle10 = $('<circle fill="#1A4240" cx="201" cy="884" r="3" />');
          var circle11 = $('<circle fill="#1A4240" cx="239.5" cy="665.9" r="3" />');
          var path3 = $('<path fill="#1A4240" d="M107.7,654.8h158.8c0,0-14-64.9-75.7-101.2C190.8,553.6,135.9,572.9,107.7,654.8z" />');
          var polygon3 = $('<polygon fill="#15726F" points="120.5,1203.6 109.7,1160.1 266.5,1160.1 254.7,1203.6" />');
          var line1 = $('<line fill="none" stroke="#15726F" stroke-width="3" stroke-miterlimit="10" x1="190.3" y1="822.2" x2="211.7" y2="800.9" />');
          var line2 = $('<line fill="none" stroke="#15726F" stroke-width="3" stroke-miterlimit="10" x1="194.3" y1="832.9" x2="222.3" y2="804.9" />');
          var polygon4 = $('<polygon fill="#1A4240" points="190.4,1036.9 161,1159.9 190.4,1273.6 220,1159.9 " />');
          g1.addClass('rocket');
          rocketContainer.addClass('rocket-container');
          g1.append([polygon1, polygon2, path1, path2, circle1, circle2, circle3, circle4, circle5, circle6, circle7, circle8, circle9, circle10, circle11, path3, polygon3, line1, line2, polygon4]);
          svg.append([g1,g2]);
          rocketContainer.append(svg);
          return rocketContainer;
        }

        function createFire() {
          var fire = $('<div></div>');
          var svg = $('<svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" width="70px" height="100px" viewBox="0 0 51 189.864" enable-background="new 0 0 51 189.864" xml:space="preserve">');
          var path1 = $('<path class="flame-main" fill="#F36E21" d="M40.1,171.5c0,0,29.6-5.1,27.7-35.8S54.2,70.6,36.2,49.1c0,0-24.2,46.3-20.3,64.7S9.7,151.9,40.1,171.5z"/>');
          var path2 = $('<path class="flame-main one" fill="#F6891F" d="M35.8,171.4c0,0-10.2-3-15.3-8.2s-9.3-16.8-9.3-16.8s-0.2-6.6-4.1-18.5c0,0,3.4,5,5.1,9.9c0, 0-5.3-21.1, 1.7-30.4c7-9.3, 0.6-35.7-2.2-37.5c0, 0, 13.1, 5.6, 19.9, 47.5c6.8, 41.9, 16.8, 45.3, 6.1, 54L35.8, 171.4z"/>');
          var path3 = $('<path class="flame-main two" fill="#FFD04A" d="M43.1,66.4c0,0,11.5,24.8,3.6,40c-7.9,15.2-21.1,41.9-0.4,65C46.3,171.4,87.1,138.1,43.1,66.4z"/>');
          var path4 = $('<path class="flame-main three" fill="#FDBA16" d="M60.6,90.2c0,0-25.6,48.1-14.4,81.2c0,0,35.1-17.2,22.5-46.9C56.1,94.8,60.6,102.6,60.6,90.2z"/>');
          var path5 = $('<path class="flame-main four" fill="#F36E21" d="M64.7,80.6c0,0,2.3,43.4-3.8,61.8c-10,16.1-14.8,29-14.8,29S95.9,139.3,64.7,80.6z"/>');
          var path6 = $('<path class="flame-main five" fill="#FDBA16" d="M21.3,89.4c0,0-15.6,67.6,10.5,77.7C58,177.2,28.3,116,21.3,89.4z"/>');
          var path7 = $('<path class="flame" fill="#F36E21" d="M60.2,98.2c0,0,9,10.5,4.6,16.5C58.6,115,66,102.7,60.2,98.2z"/>');
          var path8 = $('<path class="flame one" fill="#F36E21" d="M14.8,112.1c0,0-3.8,13.3,2.7,16.9C23.3,126.8,15.1,117.5,14.8,112.1z"/>');
          var path9 = $('<path class="flame two" fill="#F36E21" d="M14.1,89.9c0,0-4,6.1-1.2,8.9C16.2,98.5,11.5,92.6,14.1,89.9z"/>');
          fire.addClass('fire fire--off');
          svg.append(path1, path2, path3, path4, path5, path6, path7, path8, path9);
          fire.append(svg);
          return fire;
        }

        function createRocketPercent() {
          var percent = $('.graph-percent').text();
          percent = $('<p>'+percent+'</p>');
          percent.addClass('rocket-percent');
          $('.graph-percent').remove();
          return percent;
        }
        
        function createRocketGraph() {
          var rocketGraph = $('<div></div>');
          var rocket = createRocket();
          var fire = createFire();
          var percent = createRocketPercent();
          rocketGraph.addClass('rocket-graph');
          rocketGraph.append([rocket, fire, percent]);
          return rocketGraph;
        }

        function graphAnimation(idx) {
          var water = $('#water' + idx);
          var counter = $('#count' + idx);
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
              $('#water' + idx + ' .water__inner').css('height', basePercent + '%');
            }, 30);
          }
          update();
        }

        function createWaves(idx, hasPercent) {
          var graphPercentValue = $(".graph-percent").eq(idx).text().replace('%', '');
          var percentNum = $('<div class="percent__num" id="count' + idx + '">' + graphPercentValue + '</div>');
          var percentSign = hasPercent ? '%' : '';
          var graphPercent = $('<div class="percent"></div>').append(
            $('<div class="percent__inner"></div>').append(
              [percentNum, percentSign]
            )
          );
          var graphWater = $('<div class="water" id="water' + idx + '"></div>');
          var waterBack = $('<svg id="waterOne" class="water__wave water__wave_back" viewBox="0 0 560 20" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" enable-background="new 0 0 382.7 1587.1" xml:="" space="preserve"></svg>');
          var waterFront = $('<svg class="water__wave water__wave_front" viewBox = "0 0 560 20" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" enable-background="new 0 0 382.7 1587.1" xml:="" space="preserve"></svg>');
          var graphTemplate = $('<div class="graph-svg"></div>');
          waterBack.append(createWaterSVG());
          waterFront.append(createWaterSVG());
          graphWater.append([waterBack, waterFront]);
          graphTemplate.append([graphPercent, graphWater]);
          return graphTemplate;
        }

        graphContainer.each(function (idx) {
          var graphTemplate;

          if (idx === 0) {
            graphTemplate = createWaves(idx, true);
            $('.graph-percent').eq(idx).remove();
          } else if(idx === 1) {
            var rocketGraph = createRocketGraph();
            $(this).html('');
            $(this).append(rocketGraph);
            $(this).html($(this).html());
            rocketAnimation();
          }

          $(this).html(graphTemplate);
        });
        graphContainer.eq(0).html(graphContainer.eq(0).html());
        graphAnimation(0);
      }

      return {
        getInstance: function () {

          if (!instance) {
            instance = init();
          }

          return instance;
        }
      };
    })();
    
    if($('#initGraph').length) {
      renderEmployabilityGraph.getInstance();
    }
  });
}(jQuery));