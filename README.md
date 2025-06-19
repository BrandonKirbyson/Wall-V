# Wall-V (Wheeled and Legged Locomotion Vehicle)

![Wall-V Render](./imgs/wall-v-render1.png)

Wall-V is a 2 legged, self-balancing robot that has wheels and can jump. It is designed to be able to go up hills and have uneven height on each side. The robot uses an ESP-Wroom-32 as a fast microcontroller to stay balanced. We are planning to use either PID to maintain balance.

## Why we are building this

We are building Wall-V to experiment with self-balacing robots that have the capability to jump. Jumping will allow to robot to go over small obstacles and be more manuverable and it will have to have high torque motors to align the robot.

So far throughout the building process, the hardest thing has been creating the leg design that allows the robot to jump. We have thought about many different designs but concluded that putting a ball bearing as the joint will still allow the robot to jump while not requiring an extra motor to move. The legs are both attached to each other and 1 motor will provide the torque to lift both legs at once. Additionally, the wheels are not linked so they can be at independent heights.

## Wiring Diagram

![Wiring Diagram](./imgs/wiring-diagram.png)

## Parts List

Total Cost of Unordered Parts: $183.15 (tax and shipping not included)
Total Cost of Unorder Parts on AliExpress: $116.36 (tax and shipping not included)

