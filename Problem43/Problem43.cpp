#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enOddEven { Odd, Even };


int ReadNumber(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1);
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("Please enter how many elements do you want to generate : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(1, 100);
}

enOddEven CheckNumber(int Number) {
	if (Number % 2 == 0)
		return enOddEven::Even;
	else
		return enOddEven::Odd;
}

int CountOddNumbers(int Arr[100], int Length) {
	int Counter = 0;
	for (int i = 0; i < Length; i++)
		if (CheckNumber(Arr[i]) == enOddEven::Even)
			Counter++;
	return Counter;
}

void PrintArrayAndOddCount(int Arr[100], int Length) {
	cout << "\n\n--------  Array content :  --------" << endl;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
	cout << "\n\nOdd numbers count is : " << CountOddNumbers(Arr, Length) << endl;
}


int main() {
	srand((unsigned)time(NULL));
	int Arr[100], Length;
	FillArray(Arr, Length);
	PrintArrayAndOddCount(Arr, Length);
}
