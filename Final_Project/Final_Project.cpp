

#include "pch.h"
#include <iostream>
#include "Character.h"
#include "BasicMonster.h"
using namespace std;


int main()
{
	int characterChoice, n = 0;
    //Title Screen
	cout << "Welcome to The Dungeon!";
	cout << "Choose your characters, one at a time to be on your team.  You can have multiple of each up to 3 in total."; // Start Character menu
	cout << "1: Melee";
	cout << "2: Healer";
	cout << "3: Archer";
	cout << "4: Tank";
	while (n < 2) {
		switch (characterChoice) // Create characters here(default constructor). Allow user to give them names to differentiate?
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		}
		n += 1;
	}
	cout << "Now that you have your team, they enter the dungeon";//Maybe add some backstory?
	cout << "There seems to be green goo on the walls" << endl << "A faint growl is heard.  A goblin appears!";

	//First combat with goblin

	//Implement combat, set up while loop

	//Implement shop after each battle

	//Implement final boss


}


