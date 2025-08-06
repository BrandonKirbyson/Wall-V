#include <Arduino.h>

void setup()
{
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Wait for the serial port to connect (useful for some boards)
  while (!Serial)
  {
    ; // Wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("Hello, World!");
}

void loop()
{
  // Nothing to do here
  // The setup function already prints "Hello, World!" once
  delay(1000); // Optional: wait for a second before the next iteration
}

// #include <Arduino.h>
// #include <Wire.h>
// // #include <AS5600.h>
// #include <Servo.h>

// const int SW_pin = 2; // digital pin connected to switch output
// const int X_pin = 0;  // analog pin connected to X output
// const int Y_pin = 1;  // analog pin connected to Y output

// // AS5600 as5600;
// Servo esc;

// const int escPin = 12;

// // const float Kp = 0.5;
// // const float Ki = 0;
// // const float Kd = 0.1;
// // // const float Ki = 0.1;
// // // const float Kd = 0.5;

// // double targetAngle = 90.0;
// // double integral = 0.0;
// // double previousError = 0.0;
// // unsigned long lastTime = 0;

// double armExtendedPercent(int rawAngle);
// void setMotorPower(double percent);

// void setup()
// {
//   Serial.begin(9600);
//   Wire.begin();
//   esc.attach(escPin);
//   esc.writeMicroseconds(1000); // arm ESC

//   pinMode(SW_pin, INPUT);
//   digitalWrite(SW_pin, HIGH);

//   delay(2000);

//   // if (as5600.begin())
//   //   Serial.println("AS5600 Working");
//   // else
//   //   Serial.println("AS5600 Not working");

//   // lastTime = millis();
// }
// void loop()
// {
//   int yValue = analogRead(Y_pin);
//   Serial.print(" | Y: ");
//   Serial.println(yValue);

//   // convert Y value from 0-1020 to 0-100
//   double yPercent = (yValue / 1023.0) * 100.0;
//   Serial.print("Y Percent: ");
//   Serial.println(yPercent);

//   // int rawAngle = as5600.readAngle();
//   // double angle = armExtendedPercent(rawAngle);

//   // unsigned long now = millis();
//   // double dt = (now - lastTime) / 1000.0;
//   // lastTime = now;

//   // double error = targetAngle - angle;
//   // integral += error * dt;
//   // double derivative = (error - previousError) / dt;
//   // previousError = error;

//   // double output = Kp * error + Ki * integral + Kd * derivative;

//   // double motorPower = constrain(output, -100.0, 100.0);
//   setMotorPower(yPercent);

//   // // Debug output
//   // Serial.print("Angle: ");
//   // Serial.print(angle);
//   // Serial.print(" | Error: ");
//   // Serial.print(error);
//   // Serial.print(" | Output: ");
//   // Serial.println(output);

//   delay(3);
// }

// double armExtendedPercent(int rawAngle)
// {
//   const double MIN_ANGLE = 214;
//   const double MAX_ANGLE = 123;

//   const double MIN_POSITION = 0;
//   const double MAX_POSITION = 90;

//   double angle = rawAngle * 360.0 / 4096.0;

//   if (angle > MIN_ANGLE)
//     return MIN_POSITION;

//   return ((angle - MIN_ANGLE) * (MAX_POSITION - MIN_POSITION)) / (MAX_ANGLE - MIN_ANGLE);
// }

// void setMotorPower(double percent)
// {
//   percent = constrain(percent, -100.0, 100.0);

//   int pulseWidth = 1500 + (percent / 100.0) * 500.0;
//   esc.writeMicroseconds(pulseWidth);

//   Serial.print("Power set to ");
//   Serial.print(percent, 2);
//   Serial.print("% (");
//   Serial.print(pulseWidth);
//   Serial.println(" µs)");
// }