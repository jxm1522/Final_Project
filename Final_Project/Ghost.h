#include <iostream>
#include "BasicMonster.h"
using namespace std;


class Ghost : public BasicMonster
{
private:
	//int health_points, experience, level;
	

public:

	Ghost(int cur_level);
	Ghost(int health, int exp, int cur_level);
	int special();
	string getName();
};
