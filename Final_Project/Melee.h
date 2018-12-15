#pragma once
#include  <iostream>
#include "Character.h"
using namespace std;

class Melee : protected Character
{
public:
	
	Melee();
	int doDamage();
};
