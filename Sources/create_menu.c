#include "cheats.h"

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

char    *builder_name = "xXPaulMCXx";

    //static const char * const t2i_note = "Type item ID and send it into chat,\n\nPress X+D Pad Right,\n\nTo write item to slot 1!";
	
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


char    tan_level_buffer[40] = "First init";
int     g_increase_menu_index = 0;
int     g_decrease_menu_index = 0;

static inline void  smenu(void)
{
    update_tan_entry();
	