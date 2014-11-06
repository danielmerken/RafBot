class DriveTrain {

  private:
    DriveTrain driveTrain;
    HumanController humanController;
  
    Victor leftFrontVic;
    Victor leftBackVic;
    Victor rightFrontVic;
    Victor rightBackVic;
    
    PIDController leftFrontCon;
    PIDController leftBackCon;
    PIDController rightFrontCon;
    PIDController rightBackCon;
    
  public:
    DriveTrain();
    
    void update();
