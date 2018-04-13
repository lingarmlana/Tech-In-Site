<?php
/**
 * Returns HTML for a simple table.
 */
function theme_simple($vars) {
  $form = $vars['form'];
  $rows = array();
  foreach (element_children($form) as $id) {
    if (isset($form[$id])) {
      $rows[] = array(
        'data' => array(
          drupal_render($form[$id]['act']),
          drupal_render($form[$id]['tech']),
          drupal_render($form[$id]['inventory']),
          drupal_render($form[$id]['status']),
        ),
        'class' => array(),
      );
    }
  }
 
  $output = theme('table', array(
    'header' => $form['#header'],
    'rows'  => $rows,
    'empty' => t('На даний момент Вашої техніки в ремонті немає', array()),
  ));

  $output .= theme('pager');
 
  $output .= drupal_render_children($form);
  return $output;
}

/**
 * Returns HTML for a cartridge table.
 */
function theme_cartridge($vars) {
  $form = $vars['form'];
  $rows = array();
  foreach (element_children($form) as $id) {
    if (isset($form[$id])) {
      $rows[] = array(
        'data' => array(
          drupal_render($form[$id]['act']),
          drupal_render($form[$id]['tech']),
          drupal_render($form[$id]['inventory']),
          drupal_render($form[$id]['status']),
        ),
        'class' => array(),
      );
    }
  }
 
  $output = theme('table', array(
    'header' => $form['#header'],
    'rows'  => $rows,
    'empty' => t('На даний момент Ваших картриджів в заправці немає', array()),
  ));
 
  $output .= theme('pager');

  $output .= drupal_render_children($form);
  return $output;
}
