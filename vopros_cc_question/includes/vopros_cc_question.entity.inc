<?php

/**
 * @file
 * Entity classes defined by vopros_cc_question module.
 */


/**
 * Entity class for Vopros Call Center Question entities.
 */
class VoprosCallCenterQuestion extends VoprosEntity {
  /**
   * Defined the default uri for products
   */
  public function defaultUri() {
    return array('path' => 'admin/vopros/cc-questions/' . $this->identifier());
  }
}
