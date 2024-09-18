#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int Number;
	do {
		cout << "Please enter a positive number: ";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int NumberReversed(int Number) {
	int Remainder = 0;
	while (Number > 0) {
		Remainder = Remainder * 10 + Number % 10;
		Number = Number / 10;
	}
	return Remainder;
}

void PrintNewNumber(int NumberReversed) {
	cout << "Reverse is : " << NumberReversed;
}

int main() {
	PrintNewNumber(NumberReversed(ReadNumber()));
	return 0;
}