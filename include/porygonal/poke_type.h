#ifndef POKETYPE_H
#define POKETYPE_H

float checkTypeEffectivity(Move* move, Pokemon* poke);

enum Type{
	NoType = 0,
	Normal,
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
};

#endif
