<?php
/**
 * Created by PhpStorm.
 * User: Jerome
 * Date: 06/02/2017
 * Time: 03:37
 */

require_once('../../../inc/Entity/OfferReport.php');

class OfferReportTest extends PHPUnit_Framework_TestCase {

  public function testCheckStack(){
    $typeStack = [];
    $this->assertArrayNotHasKey('test-type', $typeStack);
  }

  public function testSetDefaultValues() {
    $typeStack[] = array(
      'type' => 'test-type',
      'name' => 'Test Content Type'
    );
    $defaultStack[] = array(
      'type'  => 'default-type',
      'name'  => 'Default Name',
      'base' => 'node_content',
      'description' => 'Test Custom Type',
      'custom' => 1,
      'modified' => 1,
      'locked' => 0,
    );
    $typeStack = array_replace_recursive($defaultStack,$typeStack);
    $this->assertArraySubset([0 => ['type' => 'test-type']], $typeStack);
  }
}
