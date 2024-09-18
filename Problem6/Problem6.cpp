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

int SumDigits(int Number) {
	int Remainder = 0;
	while (Number > 0) {
		Remainder += Number % 10;
		Number = Number / 10;	
	}
	return Remainder;
}

void PrintSumDigits(int Sum) {
	cout << "The sum of your number's digits is : " << Sum << endl;
}

int main() {
	PrintSumDigits(SumDigits(ReadNumber()));
	return 0;
}