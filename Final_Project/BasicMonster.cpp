#include "pch.h"
#include <iostream>
#include "BasicMonster.h"

using namespace std;


void BasicMonster::levelup(void)
{
	level += 1;
}

int BasicMonster::gethealth(void)
{
	return health_points;
}


void BasicMonster::sethealth(int x)
{
	health_points = x;
}

int BasicMonster::getexperience(void)
{
	return experience;
}

void BasicMonster::setexperience(int x)
{
	experience = x;
}

int BasicMonster::getlevel(void)
{
	return level;
}

void BasicMonster::setlevel(int x)
{
	level = x;
}

bool BasicMonster::checkifDead(void)
{
	if (health_points <= 0)
		return true;
	else
		return false;
}

string BasicMonster::getName() {
	return name;
}


int BasicMonster::damageVal()
{
	return 5 * level;
}