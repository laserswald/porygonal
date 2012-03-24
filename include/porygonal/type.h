
#ifndef TYPE_H
#define TYPE_H


typedef enum type{
	Normal = 0,
	Fire,
	Water,
	Electric,
	Grass,
	Ice,
	Fighting,
	Poison,
	Ground,
	Flying,
	Psychic,
	Bug,
	Rock,
	Ghost,
	Dragon,
	Dark,
	Steel	
}Type;

float typeModification(int moveType, int pokefirst, int pokesecond);
double sameTypeAttackBonus(int moveType, int targetFirst, int targetSecond);
char* getTypeName(Type type);

#endif
