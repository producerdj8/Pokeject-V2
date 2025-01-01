#include "Charmender.h"
Charmender::Charmender(){
	name = "Charmender";
	type = "Fire";
	hp = 40;
	moves.setMove1("Amber",40,"Fire");
	moves.setMove1("Burn",30,"Fire");
	moves.setMove1("Tackle",40,"Normal");
	moves.setMove1("Water Pump",40,"Water");
}
int Charmender::Amber(){
	//fancy grapichal actions
	return moves.getDamage1();
}
int Charmender::Burn(){
	//fancy grapichal actions
	return moves.getDamage2();
}
int Charmender::Tackle(){
	//fancy grapichal actions
	return moves.getDamage3();
}
int Charmender::WaterPump(){
	//fancy grapichal actions
	return moves.getDamage4();
}//probab usage foe.hpupdate(charmender.amber())
