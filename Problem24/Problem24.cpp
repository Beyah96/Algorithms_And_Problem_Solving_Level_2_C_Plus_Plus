#include <iostream>
#include <cstdlib>

using namespace std;

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
	Length = ReadNumber("How many elements you will enter? : ");
	for (int i = 1; i <= Length; i++)
		Arr[i - 1] = RandomNumber(1, 100);
}

void PrintArrayElements(int Arr[100], int Length) {
	cout << "*******************************************" << endl;
	cout << "***        Array's elements             ***" << endl;
	cout << "*******************************************" << endl;
	for (int i = 0; i < Length; i++)
		cout << "Element [" << i + 1 << "] : " << Arr[i] << endl;
}

int FindMax(int Arr[100], int Length) {
	int MaxNumber = Arr[0];
	for (int i = 1; i < Length; i++) 
		if (Arr[i] > MaxNumber)
			MaxNumber = Arr[i];
	
	return MaxNumber;
}

int main() {
	srand((unsigned)time(NULL));
	int Arr[100];
	int Length;

	FillArray(Arr, Length);
	PrintArrayElements(Arr, Length);

	cout << "Max Number is : " << FindMax(Arr, Length);
	return 0;

}