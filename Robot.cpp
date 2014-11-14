#include "Robot.h"

Robot::Robot():
  driveTrain(),
  humanController(),
  robotCommand(0)
{
  
}

void Robot::update(){
  humanController.update();
  driveTrain.update();
}
