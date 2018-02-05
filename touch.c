#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wiringARTIK.h>

int inputPin =128;

int setup(){
        if(!digitalPinMode(inputPin,INPUT)) return -1;
        return 0;
}

int main(void){
        if(setup()==-1) exit(1);
        while(1)
        {
                printf("SensorVal : %d\n",digitalRead(inputPin));
                sleep(1);
        }
        return 0;
}