<table class="table table-bordered table-hover table-condensed">
<thead><tr><th title="Field #1">Quantity</th>
<th title="Field #2">Name</th>
<th title="Field #3">Notes</th>
<th title="Field #4">Amazon Link</th>
<th title="Field #5">Ali Link</th>
<th title="Field #6">Amazon Price</th>
<th title="Field #7">Ali Price</th>
<th title="Field #8">Ordered</th>
</tr></thead>
<tbody><tr>
<td align="right">4</td>
<td>VGEBY Brushless Motor 1PCS 5010 360KV</td>
<td>These two motors power the arms and have high torque that can quickly pull up the legs enabling the robot to jump</td>
<td>https://a.co/d/61lIr4G</td>
<td>https://www.aliexpress.us/item/2251832668557589.html?spm=a2g0o.productlist.main.1.20064bacWDHSyi&amp;algo_pvid=8ec6f817-64e3-4674-8c18-a30b2f5f0707&amp;algo_exp_id=8ec6f817-64e3-4674-8c18-a30b2f5f0707-0&amp;pdp_ext_f=%7B%22order%22%3A%222%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%2115.10%2115.10%21%21%2115.10%2115.10%21%402103244817503523908153013e0578%2110000000261366829%21sea%21US%216243327201%21X&amp;curPageLogUid=pocxyyZLTGgi&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">27.62</td>
<td align="right">15.10</td>
<td>2/4</td>
</tr>
<tr>
<td align="right">1</td>
<td>HiLetgo 3pcs GY-521 MPU-6050</td>
<td>This pack comes with 3 gyroscopes for value</td>
<td>https://a.co/d/dAB0LTv</td>
<td>https://www.aliexpress.us/item/3256806450681417.html?spm=a2g0o.productlist.main.3.3125742c0yp8dZ&amp;algo_pvid=b994adb8-9818-4e4b-964e-9fefcbeb7c79&amp;algo_exp_id=b994adb8-9818-4e4b-964e-9fefcbeb7c79-2&amp;pdp_ext_f=%7B%22order%22%3A%22449%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%216.58%212.24%21%21%2147.07%2116.00%21%402103244617503533696828241e430e%2112000037888970890%21sea%21US%216243327201%21X&amp;curPageLogUid=pQ5GeUb4Vak1&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">10.99</td>
<td align="right">5.79</td>
<td>No</td>
</tr>
<tr>
<td align="right">1</td>
<td>ESP32-DevKitC-32E Development Board</td>
<td>This is the main microcontroller for the robot which has a very fast tick rate for self-balancing</td>
<td>https://a.co/d/bIcHKEl</td>
<td>https://www.aliexpress.us/item/3256804290552594.html?spm=a2g0o.productlist.main.2.481536f0vpCDGe&amp;algo_pvid=1c3a7ca1-6475-4ef8-93aa-210fe99cec2e&amp;algo_exp_id=1c3a7ca1-6475-4ef8-93aa-210fe99cec2e-1&amp;pdp_ext_f=%7B%22order%22%3A%22959%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%212.46%212.46%21%21%212.46%212.46%21%402101effb17503527626873205e4c8f%2112000038614826681%21sea%21US%216243327201%21X&amp;curPageLogUid=78oZW5m4Yk4F&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">11</td>
<td align="right">2.46</td>
<td>No</td>
</tr>
<tr>
<td align="right">1</td>
<td>5pcs CJMCU-103 Rotary Angle Sensor Module SMD SV01A103AEA01R00 Trimmer 10K Potentiometer Analog Voltage Output</td>
<td>A set of 5 rotary encoders to tell the angle which the robots legs and wheels are at enabling it to jump and stay balanced better</td>
<td>https://a.co/d/h0BCA1g</td>
<td>https://www.aliexpress.us/item/3256806596784277.html?spm=a2g0o.productlist.main.9.24254f883QPohq&amp;algo_pvid=114596c4-b009-49a5-9a1a-3f8b7a2e8755&amp;algo_exp_id=114596c4-b009-49a5-9a1a-3f8b7a2e8755-8&amp;pdp_ext_f=%7B%22order%22%3A%2240%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%212.96%211.95%21%21%2121.20%2113.99%21%402101c5a417503534924803438e016b%2112000038305810419%21sea%21US%216243327201%21X&amp;curPageLogUid=nxQKhnpUdzV2&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">11.99</td>
<td align="right">9.75</td>
<td>No</td>
</tr>
<tr>
<td align="right">4</td>
<td>ZMR 40A Bidirectional Brushless 2-6S UBEC 3A 5V ESC</td>
<td>These ESCs will control the leg and wheel motors</td>
<td>https://a.co/d/9KbKRcA</td>
<td>https://www.aliexpress.us/item/2255800049335968.html?spm=a2g0o.productlist.main.5.31dc6257Qvh3gS&amp;algo_pvid=c853bc4b-642b-4ce3-b909-68d9928b6636&amp;algo_exp_id=c853bc4b-642b-4ce3-b909-68d9928b6636-4&amp;pdp_ext_f=%7B%22order%22%3A%2226%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%216.48%215.25%21%21%216.48%215.25%21%40210318c317503535663733539ec0c4%2110000000954201207%21sea%21US%216243327201%21X&amp;curPageLogUid=7LJBWnSQjZb9&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">14.99</td>
<td align="right">11.89</td>
<td>No</td>
</tr>
<tr>
<td align="right">1</td>
<td>MF148ZZ Flanged Ball Bearing ID 8mm x OD 14mm x Width 4mm</td>
<td>10 flanged bearings to enable the legs to pivot smoothly</td>
<td>https://a.co/d/eTWzlf1</td>
<td>https://www.aliexpress.us/item/3256807921303726.html?spm=a2g0o.productlist.main.1.248297c81sph8p&amp;algo_pvid=49a5743f-f979-4f89-b520-60a03407f267&amp;algo_exp_id=49a5743f-f979-4f89-b520-60a03407f267-0&amp;pdp_ext_f=%7B%22order%22%3A%2232%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%219.46%215.39%21%21%2167.75%2138.62%21%402103205217503536358333884e8e10%2112000043798919435%21sea%21US%216243327201%21X&amp;curPageLogUid=TudvjBQaVeaE&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">8.99</td>
<td align="right">5.49</td>
<td>No</td>
</tr>
<tr>
<td align="right">1</td>
<td>SpeedyBee ELRS FPV Receiver - 2.4ghz ExpressLRS Nano Receiver Drone RX Module with 78mm UFL T Antenna</td>
<td>ELRS receiver to control the robot with a remote</td>
<td>https://a.co/d/2ItnyXH</td>
<td>https://www.aliexpress.us/item/3256809002280211.html?spm=a2g0o.productlist.main.4.bc491a81n57xoP&amp;aem_p4p_detail=202506191022234961946954182660002346037&amp;algo_pvid=decc05d8-3d43-4e63-b643-9ad8549628f7&amp;algo_exp_id=decc05d8-3d43-4e63-b643-9ad8549628f7-3&amp;pdp_ext_f=%7B%22order%22%3A%22-1%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%2127.40%2112.88%21%21%21196.10%2192.17%21%40210337c117503537432544271e2c8c%2112000048241756978%21sea%21US%216243327201%21X&amp;curPageLogUid=w34BSJ50vTId&amp;utparam-url=scene%3Asearch%7Cquery_from%3A&amp;search_p4p_id=202506191022234961946954182660002346037_1</td>
<td align="right">14.99</td>
<td align="right">12.88</td>
<td>No</td>
</tr>
<tr>
<td align="right">1</td>
<td>0.96 Inch OLED Display Module 12864 LCD Screen 128x64 IIC I2C OLED Board SSD1315</td>
<td>2 small OLED screens that will serve as the robots eyes</td>
<td>https://a.co/d/b7wErMp</td>
<td>https://www.aliexpress.us/item/3256804169233174.html?spm=a2g0o.productlist.main.4.7a9f1a90yQD49R&amp;algo_pvid=6d32697d-b5ea-4e54-ba36-5ebc366c3211&amp;algo_exp_id=6d32697d-b5ea-4e54-ba36-5ebc366c3211-14&amp;pdp_ext_f=%7B%22order%22%3A%223700%22%2C%22eval%22%3A%221%22%7D&amp;pdp_npi=4%40dis%21USD%212.23%212.23%21%21%2115.94%2115.94%21%402101d9ee17503539261964348e0c71%2112000029444147546%21sea%21US%216243327201%21X&amp;curPageLogUid=1tH3m4qXug1h&amp;utparam-url=scene%3Asearch%7Cquery_from%3A</td>
<td align="right">9.99</td>
<td align="right">2.23</td>
<td>No</td>
</tr>
</tbody></table>