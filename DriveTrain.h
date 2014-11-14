#include <WPILib.h>

class DriveTrain {

  private:
    //Victors
    Victor leftFrontVic;
    Victor leftBackVic;
    Victor rightFrontVic;
    Victor rightBackVic;

    
  public:
    DriveTrain();
    
    void update();
