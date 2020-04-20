#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <time.h>
#include "BattleFunctions.h"
#include "Random.h"

using namespace std;

void Weapon::DisplayWeaponHitInfo() {
	//srand(time(NULL));
	int x;
	int AP = Random::Int(1, 10);
	cout << "Gunblade does " << AP << " damage!" << endl;
	y++;
}

void Weapon::setlevel(int x) {
	level = x;
}

