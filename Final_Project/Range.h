#pragma once
#include  <iostream>
#include "Character.h"
using namespace std;

class Range : protected Character
{
public:
	Range();
	int doDamage();
};
