# Home-Automation
An IoT Project using Arduino UNO, that control a Room appliences wirelssely using --Bluetooth--.
this project is very basic level project in IOT.
In this project we control All the *Electrical appliences* wirelessely.

# Prerequisites
  1.Arduino UNO</br>
  2.HC-05 bluetooth Module</br>
  3.Relays</br>
  4.jumper wires</br>
  5.ELectrical Appliences </br>
  6.Buetooth Terminal HC-05 App</br>
  
 # Setup
 ### Arduino Uno
 __pin 8,9,10,11__: output for *aurduino* and input for the relay board.
 __RX__: connect to HC-05 *tx*.
 __TX__: connects to HC-05 *rx*.
 
 ### HC-05
 __EN/Key pin__: This pin is used to set Bluetooth module in either command mode or data mode. Command mode can be accessed by setting this pin high and data mode can be accessed setting it low. By default, it is set as low in data mode.
__VCC__: This is the power supply pin which is connected to --either 5V or 3.3V--.
__Ground__: This is the ground pin of the Bluetooth module.
___TXD__: This pin used for serial transmission of the data.
__RXD__: This pin is used for serially receive the data.
__State__: This pin tells whether the module is connected or disconnected with the other device.

### Relay
 
__VCC__:	5V
__GND__:	Ground
__Data pin__:	“1” or “0” from microcontroller
__NC__:For Normally Closed Circuit
__COM__:	Common
__NO__:	For Normally Open Circuit
 
 
