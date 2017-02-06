<?php
/**
 * Created by PhpStorm.
 * User: Jerome
 * Date: 06/02/2017
 * Time: 10:47
 */
class OfferReport {

  var $typeName;

  function _construct($array) {

  }

  function checkStack($array) {
    return (in_array($array, $this->typeName));
  }
}