#include "DriveTrain.h"
#include "RobotCommand.h"

Robot::Robot(): 
  leftFrontVic((uint32_t) 5), 
  leftBackVic((uint32_t) 6), 
  rightFrontVic((uint32_t) 1), 
  rightBackVic((uint32_t) 2), 
{
  //...
}

void Robot::update() {
  leftFrontVic.set(RobotCommand.getSpeed());
  leftBackVic.set(RobotCommand.getSpeed());
  rightFrontVic.set(RobotCommand.getSpeed());
  rightBackVic.set(RobotCommand.getSpeed());
}
