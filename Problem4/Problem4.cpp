#include <iostream>
#include <string>

using namespace std;

enum enPerfectNumber { Perfect, NotPerfect };

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

void PrintPerfectNumbers(int Number) {
	for (int i = 2; i <= Number; i++)
		if (CheckNumber(i) == enPerfectNumber::Perfect)
			cout << i << endl;
	
}

int main() {
	PrintPerfectNumbers(ReadNumber());
	return 0;
}