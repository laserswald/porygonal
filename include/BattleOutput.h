/*
 * BattleOutput.h
 *
 *  Created on: Jul 8, 2011
 *      Author: ben
 */

#ifndef BATTLEOUTPUT_H_
#define BATTLEOUTPUT_H_

#include <iostream>
#include "Pokemon.h"
#include "Trainer.h"

class BattleOutput {
public:
	BattleOutput();
	virtual ~BattleOutput();

	void printBattleEvent(char* event);
	void showPokeStatus(Pokemon* pkmn);
	void getChallenged(Trainer* trainer);

};

#endif /* BATTLEOUTPUT_H_ */
