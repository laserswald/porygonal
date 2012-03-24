
#ifndef STAT_H
#define STAT_H

enum Stat{
	Stat_HP = 0,
	Stat_Attack,
	Stat_Defense,
	Stat_SpecialAttack,
	Stat_SpecialDefense,
	Stat_Speed,
	Stat_Special = 3 // For old timesake.
};

int calculateStat(enum Stat s, int iv, int ev, int base);

#endif
