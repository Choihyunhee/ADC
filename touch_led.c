#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "wiringARTIK.h"

int inputPin =128;
int outputPin =129;

int setup(int pin,int dir){
        if(!digitalPinMode(pin,dir)) return -1;
        return 0;
}

int main(void){
        int count=1;
        if(setup(inputPin,INPUT)==-1) exit(1);
        if(setup(outputPin,OUTPUT)==-1) exit(1);

        while(1)
        {
                if(digitalRead(inputPin)==1){
                        if(count%2==0){
                                digitalWrite(outputPin,1);
                                count++;
                                sleep(1);
                        }
                        else{
                                digitalWrite(outputPin,0);
                                count++;
                                sleep(1);
                        }
                }
        }
        return 0;
}

