#include<wiringPi.h>   

const int LEDpin = 15;

int main()
{
      if(-1==wiringPiSetup())
      {
             //print("setup error\n");
             return -1;
      }
      pinMode(LEDpin,OUTPUT);      


      for(int i=0;i<10;++i)
      {
                digitalWrite(LEDpin,HIGH); 
                delay(600);
                digitalWrite(LEDpin,LOW);
                delay(600);
   
      }
        
      //cout<<"------------bye-------------"<<endl;
      return 0;   
}
