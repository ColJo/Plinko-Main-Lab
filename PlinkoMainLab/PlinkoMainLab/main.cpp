#include <iostream>
#include <iomanip>

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

			if (i = 0) {
				position0 = ballPosition;
			}
			else if (i = 1) {
				position1 = ballPosition;
			}
			else if (i = 2) {
				position2 = ballPosition;
			}
			else if (i = 3) {
				position3 = ballPosition;
			}
			else if (i = 4) {
				position4 = ballPosition;
			}
			else if (i = 5) {
				position5 = ballPosition;
			}
			else if (i = 6) {
				position6 = ballPosition;
			}
			else if (i = 7) {
				position7 = ballPosition;
			}
			else if (i = 8) {
				position8 = ballPosition;
			}
			else if (i = 9) {
				position9 = ballPosition;
			}
			else if (i = 10) {
				position10 = ballPosition;
			}
			else if (i = 11) {
				position11 = ballPosition;
			}
		}

		setprecision(2);
		cout << "Path: [" << position0 << ", " << position1 << ", " << position2 << ", " << position3 << ", " << position4 
			<< ", " << position5 << ", " << position6 << ", " << position7 << ", " << position8 << ", " << position9 
			<< ", " << position10 << ", " << position11 << "]" << endl;
		cout << "Winnings: $";
	}

	cout << ballPosition << endl;
	system("pause");
	return 0;
}