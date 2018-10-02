#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int userInput = 0;
	int menuInput = 0;
	int slotChoice = 0;
	int randNum = 0;
	int numChips = 0;

	double position0;
	double position1;
	double position2;
	double position3;
	double position4;
	double position5;
	double position6;
	double position7;
	double position8;
	double position9;
	double position10;
	double position11;
	double ballPosition = 0.0;
	double winnings = 0.0;

	bool slotChoiceIsBad = false;

	cout << "Welcome to the Plinko simulator! ";
	do {
		cout << " Enter 3 to see options." << endl;
		cout << endl;
		cout << "Enter your selection now: ";
		cin >> userInput;
		cout << endl;
		if (userInput != 3) {
			cout << "Invalid selection. ";
		}
	} while (userInput != 3);

	cout << endl;

	cout << "Menu: Please select one of the following options:" << endl;
	cout << endl;
	cout << "1 - Drop a single chip into one slot" << endl;
	cout << "2 - Drop multiple chips into one slot" << endl;
	cout << "3 - Show the options menu" << endl;
	cout << "4 - Quit the program";

	do {
		cout << endl << endl;
		cout << "Enter your selection now: ";
		cin >> menuInput;

		// Menu input of 1
		if (menuInput == 1) {
			cout << endl << endl;
			cout << "*** Drop a single chip ***" << endl;
			cout << endl;
			cout << "Which slot do you want to drop the chip in (0-8)? ";
			cin >> slotChoice;
			cout << endl << endl;

			slotChoiceIsBad = false;
			if (slotChoice < 0 || slotChoice > 8) {
				cout << "Invalid slot.";
				continue;
			}
			else {
				ballPosition = static_cast<double>(slotChoice);
			}

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

				if (i == 0) {
					position0 = ballPosition;
				}
				else if (i == 1) {
					position1 = ballPosition;
				}
				else if (i == 2) {
					position2 = ballPosition;
				}
				else if (i == 3) {
					position3 = ballPosition;
				}
				else if (i == 4) {
					position4 = ballPosition;
				}
				else if (i == 5) {
					position5 = ballPosition;
				}
				else if (i == 6) {
					position6 = ballPosition;
				}
				else if (i == 7) {
					position7 = ballPosition;
				}
				else if (i == 8) {
					position8 = ballPosition;
				}
				else if (i == 9) {
					position9 = ballPosition;
				}
				else if (i == 10) {
					position10 = ballPosition;
				}
				else if (i == 11) {
					position11 = ballPosition;
				}
			}

			if (ballPosition == 0 || ballPosition == 8) {
				winnings = 100.00;
			}
			else if (ballPosition == 1 || ballPosition == 7) {
				winnings = 500.00;
			}
			else if (ballPosition == 2 || ballPosition == 6) {
				winnings = 1000.00;
			}
			else if (ballPosition == 3 || ballPosition == 5) {
				winnings = 0.00;
			}
			else if (ballPosition == 4) {
				winnings = 10000.00;
			}

			cout << fixed << setprecision(1) << "Path: [" << position0 << ", " << position1 << ", " << position2 << ", "
				<< position3 << ", " << position4 << ", " << position5 << ", " << position6 << ", " << position7 << ", "
				<< position8 << ", " << position9 << ", " << position10 << ", " << position11 << "]" << endl;
			cout << setprecision(2) << "Winnings: $" << winnings << endl;
		}

		// Menu input of 2
		if (menuInput == 2) {
			cout << endl << endl;
			cout << "*** Drop multiple chips ***" << endl;
			cout << endl;
			cout << "How many chips do you want to drop (>0)? ";
			cin >> numChips;
			cout << endl << endl;

			if (numChips <= 0)
			{
				cout << "Invalid number of chips.";
				continue;
			}

			cout << "Which slot do you want to drop the chip in (0-8)? ";
			cin >> slotChoice;
			cout << endl << endl;

			slotChoiceIsBad = false;
			if (slotChoice < 0 || slotChoice > 8) {
				cout << "Invalid slot.";
				slotChoiceIsBad = true;
			}
			else {
				ballPosition = static_cast<double>(slotChoice);
			}

			for (int i = 0; i < 12; i = i + 1) {
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

				if (i == 0) {
					position0 = ballPosition;
				}
				else if (i == 1) {
					position1 = ballPosition;
				}
				else if (i == 2) {
					position2 = ballPosition;
				}
				else if (i == 3) {
					position3 = ballPosition;
				}
				else if (i == 4) {
					position4 = ballPosition;
				}
				else if (i == 5) {
					position5 = ballPosition;
				}
				else if (i == 6) {
					position6 = ballPosition;
				}
				else if (i == 7) {
					position7 = ballPosition;
				}
				else if (i == 8) {
					position8 = ballPosition;
				}
				else if (i == 9) {
					position9 = ballPosition;
				}
				else if (i == 10) {
					position10 = ballPosition;
				}
				else if (i == 11) {
					position11 = ballPosition;
				}
			}

			if (ballPosition == 0 || ballPosition == 8) {
				winnings = 100.00;
			}
			else if (ballPosition == 1 || ballPosition == 7) {
				winnings = 500.00;
			}
			else if (ballPosition == 2 || ballPosition == 6) {
				winnings = 1000.00;
			}
			else if (ballPosition == 3 || ballPosition == 5) {
				winnings = 0.00;
			}
			else if (ballPosition == 4) {
				winnings = 10000.00;
			}

			cout << fixed << setprecision(1) << "Path: [" << position0 << ", " << position1 << ", " << position2 << ", "
				<< position3 << ", " << position4 << ", " << position5 << ", " << position6 << ", " << position7 << ", "
				<< position8 << ", " << position9 << ", " << position10 << ", " << position11 << "]" << endl;
			cout << setprecision(2) << "Winnings: $" << winnings << endl;
		}

		if (menuInput == 4) {
			cout << "Goodbye!";
		}
	} while (menuInput != 4);

	system("pause");
	return 0;
}