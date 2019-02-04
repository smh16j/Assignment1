/* File:	SimpleHammer.cpp
 * Author:	Shannon Hatcher <smh16j@my.fsu.edu>
 * CEN 4020
 * Assignment 1
 */
 
 #include "SimpleHammer.h"
 
 double SimpleHammer::hit(double armor) {
	double damage;
	if (armor < 30) {
		damage = hitPoints;
	}
	
	else {
		damage = hitPoints - armor;
	}
	
	if (damage < 0) {
		return 0;
	}
	return damage;
 }