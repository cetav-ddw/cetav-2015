<div class="background-account">
  <div id="auth_box" class="password container-account">
    <div id="top_part">
      <h1 id="the_logo">
        <a href="<?php print url('<front>'); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
        </a>
      </h1>
    </div>

    <div class="middle_part">
      <h5 class="container-account-title"><?php print $title; ?></h5>

      <?php print $messages; ?>

      <?php print render($page['content']); ?>
      <div class="bottom_part">
      <div class="login_link">
        <?php print l(t('Login'), 'user/login'); ?>
      </div>

      <?php if (variable_get('user_register')): ?>
      <div class="register_link">
        <?php print l(t('Register a new account'), 'user/register'); ?>
      </div>
      <?php endif; ?>
    </div>
    </div>
  </div>
</div>
