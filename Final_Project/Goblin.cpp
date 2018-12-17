#include "pch.h"
#include <iostream>
#include "pch.h"

#include "Goblin.h"
using namespace std;

Goblin::Goblin(int cur_level)
{
	name = "Goblin";
	health_points = 50;
	experience = 10;
	level = cur_level;
	damage = 10;
}

Goblin::Goblin(int health, int exp, int cur_level)
{
	name = "Goblin";
	health_points = health;
	experience = exp;
	level = cur_level;
	damage = 10;
}


string Goblin::getName() {
	return name;
}

int Goblin::damageVal()
{
	return damage * level;
}