#include "DriveTrain.h"
#include "RobotCommand.h"

DriveTrain::DriveTrain(RobotCommand *robotCommandPointer): 
  leftFrontVic((uint32_t) 5), 
  leftBackVic((uint32_t) 6), 
  rightFrontVic((uint32_t) 1), 
  rightBackVic((uint32_t) 2), 
{
 robotCommand=robotCommandPointer;
}

void DriveTrain::update() {
  leftFrontVic.set(robotCommand.getSpeed());
  leftBackVic.set(robotCommand.getSpeed());
  rightFrontVic.set(robotCommand.getSpeed());
  rightBackVic.set(robotCommand.getSpeed());
}
