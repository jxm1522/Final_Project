#include "pch.h"
#include <iostream>
#include "BasicMonster.h"
#include "Character.h"
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

void BasicMonster::attack(const Character &Char) {

}