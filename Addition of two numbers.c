// addition of two numbers.

#include<p18f4520.h>

void main(void)
{
	unsigned int i,j,k;
	TRISB=0;
	LATB=0;

	i=0x05;
	j=0x02;
	k=i+j;
	
	PORTC=i;
	PORTD=j;
	PORTB=K;
}