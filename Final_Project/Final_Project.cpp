// Final_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Melee.h"
#include "Range.h"
#include "Ghost.h"
using namespace std;


int main()
{
	char name[100];
	char melee_name[100], range_name[100];
	int current_level, choice;

	cout << "Hello, please enter your name: ";
	cin >> name;
	cout << "Greetings, " << name << endl;
	cout << "Your party currently consists of a melee hero, a ranged hero, and " << endl;		// edit this 
	cout << "Please name the characters in your party:";
	cout << "Melee Hero's Name: ";							//change as necessary
	cin >> melee_name;
	cout << "Ranged Hero's Name: ";
	cin >> range_name;									//edit this

	Melee melee1();
	Range range1();
	cout << "You descend into the dungeon..." << endl;

	cout << "L E V E L    O N E" << endl;
	cout << endl;
	current_level = 1;

	cout << "You encounter a ghoul!" << endl;
	Ghost ghosty1();

	cout << "Which character would you like to attack with? ";
	cout << "(1) for " << melee_name << "or (2) for " << range_name;		//edit this
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << melee_name << " attacks! ";
		melee1.fight(ghosty1);
		cout << melee_name << " does " << melee1.damage;
	}
}


