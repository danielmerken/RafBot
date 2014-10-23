
class Robot {

  private:
    DriveTrain driveTrain;
    HumanController humanController;
  
  public:
    Robot();
    
    void update();
