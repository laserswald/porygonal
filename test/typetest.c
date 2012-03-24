#include "porygonal/type.h"

int main(){

	int attack, defend;
	for(attack = 0; attack<17; attack++){
		char* attackname = getTypeName(attack);
		for (defend = 0; defend<17; defend++){
			float typeMod = typeModification(attack, defend, 0);
			char* defendname = getTypeName(defend);
			printf("%s -> %s = %f \n", attackname, defendname, typeMod);
		}
	}
	getchar();
}