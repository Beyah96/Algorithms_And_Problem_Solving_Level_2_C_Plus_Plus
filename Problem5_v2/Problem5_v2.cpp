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

void PrintNumberInReversedOrder(int Number) {
	int Remainder;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;

		cout << Remainder << endl;
	}
}

int main() {
	PrintNumberInReversedOrder(ReadNumber());
	return 0;
}