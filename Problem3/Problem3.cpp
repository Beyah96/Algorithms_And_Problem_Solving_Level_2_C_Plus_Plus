#include <iostream>
#include <string>

using namespace std;

enum enPerfectNumber{Perfect, NotPerfect};

int ReadNumber() {
	int Number;
	do {
		cout << "Please enter a positive number : ";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

enPerfectNumber CheckNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i < Number; i++)
		if (Number % i == 0)
			Sum += i;
	if (Sum == Number)
		return enPerfectNumber::Perfect;
	else
		return enPerfectNumber::NotPerfect;
}

void PrintNumberType(enPerfectNumber NumberType) {
	if (NumberType == enPerfectNumber::Perfect)
		cout << "Is Perfect";
	else
		cout << "Is not Perfect";
}

int main() {
	PrintNumberType(CheckNumber(ReadNumber()));
	return 0;
}