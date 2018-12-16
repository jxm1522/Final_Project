#include "pch.h"
#include <iostream>
#include "Range.h"
using namespace std;

Range::Range()
{
	damage = 35;
	health_points = 40;
	experience = 0;
	level = 1;
}

int Range::damageVal()
{
	return damage * level;
}

void Range::setName(string newName) {
	name = newName + "(Archer)";
}
