#include <wiringARTIK.h>
#define ANALOG_PIN 0

void main(){
	int SenVal=0;
	while(1){
		SenVal=analogRead(ANALOG_PIN);
		printf("val: %d\n",SenVal);
		sleep(1);
	}
}

