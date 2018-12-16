#pragma once
#include  <iostream>
#include "Character.h"
using namespace std;

class Melee : public Character
{
//private: 
	//int health_points, experience, level;

public:
	
	Melee();
	int damageVal();
	void setName(string);
};
