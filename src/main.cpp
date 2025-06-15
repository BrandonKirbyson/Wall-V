#include <Arduino.h>
#include "Robot.hpp"
#include <chrono>
#include <thread>

void setup()
{
}

void loop()
{
}

int main()
{
  Robot robot;
  robot.begin();

  auto lastTime = std::chrono::steady_clock::now();

  while (true)
  {
    auto now = std::chrono::steady_clock::now();
    float dt = std::chrono::duration<float>(now - lastTime).count();
    lastTime = now;

    robot.update(dt);

    std::this_thread::sleep_for(std::chrono::milliseconds(1)); // 1000 Hz loop
  }
}