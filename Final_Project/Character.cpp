#include "pch.h"
#include <iostream>
#include "Character.h"

using namespace std;

void Character::levelup(void)
{
	level += 1;
}

int Character::gethealth(void)
{
	return health_points;
}

void Character::sethealth(int x)
{
	health_points = x;
}

int Character::getexperience(void)
{
	return experience;
}

void Character::setexperience(int x)
{
	experience = x;
}

int Character::getlevel(void)
{
	return level;
}

void Character::setlevel(int x)
{
	level = x;
}

void Character::attack(const BasicMonster &Monster) {

}
