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

bool CheckPalindrome(int Number, int reversedNumber) {
	return Number == reversedNumber;
}
void Print(bool Palindrome) {
	if (Palindrome)
		cout << "It is a Palindrome number" << endl;
	else
		cout << "It is not a Palindrome number" << endl;
}

int main() {
	int Number = ReadNumber();
	Print(CheckPalindrome(Number, NumberReversed(Number)));
	return 0;
}