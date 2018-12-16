#include "pch.h"
#include "Tank.h"
#include "Character.h"

#include <iostream>

Tank::Tank(){
	damage = 15;
	health_points = 70;
	experience = 0;
	level = 1;
}

void Tank::setName(string new_name) {
	name = new_name + "(Giant)";
}