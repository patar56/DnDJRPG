#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <time.h>
#include "BattleFunctions.h"

using namespace std;

void Weapon::DisplayWeaponHitInfo() {
	srand(time(NULL));
	int x;
	int AP = (rand() % 10 + 1);
	cout << "Gunblade does " << AP << " damage!" << endl;
	y++;
}

void Weapon::setlevel(int x) {
	level = x;
}

