/*
 * CursesOutput.cpp
 *
 *  Created on: Jul 8, 2011
 *      Author: ben
 */

#include "CursesOutput.h"

CursesOutput::CursesOutput() {
	// TODO Auto-generated constructor stub
	initscr();			/* Start curses mode 		*/
	raw();				/* Line buffering disabled	*/
	keypad(stdscr, TRUE);		/* We get F1, F2 etc..		*/
	noecho();			/* Don't echo() while we do getch */

	outputWin = newwin();
	statusWin;
	yourPokeWin;
	opponentPokeWin;


}

CursesOutput::~CursesOutput() {
	// TODO Auto-generated destructor stub
}

void CursesOutput::printBattleEvent(char* event)
{

}
