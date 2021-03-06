#include "pch.h"
#include <iostream>
#include "Interaction.h"


int main()
{
	int characterChoice = 0, current_level = 0;
	int healthPotionNum = 8; //sets number of health potions available
	int *healthPotionPtr = &healthPotionNum;
	string name;
	string melee_name, range_name, giant_name;
	vector<class Character> charList;
	vector<class BasicMonster> monstList;
	srand(time(NULL));
		//Title Screen

	cout << "Hello, please enter your name: ";
	cin >> name;
	cout << "Greetings, " << name << endl;

	cout << "Welcome to The Dungeon!" << endl << endl;
	cout << "Here are your characters:\n"; // Start Character menu
	cout << "1: Knight\n";
	cout << "2: Archer\n";
	cout << "3: Giant\n" << endl;
	
	cout << "\nPlease name the characters in your party:\n";
	cout << "Melee Hero's Name: ";							
	cin >> melee_name;
	cout << "Ranged Hero's Name: ";
	cin >> range_name;
	cout << "Giant Hero's Name: ";
	cin >> giant_name;

	Melee melee1;
	Range range1;
	Tank tank1;
	melee1.setName(melee_name);
	range1.setName(range_name);
	tank1.setName(giant_name);

	
	cout << endl << "Now that you have your team, they enter the dungeon" << endl << endl;				//Maybe add some backstory?

	current_level = 1;

	cout << endl << "LEVEL ONE" << endl;
	cout << "You encounter a ghoul!" << endl << endl;
	Ghost ghosty1(1);
	Ghost ghosty2(1);
	Ghost ghosty3(1);

	// All of the vector push_back's include all of the characters and monsters that go into the fight function
	charList.push_back(melee1);
	charList.push_back(range1);
	charList.push_back(tank1);

	monstList.push_back(ghosty1);
	monstList.push_back(ghosty2);
	monstList.push_back(ghosty3);

	//Fight function inputs vectors above
	fight(charList, monstList, *healthPotionPtr);
	
	cout << "You defeated the spooks!" << endl;
	cin.get();
	cout << endl << endl << "You continue on to find a stronger group of ghosts!" << endl;

	Ghost ghosty4(100, 20, 1);
	Ghost ghosty5(100, 20, 1);
	Ghost ghosty6(100, 20, 1);

	monstList.clear();

	monstList.push_back(ghosty4);
	monstList.push_back(ghosty5);
	monstList.push_back(ghosty6);

	fight(charList, monstList, *healthPotionPtr);

	cout << endl << endl << endl;
	
	cout << "You have reached a large door. This must be the King Ghost." << endl;
	cout << "You enter the chamber..." << endl << endl;

	Ghost kingGhost(400, 100, 2);
	monstList.clear();
	monstList.push_back(kingGhost);

	fight(charList, monstList, *healthPotionPtr);

	cout << endl << "You have defeated the spookies! The first level of the dungeon is complete." << endl;
	cin.get();

	cout << endl << "You continue down the trapdoor past the dead ghost body. Spooky." << endl;
	cout << endl << endl << endl;

	cout << endl << "LEVEL TWO" << endl;

	cout << endl << "There is a faint growl from the shadows. A Goblin trio sprints at you!" << endl;
	
	Goblin goblin1(2);
	Goblin goblin2(2);
	Goblin goblin3(2);

	monstList.clear();

	monstList.push_back(goblin1);
	monstList.push_back(goblin2);
	monstList.push_back(goblin3);

	fight(charList, monstList, *healthPotionPtr);

	cout << endl << "The goblins are dead. You step over their bodies and continue down the path." << endl;
	cin.get();

	cout << endl << endl << "After for walking for what feels like an eternity, you stop for a rest." << endl;
	cout << "While you're resting on the ground, an armored goblin walks by. Realizing that you're an enemy, he gets ready to fight." << endl << endl;

	Goblin goblin4(200, 80, 2);

	monstList.clear();

	monstList.push_back(goblin4);

	fight(charList, monstList, *healthPotionPtr);

	cout << endl << "You kill the armored goblin. You take his armor and try to put it on. It doesn't fit. Unfortunate.";
	cout << "Moving on, you come to another  B I G   D O O R";
	cout << "You open the door. Its kind of hard because its a really big door and its really heavy, but you're strong as heck so you get it done. Good job." << endl;
	cout << "A GIANT GOBLIN stands before you. He has a not so nice looking face and he sounds mean, so you decide to murder him in cold blood." << endl << endl;

	Goblin kingGoblin(500, 120, 3);

	monstList.clear();

	monstList.push_back(kingGoblin);

	fight(charList, monstList, *healthPotionPtr);

	cout << endl << "You have slain the King Goblin. If you weren't a murderer before, you sure are now. He had a wife and kids. RIP." << endl;



}


