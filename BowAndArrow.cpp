/* File:	BowAndArrow.cpp
 * Author:	Shannon Hatcher <smh16j@my.fsu.edu>
 * CEN 4020
 * Assignment 1
 */
 
 #include "BowAndArrow.h"
 
 double BowAndArrow::hit(double armor) {
	double damage;
	if (armor < 50) {
		damage = hitPoints - (armor * 0.9);
	}
	
	else {
		damage = hitPoints - armor;
	}
	
	if (damage < 0) {
		return 0;
	}
	return damage;
 }