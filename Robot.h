
class Robot {

  private:
    DriveTrain driveTrain;
    HumanController humanController;
    RobotCommand robotCommand;
  
  public:
    Robot();
    
    void update();
