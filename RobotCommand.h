class RobotCommand {
  public:
  RobotCommand(double *speed);
  void setSpeed(double *speed);
  double getSpeed();
  
  private:
  double *speedPointer;
}
