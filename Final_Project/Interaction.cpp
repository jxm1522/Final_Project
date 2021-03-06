#include "pch.h"
#include "Interaction.h"

using namespace std;

void fight(vector<class Character> &charList, vector<class BasicMonster> &monstList, int &healthPotionNum) { // implementing fight class
	int characterChoice, monsterChoice, playerChoice;

	while (checkTeam(charList, monstList) == 2) {
		for (int i = 0; i < charList.size(); i++) { //Character side attacks
			cout << "-------------------------------" << endl;
			for (int j = 0; j < monstList.size(); j++) {			//Lists Monster stats
				int temp = j + 1;
				cout << monstList[j].getName() << " " << temp << " has " << monstList[j].gethealth() << " health" << endl;
			}
			cout << "-------------------------------" << endl;
			cout << "-------------------------------" << endl;
			for (int j = 0; j < charList.size(); j++) {			//Lists Player stats
					cout << charList[j].getName() << " " << " has " << charList[j].getHealth() << " health" << endl;
			}
			cout << "Health potions available: " << healthPotionNum << endl;
			cout << "-------------------------------" << endl << endl;
				cout << "Which character would you like to interact with? " << endl; //Character Selection to attack
			for (int j = 1; j <= charList.size(); j++) {
				cout << "(" << j << ") : " << charList[(j - 1)].getName();
				if (charList[(j-1)].getAttackStatus() == true) {
					cout << " /Character unavailable";
				}
				cout << endl;
			}
			cin >> characterChoice;
			--characterChoice;

			while (charList[characterChoice].getHealth() <= 0 || charList[characterChoice].getAttackStatus() == true) { //Makes sure character choice is valid

				cout << "Please choose a character that hasn't healed or attacked (You may not interact with the same character twice in one turn)" << endl;
				cout << endl << "Which character would you like to interact with? " << endl;
				cin >> characterChoice;
				--characterChoice;
			}

			cout << "Would you like to heal, or attack?" << endl;
			cout << "(1) Attack" << endl;
			cout << "(2) Heal" << endl;
			cin >> playerChoice;

			if (playerChoice == 2) {			//Heal
				
				if (healthPotionNum == 0) {
					playerChoice = 1;
					cout << "Looks like you're all out of health potions!  You'll be attacking with this character instead." << endl;
				}
				else {
					healthPotionNum--;
					charList[characterChoice]++;
					charList[characterChoice].setAttackStatus(true);
				}
			}
			else if (playerChoice == 1) {			//Attack

				do {

					cout << endl << "Which monster would you like to attack? Choose between 1 and " << monstList.size() << ": "; //Monster selection to be attacked
					cin >> monsterChoice;
					--monsterChoice;
					if (monstList[monsterChoice].checkifDead()) {
						cout << "Please choose a monster that is alive" << endl;
					}
				} while (monstList[monsterChoice].checkifDead());



				int missChar = rand() % 101; //Chance for character to miss
				if (missChar > 85) {
					cout << charList[characterChoice].getName() << " has missed!" << endl;
					charList[characterChoice].setAttackStatus(true);
				}
				//else {
					int damage = monstList[monsterChoice].gethealth() - charList[characterChoice].damageVal();
					monstList[monsterChoice].sethealth(damage);
					charList[characterChoice].setAttackStatus(true);
					cout << endl << charList[characterChoice].getName() << " attacks! " << endl;
					cout << charList[characterChoice].getName() << " does " << charList[characterChoice].damageVal() << " damage" << endl << endl;
				//}
			}			//End Attack
		}

		 
		for (int i = 0; i < monstList.size(); i++) {		// Monster side attacks
			int missMonst = rand() % 101;
			if (missMonst > 75) {
				cout << monstList[i].getName() << " " << i << " misses their attack!" << endl;
			}
			//else {
				int randChar = rand() % charList.size();
				int damage = charList[randChar].getHealth() - monstList[characterChoice].damageVal();
				charList[randChar].setHealth(damage);
				cout << monstList[i].getName() << " " << i << " attacks! " << charList[randChar].getName() << endl;
				cout << monstList[i].getName() << " does " << monstList[i].damageVal() << " damage" << endl << endl;
			//}
		}

		for (int i = 0; i < charList.size(); i++) {			//Resets attack status for all characters at end of monster turn
			charList[i].setAttackStatus(false);
		}
		cout << "======================================" << endl << endl;
	}
}


int checkTeam(vector<class Character> &charList, vector<class BasicMonster> &monstList) {
	int charStatus=0, monstStatus=0;

 	for (int i = 0; i < charList.size(); i++) {
		if (charList[i].checkifDead()== false) {
			charStatus++;
		}
	}
	for (int i = 0; i < monstList.size(); i++) {
		if (monstList[i].checkifDead() == false) {
			monstStatus++;
		}
	}
	if (charStatus == 0) {
		return 0;
	}
	else if (monstStatus == 0) {
		return 1;
	}
	else {
		return 2;
	}
}