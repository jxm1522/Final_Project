#pragma once;
#include <iostream>
#include "BasicMonster.h"
using namespace std;

class Character
{
private:
	int health_points, experience, level;
	
public:
	friend class BasicMonster;
	// Setters and Getters
	void levelup(void);
	int gethealth(void);
	void sethealth(int x);
	int getexperience(void);
	void setexperience(int x);
	int getlevel(void);
	void setlevel(int x);

	// Interactive functions
	virtual void attack(const BasicMonster &);
};

