#ifndef CHEATS_H
#define CHEATS_H

#include "../Includes/plugin.h"

/*
EUR Addresses
*/

#define		ITEMS_ADDR				0x32C825A4
#define		MATERIALS_ADDR			0x22C5BBA4

enum
{
	EUR = 0,
	USA,
	JAP
};

void    assign_region(u32 region);

void	Item99(void);
void	Mat99(void);
void	OldInfHeart(void);
void	Old99Rupee(void);
void	Old3348Rupee(void);

#endif
