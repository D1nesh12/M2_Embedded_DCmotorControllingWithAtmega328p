
#include <avr/io.h>


int main(void)
{
  DDRB=0x00;
  PORTB=0xFF;
  DDRC=0xFF;
  while(1)
  {
if(PINB&0b00000001)//02
{
PORTC=0x00;   
}
else
{ 
PORTC=0x01; 
}
  }
  return 0;
}




#include <avr/io.h>
int main(void)
{
  DDRB=0x00;
  PORTB=0xFF;
  DDRC=0xFF;
  while(1)
  {
if(PINB&0b00000001)//02
{
PORTC=0x02;   
}
else
{ 
PORTC=0x01; 
}
  }
  return 0;
}

