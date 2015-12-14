<div class="background-account">
  <div id="auth_box" class="register container-account">
    <div id="top_part">
      <h1 id="the_logo">
        <a href="<?php print url('<front>'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
        </a>
      </h1>
    </div>

    <div class="middle-part">
      <h4 class="container-account-title"><?php print $title; ?></h4>

      <?php print $messages; ?>

      <?php print render($page['content']); ?>
        <div class="bottom-part">
        <div class="login-link">
          <?php print l(t('Login'), 'user/login'); ?>
        </div>

        <div class="password-link password-float">
          <?php print l(t('Forgot your password?'), 'user/password'); ?>
        </div>
      </div>
    </div>
  </div>
</div>
