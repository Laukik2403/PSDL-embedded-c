//addition of numbers in aaray

#include<p18f4520.h>

void main(void)
{
	unsigned int i,n=5,res=0;
	TRISB=0;
	LATB=0;

	int number[]={0x02,0x05,0x03,0x10,0x07};
	
	for(i=0;i<n;i++)
	{
		res=res+number[i];
	}
	PORTB=res;
}