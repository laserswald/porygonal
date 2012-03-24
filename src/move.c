//      move.c
//      
//      Copyright 2011 Ben Davenport-Ray <laserdude11@gmail.com>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.

#include <stdlib.h>
#include "porygonal/move.h"
#include "porygonal/pokemon.h"
#include "porygonal/type.h"

Move* newMove(char* name, int base, int type, int category, int (*damage_fn)(Move*, Pokemon*, Pokemon*)){
	Move* mov =(Move*)malloc(sizeof(Move));
	mov->name = name;
	mov->basePower = base;
	mov->type = type;
	mov->category = category;
	mov->damage_fn = damage_fn;
	return mov;
}

void Move_apply(Move* mv, Pokemon* user, Pokemon* target){
	mv->damage_fn(mv, user, target);
}

void deleteMove(Move* mv){
	free(mv->name);
	free(mv->extraText);
	free(mv->damage_fn);
	free(mv);
	mv = NULL;
}

