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

/*void	Mat99(void)
{
	if (is_pressed(BUTTON_L + BUTTON_DL))
	{
	    for (int i = 0; i < 45; i++)
        {
            WRITEU8(g_Materials + (i * 1), 0x63);
        }	
	}
}*/

void	InfHeart(void)
{
	WRITEU8(0x32C825A4, 0x24);
}

void    99Rupee(void)
{
	WRITEU32(0x32C825A0, 0x1869F);
}

/*void    3348Rupee(void)
{
	WRITEU32(0x32C825A0, 0xD14);
}*/

void      InfTimer(void)
{
	WRITEU32(0x32D58730, 0x14A0);
}

void      InfRetry(void)
{
	WRITEU32(0x32D5872C, 0xA);
}


