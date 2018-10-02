#include <iostream>

using namespace std;

int main() {
	int userInput;
	int menuInput;
	int slotChoice;
	
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
	
	do {
		cout << endl << endl;
		cout << "*** Drop a single chip ***" << endl;
		cout << endl;
		cout << "Which slot do you want to drop the chip in (0-8)? ";
		cin >> slotChoice;
		cout << endl << endl;

		choiceIsBad = false;
		if (slotChoice < 0 || slotChoice > 8)
		{
			cout << "Invalid slot.";
			choiceIsBad = true;
		}
	} while (choiceIsBad);

	system("pause");
	return 0;


}