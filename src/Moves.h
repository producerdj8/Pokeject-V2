#pragma once
#include <iostream>
#include <string>
class Moves{
public:
	std::string m1name,m2name,m3name,m4name;
	std::string m1type,m2type,m3type,m4type;
	int m1dmg,m2dmg,m3dmg,m4dmg;

	Moves();
	~Moves();

	void setMove1(std::string n,int d,std::string t);
	void setMove2(std::string n,int d,std::string t);
	void setMove3(std::string n,int d,std::string t);
	void setMove4(std::string n,int d,std::string t);

	int getDamage1();
	int getDamage2();
	int getDamage3();
	int getDamage4();
	
	std::string getType1();
	std::string getType2();
	std::string getType3();
	std::string getType4();
};