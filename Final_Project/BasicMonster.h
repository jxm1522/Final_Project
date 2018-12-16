#pragma once;
#include <iostream>
#include <string>

using namespace std;

class BasicMonster
{
protected:
	int health_points, experience, level, damage;
	string name;
public:

	// Setters and Getters
	void levelup(void);
	int gethealth();
	void sethealth(int x);
	int getexperience(void);
	void setexperience(int x);
	int getlevel(void);
	void setlevel(int x);
	bool checkifDead(void);
	string getName();
		
};
