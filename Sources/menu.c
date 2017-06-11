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
{
	new_entry_with_note("99 Items", Item99note, Item99);
	new_entry_with_note("99 Materials", Mat99note, Mat99);
	new_entry("99.999 Rupees", Rup_99);
	new_entry("Inf. Hearts", Inf_heart);
	new_entry("Inf. Retries", Inf_retry);
	new_entry("Inf. Time", Inf_time);
	new_entry("Inf. Rupees", Max_rupee);
	new_entry("Freeze Time", Time_freeze);
}

void    my_menus(void)
{
    u32 tid;
    
    set_hid_address(0x10002000); //This is in order to unlock the advanced HID capabilities such as Touchscreen and the stick (No N3DS hid for the moment)
    tid = get_tid_low();
    if (tid == 0x177000)
    {
		assign_region(EUR);
		new_unselectable_entry("TFH NTR Cheats v1.0 EUR");
    }
/*	
	else if (tid == 0x176f00)
    {
		assign_region(USA);
		new_unselectable_entry("TFH NTR Cheats v1.0 USA");
    }
	
	else if (tid == 0xXXXXXX)
    {
		assign_region(JAP);
		new_unselectable_entry("TFH NTR Cheats v1.0 JAP");
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



