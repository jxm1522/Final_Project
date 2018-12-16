#pragma once;
#include <iostream>
#include <string>

using namespace std;

class BasicMonster
{
protected:
	int health_points, experience, level, damage;
public:

	// Setters and Getters
	void levelup(void);
	int gethealth(void);
	void sethealth(int x);
	int getexperience(void);
	void setexperience(int x);
	int getlevel(void);
	void setlevel(int x);
	int checkifDead(void);

	friend ostream  &operator<<(ostream &output, const BasicMonster Q);
		
};
