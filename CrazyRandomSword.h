/* File:	CrazyRandomSword.h
 * Author:	Shannon Hatcher <smh16j@my.fsu.edu>
 * CEN 4020
 * Assignment 1
 */

#include <string>
#include "Weapon.h"
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/* Defines CrazyRandomSword (hitpoints = random integer (7 - 100)
 * Ignores a random amount of armor points (2 - (armor/3))
 */
 
class CrazyRandomSword : public Weapon {
public:
	// Calls Weapon(name, hitpoints) constructor
	CrazyRandomSword() : Weapon("Crazy random sword", 0.0) {
	}
	
	virtual ~CrazyRandomSword() {};
	
	virtual double hit(double armor);
	
};

#endif /* CRAZYRANDOMSWORD_H */