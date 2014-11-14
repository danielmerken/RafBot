#include <WPILib.h>

class HumanController {
  private:
    Joystick joystick;
    RobotCommand robotCommand
  public:
  
    HumanController(RobotCommand rc);
    
    void update();
