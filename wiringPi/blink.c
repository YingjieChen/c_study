#include<wiringPi.h>   
const int LEDpin = 15;
int main()
{
	if(-1==wiringPiSetup()){
		printf("setup error\n");
		return -1;
	}
	pinMode(LEDpin,OUTPUT);
	for(;;){
		digitalWrite(LEDpin,HIGH); 
		delay(100);
		digitalWrite(LEDpin,LOW);
		delay(100);
	}
	printf("------------bye-------------\n");
	return 0;   
}
