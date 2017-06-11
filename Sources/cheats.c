#include "cheats.h"

u32		g_Items;
u32		g_Materials;

void    assign_region(u32 region)
{
    g_Items = ITEMS_ADDR;
    g_Materials = MATERIALS_ADDR;
}


void	Item99(void)
{
	if (is_pressed(BUTTON_L + BUTTON_DL))
	{
	    for (int i = 0; i < 46; i++)
        {
            WRITEU8(g_Items + (i * 1), 0x63);
        }	
	}
}

void	Mat99(void)
{
	if (is_pressed(BUTTON_L + BUTTON_DL))
	{
	    for (int i = 0; i < 45; i++)
        {
            WRITEU8(g_Materials + (i * 1), 0x63);
        }	
	}
}

void     Rup_99(void)
{
	WRITEU32(0x16C825A0, 0x1869F);
}

void     Inf_heart(void)
{
	WRITEU8(0x322C5BB74, 0x24);
}

void     Inf_retry(void)
{
	WRITEU32(0x32D5872C, 0xA);
}

void     Inf_time(void)
{
	WRITEU32(0x32D58730, 0x14A0);
}

void     Max_rupee(void)
{
	WRITEU32(0x32C5BBA0, 0x189F);
}

void     Time_freeze(void)
{
	WRITEU8(0x32D81F98, 0x7F);
}




