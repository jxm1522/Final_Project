#include "pch.h"
#include <iostream>
#include "pch.h"

#include "Ghost.h"
using namespace std;

Ghost::Ghost(int cur_level)
{
	health_points = 50;
	experience = 10;
	level = cur_level;
}

Ghost::Ghost(int health, int exp, int cur_level)
{
	health_points = health;
	experience = exp;
	level = cur_level;
}

int Ghost::special()
{
	cout << "Ghost uses special ability! You get spooked and flee!";

	return 10;
}

string Ghost::getName() {
	string Ghosty;
	return Ghosty;
}