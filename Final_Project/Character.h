#pragma once;
#include <iostream>
#include "BasicMonster.h"
using namespace std;

class Character
{
private:
	int health_points, experience, level, armor, damage;
	
public:
	
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

	int damage();

	// Interactive functions
	void fight(const BasicMonster &);
};

