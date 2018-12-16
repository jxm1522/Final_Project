#include "pch.h"
#include <iostream>

#include "Character.h"
#include "BasicMonster.h"
#include "Melee.h"
#include "Range.h"
#include "Tank.h"
#include "Ghost.h"

#include <string>
using namespace std;


int main()
{
	int characterChoice = 0, current_level = 0;
	string name;
	string melee_name, range_name;
		//Title Screen

	cout << "Hello, please enter your name: ";
	cin >> name;
	cout << "Greetings, " << name << endl;

	cout << "Welcome to The Dungeon!" << endl;
	cout << "Here are your characters:\n"; // Start Character menu
	cout << "1: Melee\n";
	cout << "2: Archer\n";
	cout << "3: Tank\n" << endl;
	
	cout << "Please name the characters in your party:\n";
	cout << "Melee Hero's Name: ";							
	cin >> melee_name;
	cout << "Ranged Hero's Name: ";
	cin >> range_name;

	Melee melee1;
	Range range1;
	melee1.setName(melee_name);
	range1.setName(range_name);

	cout << "Now that you have your team, they enter the dungeon";				//Maybe add some backstory?

	current_level = 1;


	cout << "You encounter a ghoul!" << endl;
	Ghost ghosty1(1);


	cout << "Which character would you like to attack with? ";
	cout << "(1) for " << melee1.getName() << "or (2) for " << range1.getName();		//edit this
	cin >> characterChoice;

	switch (characterChoice)
	{
	case 1:
		cout << melee_name << " attacks! ";
		melee1.fight(ghosty1);
		cout << melee_name << " does " << melee1.damageVal();
		break;

	case 2:
		cout << endl;
		cout << range_name << " attacks! ";
		melee1.fight(ghosty1);
		cout << range_name << " does " << range1.damageVal();

		break;
	}



	//First combat with goblin

	//Implement combat, set up while loop

	//Implement shop after each battle

	//Implement final boss


}


