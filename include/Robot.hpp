#pragma once
#include "IMU.hpp"
#include "Motor.hpp"
#include "PIDController.hpp"

class Robot
{
public:
    Robot();
    void begin();
    void update(float dt);

private:
    IMU imu;
    Motor leftMotor, rightMotor;
    PIDController pid;
};