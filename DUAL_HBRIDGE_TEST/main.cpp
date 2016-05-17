#include "mbed.h"
#include "Servo.h"

PwmOut E1(D3);      //E1 pin to any PWM pin
DigitalOut M1(D7);  //M1 pin to any digital pin
DigitalIn button(USER_BUTTON); //Blue Button setup
Servo servo(D9);

int main(){
    while(1){
        if(button == 0){  //0 is button pressed
            E1.write(10); //speed in percentage
            M1.write(0);  //0 is forward, 1 is backward
            servo.write(180);
            wait(0.5);
        }
        else{
            E1.write(0);
            servo.write(-180);
            wait(0.5);
        }
    }
}