#pragma once;
#include <iostream>
#include <string>
using namespace std;

class Character
{
protected:
	int health_points, experience, level, damage;
	bool attackStatus;
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
	bool getAttackStatus();
	void setAttackStatus(bool);

	virtual int damageVal(); //Virtual Function to be overridden by child classes

};

