#include "pch.h"
#pragma once
#include <iostream>
#include "Melee.h"
using namespace std;

Melee::Melee()
{
	health_points = 50;
	experience = 0;
	level = 1;
}

int Melee::damage()
{
	return 15*level;
}
