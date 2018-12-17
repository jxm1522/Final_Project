#include <iostream>
#include "BasicMonster.h"
using namespace std;


class Goblin : public BasicMonster
{
public:

	Goblin(int cur_level);
	Goblin(int health, int exp, int cur_level);
	string getName();
	int damageVal();
};
