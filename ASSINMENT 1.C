//addition of two numbers

#include<p18f4520.h>

void main(void)
{
	TRISB=0;
	LATB=0;
	unsigned int i,j,k;
	
	i=0x05;
	j=0x02;
	k=i+j;

	PORTC=i;
	PORTD=j;
	PORTB=k;
}

