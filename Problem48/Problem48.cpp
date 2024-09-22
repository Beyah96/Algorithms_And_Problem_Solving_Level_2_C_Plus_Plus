#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadNumber() {
	float Number;
	cout << "Please enter a Number : ";
	cin >> Number;
	return Number;
}

int MyFloor(float Number) {
	float AbsNumber = abs(Number);
	if (AbsNumber > int(AbsNumber))
		if (Number < 0)
			Number--;
	return int(Number);
}

int main() {
	float Number = ReadNumber();
	cout << "My Floor : " << MyFloor(Number) << endl;
	cout << "C++ Floor : " << floor(Number);
}