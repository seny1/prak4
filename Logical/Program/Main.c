
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{	
	blink = 0;
	i = 0;
	LED[0] = 0; LED[1] = 0; LED[2] = 0; LED[3] = 0;
	press_1	= 0; press_2 = 0; press_3 = 0; press_4 = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	
	if(Button_1 && !press_1)
	{
		LED[0] = !LED[0];
		press_1 = 1;	
	}
	if(Button_2 && !press_2)
	{
		LED[1] = !LED[1];
		press_2 = 1;	
	}
	if(Button_3 && !press_3)
	{
		 LED[2] = !LED[2];
		press_3 = 1;	
	}
	if(Button_4 && !press_4)
	{
		LED[3] = !LED[3]; 
		press_4 = 1;	
	}
	
	if(!Button_1) press_1	= 0;
	if(!Button_2) press_2	= 0;
	if(!Button_3) press_3	= 0;
	if(!Button_4) press_4	= 0;
	
	if (blink == 1)
	{
		i++;
		if(i % 2 == 0) 
		{
			LED[0] = !LED[0];
		}
		if(i % 3 == 0) 
		{
			LED[1] = !LED[1];
		}
		if(i % 4 == 0) 
		{
			LED[2] = !LED[2];
		}
		if(i % 5 == 0) 
		{
			LED[3] = !LED[3];
		}
	}
	
}

void _EXIT ProgramExit(void)
{

}

