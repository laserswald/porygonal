#include <stdlib.h>
#include <math.h>

int calcDamage(int srcLevel, int srcAttack, int movePower, int trgDefense, int stab, float typeMod){
	float final;
	int randnum = rand() % 38 + 217;
	int a = ((2*srcLevel)/5+2);
	final = (((((a*srcAttack*movePower)/trgDefense)+2)*stab)*typeMod)/255;
	return floor(final);
}