#pragma once;
#include <iostream>
#include "BasicMonster.h"
using namespace std;
//branch test
class Character
{
private:
	int health_points, experience, level, armor;
	
public:
	friend class BasicMonster;
	// Setters and Getters
	void levelUp();
	int getHealth(void);
	void setHealth(int x);
	int getExperience(void);
	void setExperience(int x);
	int getLevel(void);
	void setLevel(int x);
	int getArmor(void);
	void setArmor(int x);

	// Interactive functions
	virtual void attack(const BasicMonster &);
};

