#include <wiringARTIK.h>
#define ANALOG_PIN 0
#define outputPin 38

int main(){
	long SenVal=0;
	digitalPinMode(outputPin,0);
	while(1){
		SenVal=analogRead(ANALOG_PIN);
		if(SenVal>3000)
			digitalWrite(outputPin,1);
		else
			digitalWrite(outputPin,0);
	printf("%d\n",SenVal);
	sleep(1);
	}
	return 0;
}

