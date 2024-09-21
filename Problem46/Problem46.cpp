#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter a Number : ";
	cin >> Number;
	return Number;
}

int MyABS(int Number) {
	if (Number < 0)
		Number *= -1;
	return Number;
}


int main() {
	int Number;
	Number = ReadNumber();
	cout << "The Asolute value Calculated By my function of " + to_string(Number) + "is : " << MyABS(Number) << endl;
	cout << "The Asolute value Calculated By my function of " + to_string(Number) + "is : " << abs(Number) << endl;
}