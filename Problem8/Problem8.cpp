#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int NumberFrequency(int Number, int SearchedNumber) {
	int Remainder = 0, Counter = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		if (Remainder == SearchedNumber)
			Counter++;
		
	}
	return Counter;
}

void PrintFrequency(int Frequency) {
	cout << "Your searched number frequency is : " << Frequency << " Time(s)" << endl;
}

int main() {
	PrintFrequency(NumberFrequency(ReadNumber("Please enter a positive number: "), ReadNumber("Please enter your searched number: ")));
	return 0;
}