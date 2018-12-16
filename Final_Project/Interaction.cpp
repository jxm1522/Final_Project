#include "pch.h"
#include "Interaction.h"

using namespace std;

void fight(vector<class Character> &charList, vector<class BasicMonster> &monstList) { // implementing fight class
	int characterChoice, monsterChoice;

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
			cout << "-------------------------------" << endl << endl;

			cout << "Which character would you like to attack with? " << endl; //Character Selection to attack
			for (int j = 1; j <= charList.size(); j++) {
				cout << "(" << j << ") : " << charList[(j - 1)].getName() << endl;
			}
			cin >> characterChoice;
			--characterChoice;

			while (charList[characterChoice].getHealth() <= 0 || charList[characterChoice].getAttackStatus() == true) { //Makes sure character choice is valid

				cout << "Please choose a character that is able to attack" << endl;
				cout << "Which character would you like to attack with? " << endl;
				cin >> characterChoice;
				--characterChoice;

			}

			do {

				cout << "Which monster would you like to attack? Choose between 1 and " << monstList.size() << ": "; //Monster selection to be attacked
				cin >> monsterChoice;
				--monsterChoice;
				if (monstList[monsterChoice].checkifDead()) {
					cout << "Please choose a monster that is alive" << endl;
				}
			} while (monstList[monsterChoice].checkifDead());


			int monstHealth = monstList[monsterChoice].gethealth();
			int damage = monstHealth - charList[characterChoice].damageVal();
			monstList[monsterChoice].sethealth(damage);
			charList[characterChoice].setAttackStatus(true);
			cout << charList[characterChoice].getName() << " attacks! " << endl;
			cout << charList[characterChoice].getName() << " does " << charList[characterChoice].damageVal() << endl;

		}

		 // Monster side attacks
		


		for (int i = 0; i < charList.size(); i++) { //Resets attack status for characters at end of monster turn
			charList[i].setAttackStatus(false);
		}
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