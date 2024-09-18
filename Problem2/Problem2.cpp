#include <iostream>
#include <string>

using namespace std;

enum enPrimeNumber{ Prime = 1, Composite = 2};

int ReadNumber() {
	int Number;
	do {
		cout << "Please enter a positive number : ";
		cin >> Number;
	} while (Number < 0);
	return Number;
}

enPrimeNumber CheckNumber(int Number) {
	enPrimeNumber NumberType = enPrimeNumber::Prime;
	for (int i = 2; i <= ceil(sqrt(Number)); i++)
		if (Number % i == 0 && Number > 3)
			NumberType = enPrimeNumber::Composite;
	return NumberType;
}

void PrintNumberType(enPrimeNumber NumberType) {
	if (NumberType == enPrimeNumber::Prime)
		cout << "Prime";
	else
		cout << "Composite";
}

void PrintPrimeNumbers(int Number) {
	for (int i = 1; i <= Number; i++)
		if (CheckNumber(i) == enPrimeNumber::Prime)
			cout << i << endl;
}



int main() {
	//PrintNumberType(CheckNumber(ReadNumber()));
	PrintPrimeNumbers(ReadNumber());
	return 0;
}