#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

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
	Length = ReadNumber("Please enter the number of element you need to store : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(1,100);
}

void Swap(int& A, int& B) {
	int Temp = A;
	A = B;
	B = Temp;
}

void CopyReversedArray(int Arr[100], int Length) {
	for (int i = 0; i < ceil(Length / 2); i++)
		Swap(Arr[i], Arr[Length - i - 1]);
}

void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << "Element [" + to_string(i) + "] : " + to_string(Arr[i]) << endl;
}

int main() {
	int Arr[100], Length;

	FillArray(Arr, Length);
	PrintArray(Arr, Length, "\n\n-------- The Array Before reverse --------\n");
	
	CopyReversedArray(Arr, Length);
	PrintArray(Arr, Length, "\n\n-------- The Array Before reverse --------\n");
	return 0;
}