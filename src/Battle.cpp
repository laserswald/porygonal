/*
 * Battle.cpp
 *
 *  Created on: Jul 5, 2011
 *      Author: ben
 */

#include "Battle.h"

Battle::Battle(Trainer* player, Trainer* challenger)
 {
	// TODO Auto-generated constructor stub

}

Battle::Battle(Trainer* challenger){

}

Battle::~Battle() {
	// TODO Auto-generated destructor stub
}
int Battle::CalculateDamage(Pokemon* target){
	//checks the effectivity of the move.
	if (getBaseDamage() > 0) //ie. not Splash
	{
		float effectiveMultiplier = Type::match(typing, target->getPrimaryType(), target->getSecondaryType());

		if (effectiveMultiplier > 1) {
			cout << "It's super effective!" << endl;
		}
		if (effectiveMultiplier == 0) {
			cout << "It didn't affect foe " << target->getName() << "..." << endl;
		}
		if (effectiveMultiplier < 1) {
			cout << "It's not very effective." << endl;
		}
	}else{
		//OH GOD IT'S SPLASH
		cout << "But nothing happened." << endl;
	}
}
