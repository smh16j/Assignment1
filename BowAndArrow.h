/* File:	BowAndArrow.h
 * Author:	Shannon Hatcher <smh16j@my.fsu.edu>
 * CEN 4020
 * Assignment 1
 */

#include <string>
#include "Weapon.h"

#ifndef BOWANDARROW_H
#define BOWANDARROW_H

/* Defines BowAndArrow (hitpoints = 66, but if armor < 50 then 
 * BowAndArrow will ignore 10% of armor points)
 */
 
class BowAndArrow : public Weapon {
public:
	// Calls Weapon(name, hitpoints) constructor
	BowAndArrow() : Weapon("Bow and Arrow", 66.0) {
	}
	
	virtual ~BowAndArrow() {};
	
	virtual double hit(double armor);
	
};

#endif /* BOWANDARROW_H */