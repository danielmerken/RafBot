#include <WPILib.h>

class DriveTrain {

  private:
    DriveTrain driveTrain;
    HumanController humanController;
  
    //Victors
    Victor leftFrontVic;
    Victor leftBackVic;
    Victor rightFrontVic;
    Victor rightBackVic;
    
    //Encoders
    Encoder rightEnc;
    Encoder leftEnc;
    
    //PIDControllers
    PIDController leftFrontCon;
    PIDController leftBackCon;
    PIDController rightFrontCon;
    PIDController rightBackCon;
    
  public:
    DriveTrain();
    
    void update();
