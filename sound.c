#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <wiringARTIK.h>

int inputPin=128;

int setup(){
	if(!digitalPinMode(inputPin,INPUT)) return -1;
	return 0;
}

void main(){
	if(setup()==-1) exit(1);
	while(1){
		if(digitalRead(inputPin)==1){
			printf(¡°sound on\n¡±);
		}
	}
}
