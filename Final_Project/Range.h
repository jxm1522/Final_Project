#pragma once
#include  <iostream>
#include "Character.h"

using namespace std;

class Range : public Character
{
private:
	int health_points, experience, level;

public:
	Range();
	int damageVal();
	void setName(string);
};
