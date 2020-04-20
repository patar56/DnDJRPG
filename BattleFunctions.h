#pragma once
#include <iostream>
#include <random>
#include <string>
#include <cstdlib>

using namespace std;

class Weapon {
	int level = 1;
public:
	int y = 1;
	void DisplayWeaponHitInfo();
	void setlevel(int x);
};