#ifndef ROBOTCOMMAND_H
#define ROBOTCOMMAND_H
class RobotCommand {
  public:
  RobotCommand(double *speed);
  void setSpeed(double *speed);
  double getSpeed();
  
  private:
  double *speedPointer;
}
