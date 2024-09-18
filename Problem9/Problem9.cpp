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

int NumberFrequency(int Number, int SearchedDigit) {
	int Remainder = 0, Counter = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		if (Remainder == SearchedDigit)
			Counter++;

	}
	return Counter;
}

void PrintFrequency(int Number) {
	int Frequency;
	for (int Digit = 0; Digit <= 9; Digit++) {
		Frequency = NumberFrequency(Number, Digit);
		if (Frequency > 0){
			cout << "Digit " << Digit << " frequency is : " << Frequency << " Time(s)" << endl;
		}
	}
	
	
	
}

int main() {
	int Number = ReadNumber("Please enter a positive number: ");
	PrintFrequency(Number);
	return 0;
}