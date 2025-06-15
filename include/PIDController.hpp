#pragma once

class PIDController
{
public:
    PIDController(float kp, float ki, float kd);
    void reset();
    float compute(float setpoint, float measured, float dt);

private:
    float kp, ki, kd;
    float integral;
    float lastError;
};