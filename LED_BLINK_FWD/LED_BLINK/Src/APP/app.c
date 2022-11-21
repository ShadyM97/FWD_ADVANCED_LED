#include "app.h"

static int x=0;

void app_init(void)
{
	SYS_init();
	LED_init();
	TIMER0_init();
	INTERRUPT_init();
	SYSTICK_Registering_fnc(&callback_fnc);
}
void app_start(void)
{
	int i,j;
	int tOn=5,tOff=3;
	while(1)
	{
		i=0;
		j=0;
		LED_ON();
		while(i<tOn)
		{
			
			if(x==1)
			{
				x=0;
				i++;
			}
				
		}
		LED_OFF();
		while(j<tOff)
		{
			if(x==1)
			{
				x=0;
				j++;
			}
		}
	}
	
}
void callback_fnc(void)
{
	x=1;
}

