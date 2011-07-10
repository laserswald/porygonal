/*
 * CursesOutput.h
 *
 *  Created on: Jul 8, 2011
 *      Author: ben
 */

#ifndef CURSESOUTPUT_H_
#define CURSESOUTPUT_H_

#include "BattleOutput.h"
#include <ncurses.h>

class CursesOutput: public BattleOutput {
	WINDOW outputWin;
	WINDOW statusWin;
	WINDOW yourPokeWin;
	WINDOW opponentPokeWin;

public:
	CursesOutput();
	virtual ~CursesOutput();

	void printBattleEvent(char* event);
	void showPokeStatus(Pokemon* poke);
};

#endif /* CURSESOUTPUT_H_ */
