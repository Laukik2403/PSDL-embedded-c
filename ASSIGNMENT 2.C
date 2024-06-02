//addition of elements in array

#include<p18f4520.h>

void main(void)
{
	unsigned int i,n=4,res=0;
	unsigned int number[]={0x03,0x07,0x06,0x02};

	TRISB=0;
	LATB=0;
	
	for(i=0;i<n;i++)
	{
		res=res+number[i];
	}
	PORTB=res;
}