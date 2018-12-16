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
	return 11*level;
}

void Range::setName(string newName) {
	name = newName + "(Range)";
}
