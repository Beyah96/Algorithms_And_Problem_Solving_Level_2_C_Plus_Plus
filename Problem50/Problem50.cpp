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

int MySqrt(float Number) {
	return pow(Number, 0.5);
}

int main() {
	float Number = ReadNumber();
	cout << "My Sqrt: " << MySqrt(Number) << endl;
	cout << "C++ sqrt: " << sqrt(Number);
}