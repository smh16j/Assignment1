/* File:	CrazyRandomSword.cpp
 * Author:	Shannon Hatcher <smh16j@my.fsu.edu>
 * CEN 4020
 * Assignment 1
 */
 
#include "CrazyRandomSword.h"
#include <ctime>
#include <cstdlib>

 
 double CrazyRandomSword::hit(double armor) {
	double damage;
	
	srand(time(NULL));

	double hitPoints = 7 + (rand() % 94);
	double ignore = 2 + (rand() % (armor/3) - 1);
	double diff = 100 - ignore;
	
	damage = hitPoints - (armor * diff);
	
	if (damage < 0) {
		return 0;
	}
	return damage;
 }