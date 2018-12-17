#include "pch.h"
#include <iostream>
#include "Melee.h"
using namespace std;

Melee::Melee()
{
	damage = 30;
	health_points = 60;
	experience = 0;
	level = 1;
}

int Melee::damageVal()
{
	int damageRand = rand() % 16;
	return damage * level + damageRand;
}

void Melee::setName(string newName) {
	name = newName + "(Knight)";
}