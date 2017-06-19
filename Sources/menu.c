#include "cheats.h"
#include "notes.h"

#define ENTRY_COUNT 300

typedef struct s_menu
{
    int         count;
    int         status;
    u32         f[ENTRY_COUNT];
    u32         s[ENTRY_COUNT];
    int         a[ENTRY_COUNT];
    const char  *t[ENTRY_COUNT];
    const char  *n[ENTRY_COUNT];
    void        (*fp[ENTRY_COUNT])();
}             t_menu;


typedef void    (*FuncPointer)(void);
extern t_menu menu;


/*
void    new_super_unselectable_entry(char *str, FuncPointer function)
{
    int index;

    index = menu.count;
    if (index >= 300)
        return;
    new_unselectable_entry(str);
    menu.f[index] |= BIT(0) | BIT(1);
    menu.fp[index] = function;
}
*/

void with_note_common(const char *name, const char *note, void (*cheatfunction)(void), int type)
{
    int     index;

    if (type == 0)
        index = new_entry((char *)name, cheatfunction);
    else if (type == 1)
        index = new_radio_entry((char *)name, cheatfunction);
    else if (type == 2)
        index = new_spoiler((char *)name);
    else return;
    set_note(note, index);
}

inline void new_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 0);
}

inline void new_radio_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
    with_note_common(name, note, cheatfunction, 1);
}

inline void new_spoiler_with_note(const char *name, const char *note)
{
    with_note_common(name, note, NULL, 2);
}

char	*builder_name = "xXPaulMCXx & Slattz";

static inline void  smenu(void)
{   new_spoiler("Infinite Codes");
		new_entry("Infinite Hearts", InfHeart);
		new_entry("Infinite Rupees", Rupee99);
		new_entry("Infinite Time", InfTimer);
		new_entry("Infinite Retries", InfRetry);
		new_entry_with_note("99 Items", Item99note, Item99);
	exit_spoiler();
	new_spoiler("Outfits");
		new_radio_entry("Bear Minimum Digs", BearDigsCost);
		new_radio_entry("Sword Suit", SwordSuit);
		new_radio_entry("Kokiri Clothes", KokiriCloth);
		new_radio_entry("Legendary Dress", LegendDress);
		new_radio_entry("Showstopper", ShowStopper);
		new_radio_entry("Goron Garb", GoronGarb);
		new_radio_entry("Zora Costume", ZoraCost);
		new_radio_entry("Quenn of Hearts", HeartQueen);
		new_radio_entry("Big Bomb Outfit", BigBomb);
		new_radio_entry("Energy Gear", EnergyGear);
		new_radio_entry("Cosy Parka", CosyParka);
		new_radio_entry("Spin Attack Attire", SpinAttack);
		new_radio_entry("Ninja Gi", NinjaGi);
		new_radio_entry("Rupee Regalia", RupeeReg);
		new_radio_entry("Boomeranger", Boomerang);
		new_radio_entry("Tri Suit", TriSuit);
		new_radio_entry("Lucky Loungewear", LuckyLounge);
		new_radio_entry("Torrent Robe", TorrentRobe);
		new_radio_entry("Lady's Ensemble", LadyEnsemble);
		new_radio_entry("Semi-Cursed Tights", SemiCursed);
		new_radio_entry("Timeless Tunic", TimeLess);
		new_radio_entry("Light Armour", LightArm);
		new_radio_entry("Cheetah Costume", Cheetah);
		new_radio_entry("Jack of Hearts", HeartJack);
		new_radio_entry("Hero's Tunic", HeroTunic);
		new_radio_entry("Gust Garb", GustGarb);
		new_radio_entry("Hammerwear", HammerWear);
		new_radio_entry("Dunewalker Duds", DuneWalker);
		new_radio_entry("Robo Wear", RoboWear);
		new_radio_entry("Fire Blazer", FireBlazer);
		new_radio_entry("Tingle Tights", TingleTight);
		new_radio_entry("Serpent's Toga", SerpentToga);
		new_radio_entry("Sword Master Suit", SwordMaster);
		new_radio_entry("Dapper Spinner Kit", DapperSpinner);
		new_radio_entry("Cheer Outfit", CheerOutfit);
		new_radio_entry("Cacto Clothes", CactoCloth);
		new_radio_entry("Linebeck's Uniform", Linebeck);
		new_radio_entry("Fierce Deity Mail", DeityMail);
	exit_spoiler();
}

void    my_menus(void)
{
    u32 tid;
    
    set_hid_address(0x10002000); //This is in order to unlock the advanced HID capabilities such as Touchscreen and the stick (No N3DS hid for the moment)
    tid = get_tid_low();
    if (tid == 0x177000)
    {
		assign_region(EUR);
		new_unselectable_entry("TFH NTR Cheats v1.2 EUR");
    }
/*	
	else if (tid == 0x176f00)
    {
		assign_region(USA);
		new_unselectable_entry("TFH NTR Cheats v1.2 USA");
    }
	
	else if (tid == 0xXXXXXX)
    {
		assign_region(JAP);
		new_unselectable_entry("TFH NTR Cheats v1.2 JAP");
    }*/

   else
   {
        new_unselectable_entry("You're Using An Unsupported TitleID!");			
		new_unselectable_entry("This plugin only supports the");
		new_unselectable_entry("Following TitleIDs:");
		new_unselectable_entry("0004000000177000 (EUR)");
		//new_unselectable_entry("0004000000176f00 (USA)");
		//new_unselectable_entry("0004000000XXXXXX (JAP)");
		
        return;
    }
    smenu();
}





