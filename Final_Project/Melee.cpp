#include "pch.h"
#include <iostream>
#include "Melee.h"
using namespace std;

Melee::Melee()
{
	damage = 30;
	health_points = 50;
	experience = 0;
	level = 1;
}

int Melee::doDamage()
{
	return 15*level;
}

void Melee::setName(string newName) {
	name = newName + "(Knight)";
}