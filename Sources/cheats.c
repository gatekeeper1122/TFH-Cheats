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

void	InfHeart(void)
{
	WRITEU8(0x32C5BB74, 0x24);
}

void    Rupee99(void)
{
	WRITEU32(0x32C825A0, 0x1869F);
}

void      InfTimer(void)
{
	WRITEU32(0x32D58730, 0x14A0);
}

void      InfRetry(void)
{
	WRITEU32(0x32D5872C, 0xA);
}

void	InfEnergy(void)
{
	WRITEU32(0x32849744, 0x44160000);
}

void	InfFairy(void)
{
	WRITEU32(0x32D81F94, 0xA);
}

void	BearDigsCost(void)
{
	WRITEU32(0x28495E4, 0x300);
	WRITEU32(0x284A2E0, 0x0000);
}

void	SwordSuit(void)
{
	WRITEU32(0x28495E4, 0x301);
	WRITEU32(0x284A2E0, 0x0100);
}

void	KokiriCloth(void)
{
	WRITEU32(0x28495E4, 0x302);
	WRITEU32(0x284A2E0, 0x0200);
}

void	LegendDress(void)
{
	WRITEU32(0x28495E4, 0x303);
	WRITEU32(0x284A2E0, 0x0300);
}

void	ShowStopper(void)
{
	WRITEU32(0x28495E4, 0x304);
	WRITEU32(0x284A2E0, 0x0400);
}

void	GoronGarb(void)
{
	WRITEU32(0x28495E4, 0x305);
	WRITEU32(0x284A2E0, 0x0500);
}

void	ZoraCost(void)
{
	WRITEU32(0x28495E4, 0x306);
	WRITEU32(0x284A2E0, 0x0600);
}

void	HeartQueen(void)
{
	WRITEU32(0x28495E4, 0x307);
	WRITEU32(0x284A2E0, 0x0700);
}

void	BigBomb(void)
{
	WRITEU32(0x28495E4, 0x308);
	WRITEU32(0x284A2E0, 0x0800);
}

void	EnergyGear(void)
{
	WRITEU32(0x28495E4, 0x309);
	WRITEU32(0x284A2E0, 0x0900);
}

void	CosyParka(void)
{
	WRITEU32(0x28495E4, 0x30A);
	WRITEU32(0x284A2E0, 0x0A00);
}

void	SpinAttack(void)
{
	WRITEU32(0x28495E4, 0x30B);
	WRITEU32(0x284A2E0, 0x0B00);
}

void	NinjaGi(void)
{
	WRITEU32(0x28495E4, 0x30C);
	WRITEU32(0x284A2E0, 0x0C00);
}

void	RupeeReg(void)
{
	WRITEU32(0x28495E4, 0x30D);
	WRITEU32(0x284A2E0, 0x0D00);
}

void	Boomerang(void)
{
	WRITEU32(0x28495E4, 0x30E);
	WRITEU32(0x284A2E0, 0x0E00);
}

void	TriSuit(void)
{
	WRITEU32(0x28495E4, 0x30F);
	WRITEU32(0x284A2E0, 0x0F00);
}

void	LuckyLounge(void)
{
	WRITEU32(0x28495E4, 0x310);
	WRITEU32(0x284A2E0, 0x1000);
}

void	TorrentRobe(void)
{
	WRITEU32(0x28495E4, 0x311);
	WRITEU32(0x284A2E0, 0x1100);
}

void	LadyEnsemble(void)
{
	WRITEU32(0x28495E4, 0x312);
	WRITEU32(0x284A2E0, 0x1200);
}

void	SemiCursed(void)
{
	WRITEU32(0x28495E4, 0x313);
	WRITEU32(0x284A2E0, 0x1300);
}

void	TimeLess(void)
{
	WRITEU32(0x28495E4, 0x314);
	WRITEU32(0x284A2E0, 0x1400);
}

void	LightArm(void)
{
	WRITEU32(0x28495E4, 0x315);
	WRITEU32(0x284A2E0, 0x1500);
}

void	Cheetah(void)
{
	WRITEU32(0x28495E4, 0x316);
	WRITEU32(0x284A2E0, 0x1600);
}

void	HeartJack(void)
{
	WRITEU32(0x28495E4, 0x317);
	WRITEU32(0x284A2E0, 0x1700);
}

void	HeroTunic(void)
{
	WRITEU32(0x28495E4, 0x318);
	WRITEU32(0x284A2E0, 0x1800);
}

void	GustGarb(void)
{
	WRITEU32(0x28495E4, 0x319);
	WRITEU32(0x284A2E0, 0x1900);
}

void	HammerWear(void)
{
	WRITEU32(0x28495E4, 0x31A);
	WRITEU32(0x284A2E0, 0x1A00);
}

void	DuneWalker(void)
{
	WRITEU32(0x28495E4, 0x31B);
	WRITEU32(0x284A2E0, 0x1B00);
}

void	RoboWear(void)
{
	WRITEU32(0x28495E4, 0x31C);
	WRITEU32(0x284A2E0, 0x1C00);
}

void	FireBlazer(void)
{
	WRITEU32(0x28495E4, 0x31D);
	WRITEU32(0x284A2E0, 0x1D00);
}

void	TingleTight(void)
{
	WRITEU32(0x28495E4, 0x31E);
	WRITEU32(0x284A2E0, 0x1E00);
}

void	SerpentToga(void)
{
	WRITEU32(0x28495E4, 0x31F);
	WRITEU32(0x284A2E0, 0x1F00);
}

void	SwordMaster(void)
{
	WRITEU32(0x28495E4, 0x320);
	WRITEU32(0x284A2E0, 0x2000);
}

void	DapperSpinner(void)
{
	WRITEU32(0x28495E4, 0x321);
	WRITEU32(0x284A2E0, 0x2100);
}

void	CheerOutfit(void)
{
	WRITEU32(0x28495E4, 0x322);
	WRITEU32(0x284A2E0, 0x2200);
}

void	CactoCloth(void)
{
	WRITEU32(0x28495E4, 0x323);
	WRITEU32(0x284A2E0, 0x2300);
}

void	Linebeck(void)
{
	WRITEU32(0x28495E4, 0x324);
	WRITEU32(0x284A2E0, 0x2400);
}

void	DeityMail(void)
{
	WRITEU32(0x28495E4, 0x325);
	WRITEU32(0x284A2E0, 0x2500);
}


	
	
