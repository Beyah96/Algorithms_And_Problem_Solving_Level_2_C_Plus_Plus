#include <iostream>
#include <string>

using namespace std;

string ReadNumber() {
	int Number;
	do {
		cout << "Please enter a positive number: ";
		cin >> Number;
	} while (Number < 0);
	return to_string(Number);
}

void PrintNumberInReversedOrder(string Number) {
	for (int i = Number.length() - 1; i >= 0; i--)
		cout << Number[i] << endl;
}

int main() {
	PrintNumberInReversedOrder(ReadNumber());
	return 0;
}