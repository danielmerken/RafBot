#ifndef ROBOT_H
#define ROBOT_H
class Robot {

  private:
    DriveTrain driveTrain;
    HumanController humanController;
    RobotCommand robotCommand;
  
  public:
    Robot();
    
    void update();
