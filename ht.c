
#include "wiringARTIK.h"

#define ANALOG_PIN0 0 // A0
#define ANALOG_PIN1 1  // A1
int main(void) {
        float SenVal1,SenVal2=0;
        float voltage1,voltage2=0;
        float temperature=0;
        float humidity=0;
                while(1){
                        SenVal1 = analogRead(ANALOG_PIN0);
                        SenVal2 = analogRead(ANALOG_PIN1);
                        voltage1=SenVal1/1000;
                        voltage2=SenVal2/1000;
                        temperature= -66.875+218.75*(voltage1/5);
                        humidity= -12.5 +125*(voltage2/5);
                        printf("temperature : %2.2f  humidity : %2.2f\n",temperature,humidity);
                        sleep(1);
                }
                return 0;
}
