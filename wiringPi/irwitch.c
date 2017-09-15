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
	pinMode(IRpin,INPUT);
	uint8_t digitalvalue	=	0;
	for(;;){
		digitalvalue	=	digitalRead(IRpin);
		printf("%d",digitalvalue);
	}
	printf("------------bye-------------");
	return 0;
}
