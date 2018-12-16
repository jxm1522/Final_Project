#pragma once;
#include <iostream>
#include "BasicMonster.h"
#include <string>
using namespace std;

class Character
{
protected:
	int health_points, experience, level, armor, damage;
	string name;
public:
	
	// Setters and Getters
	void levelUp();
	int getHealth(void);
	void setHealth(int x);
	int getExperience(void);
	void setExperience(int x);
	int getLevel(void);
	void setLevel(int x);
	int checkifDead(void);
	string getName();
	void setName(string);
	//int getArmor(void);
	//void setArmor(int x);

	virtual int damageVal(); //Virtual Function to be overridden by child classes

	// Interactive functions
	void fight(BasicMonster &);
};

