# include "HumanController.h"
# include "RobotCommand.h"

HumanController::HumanController(RobotCommand robotCommandPointer):
  joystick((uint32_t)1)
{
  robotCommand=robotCommandPointer;
}

HumanController::update()
{
  *robotCommand.setSpeed(joystick.getY());
}
  
