#include "Robot.hpp"

Robot::Robot() : pid(1.0, 0.0, 0.05) {}

void Robot::begin()
{
    imu.begin();
    leftMotor.begin();
    rightMotor.begin();
}

void Robot::update(float dt)
{
    float angle = imu.getAngle();
    float correction = pid.compute(0.0, angle, dt);
    leftMotor.setSpeed(correction);
    rightMotor.setSpeed(correction);
}