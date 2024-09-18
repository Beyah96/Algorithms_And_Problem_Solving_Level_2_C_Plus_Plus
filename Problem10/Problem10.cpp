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

void PrintNumberInReversedOrder(int Number) {
	int Remainder;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;

		cout << Remainder << endl;
	}
}

int main() {
	PrintNumberInReversedOrder(NumberReversed(ReadNumber()));
	return 0;
}