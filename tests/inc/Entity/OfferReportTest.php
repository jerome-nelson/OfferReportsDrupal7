<?php
/**
 * Created by PhpStorm.
 * User: Jerome
 * Date: 06/02/2017
 * Time: 03:37
 */

require_once('../../../inc/Entity/OfferReport.php');

class OfferReportTest extends PHPUnit_Framework_TestCase {

    public function testInit() {
      $this->entityClass = new OfferReport;
    }

    public function testInitStack(){
      $typeStack = [];
      $this->assertArrayNotHasKey('test-type', $typeStack);
    }

}
