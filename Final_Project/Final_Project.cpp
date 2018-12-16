#include "pch.h"
#include <iostream>
#include "Interaction.h"


int main()
{
	int characterChoice = 0, current_level = 0;
	string name;
	string melee_name, range_name;
	vector<class Character> charList;
	vector<class BasicMonster> monstList;
		//Title Screen

	cout << "Hello, please enter your name: ";
	cin >> name;
	cout << "Greetings, " << name << endl;

	cout << "Welcome to The Dungeon!" << endl;
	cout << "Here are your characters:\n"; // Start Character menu
	cout << "1: Knight\n";
	cout << "2: Archer\n";
	cout << "3: Giant\n" << endl;
	
	cout << "Please name the characters in your party:\n";
	cout << "Melee Hero's Name: ";							
	cin >> melee_name;
	cout << "Ranged Hero's Name: ";
	cin >> range_name;

	Melee melee1;
	Range range1;
	melee1.setName(melee_name);
	range1.setName(range_name);

	
	cout << "Now that you have your team, they enter the dungeon" << endl << endl;				//Maybe add some backstory?

	current_level = 1;


	cout << "You encounter a ghoul!" << endl;
	Ghost ghosty1(1);
	Ghost ghosty2(1);
	Ghost ghosty3(1);

	// All of the vector push_back's include all of the characters and monsters that go into the fight function
	charList.push_back(melee1);
	charList.push_back(range1);

	monstList.push_back(ghosty1);
	monstList.push_back(ghosty2);
	monstList.push_back(ghosty3);

	//Fight function inputs vectors above
	fight(charList, monstList);
	
	cout << "You defeated the spooks! You continue on to find a stronger group of ghosts!";

	Ghost ghosty4(100, 20, 1);
	Ghost ghosty5(150, 20, 1);
	Ghost ghosty6(150, 20, 1);

	monstList.clear();

	monstList.push_back(ghosty4);
	monstList.push_back(ghosty5);
	monstList.push_back(ghosty6);

	fight(charList, monstList);


	//First combat with goblin

	//Implement combat, set up while loop

	//Implement shop after each battle

	//Implement final boss


}


