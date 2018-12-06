#pragma once;
#include <iostream>
#include "BasicMonster.h"
using namespace std;

class Character
{
private:
	int health_points, experience, level;
	
public:
	
	// Setters and Getters
	void levelup(void);
	int gethealth(void);
	void sethealth(int x);
	int getexperience(void);
	void setexperience(int x);
	int getlevel(void);
	void setlevel(int x);

	// Damage function - will be overriden in derived classes
	int damage();
	
	// Interactive functions
	virtual void fight(const BasicMonster &M);
};

