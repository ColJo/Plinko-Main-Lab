#include <iostream>

using namespace std;

int main() {
	int userInput = 0;
	int menuInput = 0;
	int slotChoice = 0;
	int randNum = 0;
	int position0;
	int position1;
	int position2;
	int position3;
	int position4;
	int position5;
	int position6;
	int position7;
	int position8;
	int position9;
	int position10;
	int position11;

	double ballPosition = 0.0;
	
	bool choiceIsBad = false;

	cout << "Welcome to the Plinko simulator! ";
	do {
		cout << " Enter 3 to see options." << endl;
		cout << endl;
		cout << "Enter your selection now: ";
		cin >> userInput;
		cout << endl;
		if (userInput != 3){
			cout << "Invalid selection. ";
		}
	} while (userInput != 3);

	cout << endl;

	cout << "Menu: Please select one of the following options:" << endl;
	cout << endl;
	cout << "1 - Drop a single chip into one slot" << endl;
	cout << "2 - Drop multiple chips into one slot" << endl;
	cout << "3 - Show the options menu" << endl;
	cout << "4 - Quit the program" << endl;

	cout << endl;
	cout << "Enter your selection now: ";
	cin >> menuInput;
	
	if (menuInput == 1) {
		do {
			cout << endl << endl;
			cout << "*** Drop a single chip ***" << endl;
			cout << endl;
			cout << "Which slot do you want to drop the chip in (0-8)? ";
			cin >> slotChoice;
			cout << endl << endl;

			choiceIsBad = false;
			if (slotChoice < 0 || slotChoice > 8) {
				cout << "Invalid slot.";
				choiceIsBad = true;
			}
			else {
				ballPosition = static_cast<double>(slotChoice);
			}
		} while (choiceIsBad);

		for (int i = 0; i < 12; i++) {
			randNum = rand() % 2;
			if (randNum == 0) {
				if (ballPosition == 0) {
					ballPosition += 0.5;
				}
				else {
					ballPosition -= 0.5;
				}
			}
			else {
				if (ballPosition == 8) {
					ballPosition -= 0.5;
				}
				else {
					ballPosition += 0.5;
				}
			}

			
		}
	}

	system("pause");
	return 0;
}