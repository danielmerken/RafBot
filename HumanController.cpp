# include "HumanController.h"
# include "RobotCommand.h"

HumanController::HumanController():
  joystick((uint32_t)1)
{
  
}

HumanController::Update()
{
  RobotCommand.*speedPointer=joystick.getY();
}
  
