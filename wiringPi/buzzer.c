#include<wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
const int IRpin = 15;
int main()
{
	if(-1==wiringPiSetup()){
		printf("setup error\n");
		return -1;
	}
	pinMode(IRpin,OUTPUT);
	uint8_t digitalvalue	=	0;
	for(;;){
		digitalWrite(IRpin,++digitalvalue%2);
		delay(100);
	}
	printf("------------bye-------------");
	return 0;
}
