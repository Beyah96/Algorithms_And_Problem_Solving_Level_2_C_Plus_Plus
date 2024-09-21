#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

//enum ArrPalindrome{ };

void FillArray(int Arr[100], int& Length) {
	Length = 11;
	Arr[0] = 20;
	Arr[1] = 15;
	Arr[2] = 30;
	Arr[3] = 40;
	Arr[4] = 50;
	Arr[5] = 90;
	Arr[6] = 50;
	Arr[7] = 40;
	Arr[8] = 30;
	Arr[9] = 10;
	Arr[10] = 20;
}
bool IsPalindrome(int Arr[100], int Length) {
	int Counter = 0;

	for (int i = 0; i < floor(Length / 2); i++)
		if (Arr[i] == Arr[Length - i - 1])
			Counter++;
		else
			break;
	return (Counter == floor(Length/2));
}

void PrintIsPalindrome(bool Palindrome) {
	if (Palindrome)
		cout << "Yes is Palindrome !";
	else 
		cout << "No, it is not Palindrome !";

}

int main() {
	int Length, Array[100];
	FillArray(Array, Length);
	PrintIsPalindrome(IsPalindrome(Array, Length));
	return 0;
}