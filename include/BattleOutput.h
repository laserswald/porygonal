/*
 * BattleOutput.h
 *
 *  Created on: Jul 8, 2011
 *      Author: ben
 */

#ifndef BATTLEOUTPUT_H_
#define BATTLEOUTPUT_H_

#include "Pokemon.h"

class BattleOutput {
public:
	BattleOutput();
	virtual ~BattleOutput();

	virtual void printBattleEvent(char* event);
	virtual void showPokeStatus(Pokemon* pkmn);

};

#endif /* BATTLEOUTPUT_H_ */
