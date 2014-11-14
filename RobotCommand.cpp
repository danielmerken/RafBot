#include "RobotCommand.h"

RobotCommand::RobotCommand(double *speed){
  speedPointer=speed;
}

RobotCommand::setSpeed(double *speed){
  speedPointer=speed;
}

RobotCommand::getSpeed(){
  return *speedPointer;
}
