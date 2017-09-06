#pragma once
#include <iostream>
#include "Error.h"
#include <string>
#include <stdlib.h>
#include "character.h"
#include "task.h"
using namespace std;
class operating{
public:
	operating();
	int showStartMenu();
	string getGamerName();
	int showMainMenu(Character &);
	int showMap(task &);
};