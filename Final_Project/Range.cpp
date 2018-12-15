#include "pch.h"
#include <iostream>
#include "Range.h"
using namespace std;

Range::Range()
{
	health_points = 40;
	experience = 0;
	level = 1;
}

int Range::damage()
{
	return 11*level;
}
