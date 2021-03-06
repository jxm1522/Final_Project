#include "pch.h"
#include <iostream>

#include "Character.h"
#include "BasicMonster.h"
#include "Melee.h"
#include "Range.h"
#include "Tank.h"
#include "Ghost.h"

#include <string>
#include <vector>
using namespace std;

void fight(vector<class Character> &charList, vector<class BasicMonster> &monstList) {// implementing fight class
	int monstNum, characterChoice, monsterChoice;
	monstNum = monstList.size;
	

	for (int i = 0; i < 3; i++) {
		cout << "Which character would you like to attack with? ";
		cout << "(1) for " << charList[0].getName() << "or (2) for " << charList[1].getName();
		cin >> characterChoice;

		if (monstNum != 1) {
			cout << "Which monster would you like to attack? Choose between 1 and " << monstNum;
			cin >> monsterChoice;
			--monsterChoice;
			
		}

		switch (characterChoice)
		{
		case 1:
			cout << charList[0].getName() << " attacks! " << endl;

			cout << charList[0].getName() << " does " << charList[0].damageVal();
			break;

		case 2:
			cout << endl;
			cout << charList[1].getName() << " attacks! " << endl;
			cout << charList[1].getName() << " does " << charList[1].damageVal();

			break;
		}
	}


}

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

	
	cout << "Now that you have your team, they enter the dungeon";				//Maybe add some backstory?

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
	

	//First combat with goblin

	//Implement combat, set up while loop

	//Implement shop after each battle

	//Implement final boss


}


