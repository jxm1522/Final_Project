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

int Character::checkifDead(void)
{
	if (health_points < 0)
		return true;
	else 
		return false;
}

string Character::getName() {
	return name;
}

void Character::setName(string new_name) {
	name = new_name;
}

int Character::damageVal()
{
	return 10 * level;
}

void Character::fight(BasicMonster &M)
{
	int temp, enemy_damage;

	enemy_damage = 10 * M.getlevel();

	temp = M.gethealth() - damageVal();
	M.sethealth(temp);

	health_points = this->health_points - enemy_damage;

	cout << "You do " << damageVal() << " points of damage!" << endl;
	cout << "The enemy does " << enemy_damage << " points of damage back!" << endl;
}