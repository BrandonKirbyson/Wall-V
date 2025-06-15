#include "PIDController.hpp"

PIDController::PIDController(float kp, float ki, float kd)
    : kp(kp), ki(ki), kd(kd), integral(0), lastError(0) {}

void PIDController::reset()
{
    integral = 0;
    lastError = 0;
}

float PIDController::compute(float setpoint, float measured, float dt)
{
    float error = setpoint - measured;
    integral += error * dt;
    float derivative = (error - lastError) / dt;
    lastError = error;
    return kp * error + ki * integral + kd * derivative;
}