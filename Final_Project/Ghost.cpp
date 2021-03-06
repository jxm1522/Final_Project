#include "pch.h"
#include <iostream>
#include "pch.h"

#include "Ghost.h"
using namespace std;

Ghost::Ghost(int cur_level)
{
	name = "Ghost";
	health_points = 70;
	experience = 10;
	level = cur_level;
	damage = 10;
}

Ghost::Ghost(int health, int exp, int cur_level)
{
	name = "Ghost";
	health_points = health;
	experience = exp;
	level = cur_level;
	damage = 13;
}

int Ghost::special()
{
	cout << "Ghost uses special ability! You get spooked and flee!";

	return 10;
}

string Ghost::getName() {
	return name;
}

int Ghost::damageVal()
{
	int damageRand = rand() % 5;
	return damage * level + damageRand;
}