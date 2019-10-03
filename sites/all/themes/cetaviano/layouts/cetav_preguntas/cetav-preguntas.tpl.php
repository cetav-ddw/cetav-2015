<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a frontpage for CETAV panel display layout.
 */
?>
<div class="panel-display page-cetav-preguntas">

  <?php if ($content['wide']): ?>
    <div class="panel-wide panel-header">
      <div class="banner">
        <div class="banner__cont">
          <h2 class="banner__text">Preguntas Frecuentes</h2>
        </div>
      </div>
    </div>
    <div class="section-wide">
      <div class="grid-width">
        <?php print $content['wide']; ?>
        <div class="bread-crumbs bread-crumbs--preg">
          <ul class="bread-crumbs__cont">
            <li class="bread-crumbs__item bread-crumbs__item--first">Estás aquí:</li>
            <li class="bread-crumbs__item bread-crumbs__item--second">Preguntas Frecuentes</li>
          </ul>
        </div>
        <div class="intro-preg">
          <h2 class="intro-preg__title">¡Estamos aquí para ayudar!</h2>
          <p class="intro-preg__text-intro">Esta sección proporciona ayuda con las preguntas más comunes sobre el CETAV.</p>
          <div class="intro-preg__menu">
            <div class="intro-preg__menu-item">
              <div class="intro-preg__cont-item">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/sobreelCetav-icon.png" class="intro-preg__icon">
                <a title="Link a sobre el cetav" href="#sobreelCETAV" class="intro-preg__link">Sobre el CETAV</a>
              </div>
            </div>
            <div class="intro-preg__menu-item">
              <div class="intro-preg__cont-item">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/financiamiento-icon.png" class="intro-preg__icon">
                <a title="Link a sobre el cetav" href="#financiamiento" class="intro-preg__link intro-preg__link--financ">Financiamiento</a>
              </div>
            </div>
            <div class="intro-preg__menu-item">
              <div class="intro-preg__cont-item">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/carreras-tecnicas-icon.png" class="intro-preg__icon">
                <a title="Link a sobre el cetav" href="#carrerasTecnicas" class="intro-preg__link">Carreras técnicas</a>
              </div>
            </div>
            <div class="intro-preg__menu-item">
              <div class="intro-preg__cont-item">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/admision-icon.png" class="intro-preg__icon">
                <a title="Link a sobre el cetav" href="#admision" class="intro-preg__link">Proceso de admisión</a>
              </div>
            </div>
            <div class="intro-preg__menu-item">
              <div class="intro-preg__cont-item">
                <img alt="" src="<?php echo base_path().path_to_theme() ?>/img/insercion-icon.png" class="intro-preg__icon">
                <a title="Link a sobre el cetav" href="#Insercion" class="intro-preg__link js-preg-scroll">Inserción laboral</a>
              </div>
            </div>
          </div>
        </div>
        <div class="preg">
          <div id="sobreelCETAV" class="preg__cont">
            <h3 class="preg__title">Sobre el CETAV</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?culis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pnibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pelleharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
            </ul>
          </div>
          <div id="financiamiento" class="preg__cont">
            <h3 class="preg__title">Financiamiento</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?culis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pnibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pelleharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
            </ul>
          </div>
          <div id="carrerasTecnicas" class="preg__cont">
            <h3 class="preg__title">Carreras Técnicas</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Animación 3D</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Lorem impsum dolor</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Diseño y Desarrollo Web</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Lorem impsum dolor</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Edición y Postproducción de Imagen y Sonido</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Lorem impsum dolor</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Diseño de Imagen Comercial</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <ul class="preg__list">
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Lorem impsum dolor</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                    <li class="preg__item">
                      <div class="preg__item-cont-preg">
                        <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                        <button class="preg__item-button js-preg__item-button"></button>
                      </div>
                      <div class="preg__item-cont-answer js-preg__item-cont-answer">
                        <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                      </div>
                    </li>
                  </ul>
                </div>
              </li>
            </ul>
          </div>
          <div id="admision" class="preg__cont">
            <h3 class="preg__title">Proceso de Admisión</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?culis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pnibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pelleharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
            </ul>
          </div>
          <div id="Insercion" class="preg__cont">
            <h3 class="preg__title">Inserción Laboral</h3>
            <ul class="preg__list">
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?culis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pnibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pelleharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
              <li class="preg__item">
                <div class="preg__item-cont-preg">
                  <p class="preg__item-preg">Mauris sit amet nibh id ipsum iaculis malesuada vel eu nisl. ¿Donec malesuada finibus lacinia?</p>
                  <button class="preg__item-button js-preg__item-button"></button>
                </div>
                <div class="preg__item-cont-answer js-preg__item-cont-answer">
                  <p class="preg__item-answer">Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.Pellentesque molestie erat quis finibus lacinia. Etiam nec ornare neque, pharetra luctus nibh. Nulla facilisi.</p>
                </div>
              </li>
            </ul>
          </div>
        </div>
        <div class="more-info">
          <h3 class="more-info__title">¿Tenés alguna pregunta que no ha sido respondida aquí?</h3>
          <p class="more-info__text">Podés escribirnos a la dirección de correo electrónico <span class="more-info__link">admisiones@parquelalibertad.org</span> ó llamarnos al 2276-9400 ext. 2031.</p>
        </div>
      </div>
    </div>
  <?php endif ?>
</div>
