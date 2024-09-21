#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enOddOrEven{ Odd, Even};

int ReadNumber(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("Please enter how many generated elements do you want to store : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(1, 100);
}

enOddOrEven CheckNumber(int Number) {
	if (Number % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

void CopyOddNumbers(int Arr[100], int Lenght, int OddArray[100], int& LengthOddArray) {
	LengthOddArray = 0;
	for (int i = 0; i < Lenght; i++) 
		if (CheckNumber(Arr[i]) == enOddOrEven::Odd){
			OddArray[LengthOddArray] = Arr[i];
			LengthOddArray++;
		}
}

void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
}

int main() {
	srand((unsigned)time(NULL));
	int Arr[100], OddArray[100], Length, LengthOddArray;
	FillArray(Arr, Length);
	PrintArray(Arr, Length, "\n\n----------- Array source -----------\n");
	CopyOddNumbers(Arr, Length, OddArray, LengthOddArray);
	PrintArray(OddArray, LengthOddArray, "\n\n----------- Array source -----------\n");

	return 0;
}