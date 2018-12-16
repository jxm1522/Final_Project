

#include "pch.h"
#include <iostream>
#include "Character.h"
#include "BasicMonster.h"
#include "Melee.h"
#include "Range.h"
#include "Ghost.h"
using namespace std;


int main()
{
	int characterChoice = 0, current_level = 0;
	char name[100];
	char melee_name[100], range_name[100];
		//Title Screen

	cout << "Hello, please enter your name: ";
	cin >> name;
	cout << "Greetings, " << name << endl;
	cout << endl;

	cout << "Welcome to The Dungeon!" << endl;
	cout << "Here are your characters." << endl; // Start Character menu
	cout << "1: Melee" << endl;
	cout << "2: Archer" << endl;
	cout << "3: Tank" << endl;
	cout << endl;

	cout << "Please name the characters in your party:" << endl;
	cout << endl << "Melee Hero's Name: ";							
	cin >> melee_name;
	cout << endl << "Ranged Hero's Name: ";
	cin >> range_name;

	Melee melee1;
	Range range1;

	cout << endl;
	cout << endl;
	cout << "Now that you have your team, they enter the dungeon" << endl;				//Maybe add some backstory?
	cout << endl;

	current_level = 1;				//sets current level of dungeon


	cout << "You encounter a ghoul!" << endl;
	Ghost ghosty1(current_level);


	cout << "Which character would you like to attack with? " << endl;
	cout << "(1) for " << melee_name << " or (2) for " << range_name << ": ";		//edit this
	cin >> characterChoice;
	
	switch (characterChoice)
	{
	case 1:
		cout << endl;
		cout << melee_name << " attacks! ";
		melee1.fight(ghosty1);
		cout << melee_name << " does " << melee1.doDamage();
		
		break;
	
	case 2:
		cout << endl;
		cout << range_name << " attacks! ";
		melee1.fight(ghosty1);
		cout << range_name << " does " << range1.doDamage();

		break;

	}


	//cout << "There seems to be green goo on the walls" << endl << "A faint growl is heard.  A goblin appears!";

	//First combat with goblin

	//Implement combat, set up while loop

	//Implement shop after each battle

	//Implement final boss















}


