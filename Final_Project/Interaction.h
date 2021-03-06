#pragma once
#include "Character.h"
#include "BasicMonster.h"
#include "Melee.h"
#include "Range.h"
#include "Tank.h"
#include "Ghost.h"
#include "Goblin.h"

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



void fight(vector<class Character> &charList, vector<class BasicMonster> &monstList, int &);  
int checkTeam(vector<class Character> &charList, vector<class BasicMonster> &monstList); //Checks if whole team of characters or monsters is dead 