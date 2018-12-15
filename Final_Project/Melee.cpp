#include "pch.h"
#pragma once
#include "pch.h"

#include <iostream>
#include "Melee.h"
using namespace std;

Melee::Melee()
{
	health_points = 50;
	experience = 0;
	level = 1;
}

int Melee::doDamage()
{
	return 15*level;
}
