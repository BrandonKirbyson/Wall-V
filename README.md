# Wall-V (Wheeled and Legged Locomotion Vehicle)

![Wall-V Render](./imgs/wall-v-render1.png)

Wall-V is a 2 legged, self-balancing robot that has wheels and can jump. It is designed to be able to go up hills and have uneven height on each side. The robot uses an ESP-Wroom-32 as a fast microcontroller to stay balanced. We are planning to use either PID to maintain balance.

## Why we are building this

We are building Wall-V to experiment with self-balacing robots that have the capability to jump. Jumping will allow to robot to go over small obstacles and be more manuverable and it will have to have high torque motors to align the robot.

So far throughout the building process, the hardest thing has been creating the leg design that allows the robot to jump. We have thought about many different designs but concluded that putting a ball bearing as the joint will still allow the robot to jump while not requiring an extra motor to move. The legs are both attached to each other and 1 motor will provide the torque to lift both legs at once. Additionally, the wheels are not linked so they can be at independent heights.

## Wiring Diagram

![Wiring Diagram](./imgs/wiring-diagram.png)

## Parts List

Subtotal Cost of Parts on Amazon: $123.9 (does not include tax and shipping)

Subtotal Cost of Parts on AliExpress: $34.89 (does not include tax and shipping)

Subtotal Cost of Parts: $158.79 (does not include tax and shipping)

Total Cost of Parts: $175.92 (includes tax and shipping)

Extra Spent on Amazon: $27.12 (extra we will cover for faster shipping, not spent using HCB funds)

| Quantity | Name                                                                                                              | Notes                                                                                                             | Amazon Link            | Ali Link                                             | Amazon Price | Aliexpress Price | Ordering From | Ordered |
| -------- | ----------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------- | ---------------------- | ---------------------------------------------------- | ------------ | ---------------- | ------------- | ------- |
| 4        | VGEBY Brushless Motor 1PCS 5010 360KV                                                                             | These two motors power the arms and have high torque that can quickly pull up the legs enabling the robot to jump | https://a.co/d/61lIr4G | https://www.aliexpress.us/item/2251832668557589.html | 27.62        | 15.10            | Aliexpress    | 2/4     |
| 1        | WWZMDiB 4Pcs AS5600 Magnetic Encoder 3.3V 12bit high Precision Magnetic Induction Angle Measurement Sensor Module | These are used for getting motor position                                                                         | https://a.co/d/6U3z8iJ | https://www.aliexpress.us/item/3256802834839452.html | 10.99        | 5.67             | Amazon        | No      |
| 1        | ESP32-DevKitC-32E Development Board                                                                               | This is the main microcontroller for the robot which has a very fast tick rate for self-balancing                 | https://a.co/d/bIcHKEl | https://www.aliexpress.us/item/3256804290552594.html | 11           | 2.46             | Aliexpress    | No      |
| 4        | ZMR 40A Bidirectional Brushless 2-6S UBEC 3A 5V ESC                                                               | These ESCs will control the leg and wheel motors                                                                  | https://a.co/d/9KbKRcA | https://www.aliexpress.us/item/2255800049335968.html | 14.99        | 11.89            | Amazon        | No      |
| 1        | MF148ZZ Flanged Ball Bearing ID 8mm x OD 14mm x Width 4mm                                                         | Smaller flanged bearings to support leg pivots                                                                    | https://a.co/d/eTWzlf1 | https://www.aliexpress.us/item/3256807921303726.html | 8.99         | 5.49             | Amazon        | No      |
| 1        | F6802-2RS 10PCS Flanged Bearing 15×24×5mm                                                                         | Medium size flanged bearings for the leg joints at knee and wheel                                                 | https://a.co/d/7eKafdc | (not cheaper)                                        | 9.99         | -                | Amazon        | No      |
| 1        | F6804-2RS 4PCS Flanged Ball Bearing 20mm x 32mm x 7mm                                                             | Larger flanged bearings for main leg pivot joints in the body                                                     | https://a.co/d/40CGgTH | (not cheaper)                                        | 8.99         | -                | Amazon        | No      |
| 1        | SpeedyBee ELRS FPV Receiver - 2.4ghz ExpressLRS Nano Receiver Drone RX Module with 78mm UFL T Antenna             | ELRS receiver to control the robot with a remote                                                                  | https://a.co/d/2ItnyXH | https://www.aliexpress.us/item/3256809002280211.html | 14.99        | 12.88            | Amazon        | No      |
| 1        | 0.96 Inch OLED Display Module 12864 LCD Screen 128x64 IIC I2C OLED Board SSD1315                                  | 2 small OLED screens that will serve as the robots eyes                                                           | https://a.co/d/b7wErMp | https://www.aliexpress.us/item/3256804169233174.html | 9.99         | 2.23             | Aliexpress    | No      |
