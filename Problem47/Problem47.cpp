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

int MyRound(float Number) {
	if ((int)abs((Number * 10)) % 10 >= 5)
		if (Number > 0)
			Number++;
		else
			Number--;
	return int(Number);
}

int main() {
	float Number = ReadNumber();
	cout << "My Round : " << MyRound(Number) << endl;
	cout << "C++ Round : " << round(Number);
}