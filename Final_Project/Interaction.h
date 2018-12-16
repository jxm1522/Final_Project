#pragma once
#include "Character.h"
#include "BasicMonster.h"
#include "Melee.h"
#include "Range.h"
#include "Tank.h"
#include "Ghost.h"

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

void fight(vector<class Character> &charList, vector<class BasicMonster> &monstList);  
int checkTeam(vector<class Character> &charList, vector<class BasicMonster> &monstList); //Checks if whole team is dead 