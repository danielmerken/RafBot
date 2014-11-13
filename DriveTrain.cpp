#include "DriveTrain.h"

Robot::Robot(): 
  leftFrontVic((uint32_t) PORT_DRIVE_VIC_LEFT_FRONT), 
  leftBackVic((uint32_t) PORT_DRIVE_VIC_LEFT_BACK), 
  rightFrontVic((uint32_t) PORT_DRIVE_VIC_RIGHT_FRONT), 
  rightBackVic((uint32_t) PORT_DRIVE_VIC_RIGHT_BACK), 
  leftFrontCon(0.1, 0.001, 0.0, &turretPot, &leftFrontVic), 
  leftBackCon(0.1, 0.001, 0.0, &turretPot, &leftBackVic), 
  rightFrontCon(0.1, 0.001, 0.0, &turretPot, &rightFrontVic), 
  rightBackCon(0.1, 0.001, 0.0, &turretPot, &rightBackVic)
{
  //...
}

void Robot::init() {

}
  

void Robot::update() {
