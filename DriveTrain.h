#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include <WPILib.h>

class DriveTrain {

  private:
    //Victors
    Victor leftFrontVic;
    Victor leftBackVic;
    Victor rightFrontVic;
    Victor rightBackVic;
    RobotCommand *robotCommand;

    
  public:
    DriveTrain(RobotCommand *robotCommandPointer);
    
    void update();
}
