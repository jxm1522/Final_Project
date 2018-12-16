#pragma once
#include  <iostream>
#include "Character.h"
using namespace std;

class Melee : public Character
{
public:
	
	Melee();
	int doDamage();
};
