#include <iostream>

using namespace std;

int main() {
	int userInput;
	int menuInput;

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

	if (userInput == 3) {
		cout << "Menu: Please select one of the following options:" << endl;
		cout << endl;
		cout << "1 - Drop a single chip into one slot" << endl;
		cout << "2 - Drop multiple chips into one slot" << endl;
		cout << "3 - Show the options menu" << endl;
		cout << "4 - Quit the program" << endl;
	}
	

	system("pause");
	return 0;


}