/*
 * Pokemon.cpp
 *
 *  Created on: Jul 5, 2011
 *      Author: ben
 */

#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon(int Species) {
	// TODO Auto-generated constructor stub

}

Pokemon::~Pokemon() {
	// TODO Auto-generated destructor stub
}

void Pokemon::gainExperience(Pokemon *defeated)
{
}

//int Pokemon::calculateStat(Stat theStat) {
//	if (theStat == HP){
//		if (species == 292){
//			return 1;
//		} else {
//
//			return
//		}
//	}
//}

void Pokemon::performAttack (int attackNum, Pokemon* target)
{
	//retrieves the move to use.
	Move currentMove = *moves[attackNum];

	// Prints the use of the move.
	cout << target->getName() << " used " << currentMove.getName() << endl;

	//Prints any extra text associated with the move.
	if (currentMove.getExtraText() != "")
	{
		cout << currentMove.getExtraText() << endl;
	}


}


