/* File:	SimpleHammer.h
 * Author:	Shannon Hatcher <smh16j@my.fsu.edu>
 * CEN 4020
 * Assignment 1
 * Created on February 3, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/* Defines SimpleHammer (hitpoints = 25, if armor < 30 then hammer
 * will ignore all armor points)
 */
 
class SimpleHammer : public Weapon {
public:
	// //Calls Weapon(name, hitpoints) constructor
	SimpleHammer() : Weapon("Simple hammer", 25.0) {
	}
	
	virtual ~SimpleHammer() {};
	
	virtual double hit(double armor);
	
};

#endif /* SIMPLEHAMMER_H */