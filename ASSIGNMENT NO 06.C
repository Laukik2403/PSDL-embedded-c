//led blinking with buzzer program

#include<p18f458.h>

#pragma config OSC=HS;
#pragma config WDT=OFF;
#pragma config LVP=OFF;

#define but1 PORTBbits.RB0;
#define but2 PORTBbits.RB1;
#define buzz PORTAbits.RA3;
#define relay PORTDbits.RD4;
#define LED0 PORTDbits.RD4;
#define LED1 PORTDbits.RD5;
#define LED2 PORTDbits.RD6;
#define LED3 PORTDbits.RD7;

void ledltorseq(void);
void ledrtolseq(void);
void delayms(unsigned int);

void main(void)
{
	TRISAbits.RA3=0;
	TRISBbits.RB0=1;
	TRISBbits.RB1=1;
	TRISD=0x00;
	buzz=0;
	relay=0;

	while(1)
	{
		if(but1==0)
		{
			while(1)
			{
				buzz=1;
				relay=1;
				ledltorseq();
				if(but1==0)
				{break;}
			}
		}
		else{}

		if(but2==0)
		{
			while(1)
			{
				buzz=0;
				relay=0;
				ledrtolseq();
				if(but1==0)
				{break;}
			}
		}
		else{}
	}
}

void ledltorseq(void)
{
	LED0=0;
	LED1=1;
	LED2=1;
	LED3=1;
	delayms(1000);
	LED0=1;
	LED1=0;
	LED2=1;
	LED3=1;
	delayms(1000);
	LED0=1;
	LED1=1;
	LED2=0;
	LED3=1;
	delayms(1000);
	LED0=1;
	LED1=1;
	LED2=1;
	LED3=0;
	delayms(1000);
}

void ledrtolseq(void)
{
	LED0=1;
	LED1=0;
	LED2=0;
	LED3=0;
	delayms(1000);
	LED0=0;
	LED1=1;
	LED2=0;
	LED3=0;
	delayms(1000);
	LED0=0;
	LED1=0;
	LED2=1;
	LED3=0;
	delayms(1000);
	LED0=0;
	LED1=0;
	LED2=0;
	LED3=1;
	delayms(1000);

}

void delayms(unsigned int val)
{
	unsigned int x;
	unsigned char y;
	for(x=0;x<val;x++)
		for(y=0;y<165;y++)
}