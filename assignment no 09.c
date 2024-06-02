//assignment no 09


#include<p18f4520.h>
#include<stdio.h>

#pragma config OSC=HS
#pragma config WDT=OFF
#pragma config LVP=OFF

void InitUSART()
{
	TRISCbits.TRISC6=0;
	TRISCbits.TRISC7=1;
	SPBRG=32;
	TXSTA=0x20;
	RCSTAbits.SPEN=1;
	RCSTAbits.CREN=1;
}

void main(void)
{
	unsigned char ch;
	InitUSART();
	printf("HELLO I AM MICROCONTOLLER");
	printf("PLEASE ENTER THE CHARACTER:");
	while(1)
	{
		if(PIR1bits.RCIF==0)
		{
			ch=RCREG;
		}
		else if(PIR1bits.TXIF==0)
		{
			TXREG=ch;
		}
	}
}