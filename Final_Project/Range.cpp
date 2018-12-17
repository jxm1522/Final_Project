#include "pch.h"
#include <iostream>
#include "Range.h"
using namespace std;

Range::Range()
{
	damage = 35;
	health_points = 45;
	experience = 0;
	level = 1;
}

int Range::damageVal()
{
	int damageRand = rand() % 10;
	return damage * level + damageRand;
}

void Range::setName(string newName) {
	name = newName + "(Archer)";
}
