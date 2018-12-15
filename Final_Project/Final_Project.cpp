

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
	cout << "Greetings, " << name;

	cout << "Welcome to The Dungeon!" << endl;
	cout << "Here are your characters."; // Start Character menu
	cout << "1: Melee";
	cout << "2: Archer";
	cout << "3: Tank" << endl;
	
	cout << "Please name the characters in your party:";
	cout << "Melee Hero's Name: ";							
	cin >> melee_name;
	cout << "Ranged Hero's Name: ";
	cin >> range_name;

	Melee melee1();
	Range range1();


	cout << "Now that you have your team, they enter the dungeon";				//Maybe add some backstory?

	current_level = 1;


	cout << "You encounter a ghoul!" << endl;
	Ghost ghosty1();


	cout << "Which character would you like to attack with? ";
	cout << "(1) for " << melee_name << "or (2) for " << range_name;		//edit this
	cin >> characterChoice;

	switch (characterChoice)
	{
	case 1:
		cout << melee_name << " attacks! ";
		melee1.fight(ghosty1);
		cout << melee_name << " does " << melee1.damage;
	}


	//cout << "There seems to be green goo on the walls" << endl << "A faint growl is heard.  A goblin appears!";

	//First combat with goblin

	//Implement combat, set up while loop

	//Implement shop after each battle

	//Implement final boss


}


