#include "pch.h"
#include "Tank.h"
#include "Character.h"

#include <iostream>

Tank::Tank(){
	damage = 15;
	health_points = 90;
	experience = 0;
	level = 1;
}

int Tank::damageVal()
{
	int damageRand = rand() % 7;
	return damage * level + damageRand;
}

void Tank::setName(string new_name) {
	name = new_name + "(Giant)";
}