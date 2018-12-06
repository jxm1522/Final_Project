#pragma once;
#include <iostream>
#include "Character.h"
using namespace std;

class BasicMonster
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
		
	virtual void attack(int x, int y);
};
