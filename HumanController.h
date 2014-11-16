#ifndef HUMANCONTROLLER_H
#define HUMANCONTROLLER_H
#include <WPILib.h>

class HumanController {
  private:
    Joystick joystick;
    RobotCommand *robotCommand;
  public:
  
    HumanController(RobotCommand *robotCommandPointer);
    
    void update();
}
