#include "pch.h"
#include <iostream>
#include "Character.h"
#include "BasicMonster.h"
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

int Character::doDamage()
{
	return 10 * level;
}

void Character::fight(BasicMonster &M)
{
	int temp, enemy_damage;

	enemy_damage = 10 * (M.getlevel);

	temp = M.gethealth - this->damage;
	M.sethealth(temp);

	health_points = this->health_points - enemy_damage;


	cout << "You attack the enemy!";
	cout << "You do " << this->damage << " points of damage!";
	cout << "The enemy does " << enemy_damage << " points of damage back!";
}