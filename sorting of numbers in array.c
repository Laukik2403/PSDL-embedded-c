//sorting of numbers in array

#include<p18f4520.h>

void main(void)
{
	unsigned int i,j,n=5,temp;
	int a[]={0x02,0x06,0x10,0x04,0x08};
	
	TRISB=0;
	TRISD=0;
	TRISC=0;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}	
	}

	PORTA=a[0];
	PORTB=a[1];
	PORTC=a[2];
	PORTD=a[3];
	PORTE=a[4];
}