#include "Arbok.h"

Arbok::Arbok(){
	name = "Arbok";
	type = "Poison";
	hp = 60;
	moves.setMove1("Bite",20,"Dark");
	moves.setMove1("Acid",30,"Poison");
	moves.setMove1("Wrap",15,"Normal");
	moves.setMove1("Poison Sting",15,"Poison");
}

int Arbok::Bite(){
	//graphical actions
	return moves.getDamage1();
}
int Arbok::Acid(){
	//graph
	return moves.getDamage2();
}
int Arbok::Wrap(){
	//graph
	return moves.getDamage3();
}
int Arbok::PoisonSting(){
	//graph
	return moves.getDamage4();
}