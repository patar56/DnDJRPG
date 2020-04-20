#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include "BattleFunctions.h"

using namespace std;

string CharacterName = "Squall";

int main(){
	Weapon we;

	cout << "Set Level" << endl;
	cout << "\n";
	int levelc;
	cin >> levelc;
	cin.get();
	we.setlevel(levelc);
	cout << "LET THE BATTLE BEGIN!" << endl;
	cout << "\n";
	cout << "1. Attack" << endl;
	cout << "2. Magic" << endl;
	cout << "3. Guardian Force" << endl;
	cout << "4. Item" << endl;
	cout << "5. Take Damage" << endl;
	cout << "Press 0 to quit" << endl;
	cout << "\n";
	int choice;
	cin >> choice;
	cin.get();
	while (choice != 0) {
		if (choice == 1) {
			we.DisplayWeaponHitInfo();
		}
		cout << "LET THE BATTLE BEGIN!" << endl;
		cout << "\n";
		cout << "1. Attack" << endl;
		cout << "2. Magic" << endl;
		cout << "3. Guardian Force" << endl;
		cout << "4. Item" << endl;
		cout << "5. Take Damage" << endl;
		cout << "Press 0 to quit" << endl;
		cout << "\n";
		cin >> choice;
	}
	return 0;
}