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

int Character::damage()
{
	return 10 * level;
}

void Character::fight(const BasicMonster &M)
{
	int temp, enemy_damage;

	enemy_damage = 10 * M.getlevel;

	temp = M.gethealth - this->damage;
	M.sethealth(temp);

	health_points = this->health_points - enemy_damage;


	cout << "You attack the enemy!";
	cout << "You do " << this->damage << " points of damage!";
	cout << "The enemy does " << enemy_damage << " points of damage back!";
}