#include "Robot.h"

Robot::Robot():
  driveTrain(),
  humanController(),
  robotCommand(0)
{
  
}

void Robot::update(){
  robotCommand.reset();
  humanController.update(&robotCommand);
  driveTrain.update(&robotCommand);
}
