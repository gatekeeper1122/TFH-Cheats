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
//void	Mat99(void);
void	InfHeart(void);
void    99Rupee(void);
void    InfTimer(void);
void    InfRetry(void);
//void    3348Rupee(void);

#endif
