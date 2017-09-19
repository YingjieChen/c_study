#include<wiringPi.h>   
#include <stdint.h>
int main()
{
      if(-1==wiringPiSetup())
      {
             //print("setup error\n");
             return -1;
      }

	for(uint8_t pin=0;pin<32;pin++){
   		pinMode(pin,OUTPUT);
		digitalWrite(pin,0);
	}
        
	//cout<<"------------bye-------------"<<endl;
	return 0;   
}

