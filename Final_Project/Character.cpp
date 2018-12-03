#include "pch.h"
#include <iostream>
#include "Character.h"
//branch test
using namespace std;

void Character::levelUp()
{
	level += 1;
}

int Character::getHealth(void)
{
	return health_points;
}

void Character::setHealth(int x)
{
	health_points = x;
}

int Character::getExperience(void)
{
	return experience;
}

void Character::setExperience(int x)
{
	experience = x;
}

int Character::getLevel(void)
{
	return level;
}

void Character::setLevel(int x)
{
	level = x;
}

int Character::getArmor() {

}

void Character::setArmor(int Armor) {

}

void Character::attack(const BasicMonster &Monster) {

}
