#include "mbed.h"

//------------------------------------
// Hyperterminal configuration
// 9600 bauds, 8-bit data, no parity
//------------------------------------

Serial pc(SERIAL_TX, SERIAL_RX);
 
DigitalOut myled(LED1);
AnalogIn sensor(A0);
DigitalIn sensor2(D2);
float value = 0;
int value2 = 0;

int main() {
  pc.printf("Hello World !\n");
  while(1) { 
      wait(1);
      value2 = sensor2.read();
      value = sensor.read();
      pc.printf("Analog value is:  %f\r\n", value); //unix version of paragraph
      pc.printf("Digital value is: %d\r\n", value2);
  }
}
 