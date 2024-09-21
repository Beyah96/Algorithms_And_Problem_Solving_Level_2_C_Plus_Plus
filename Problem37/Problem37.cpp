#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message){
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

void AddArrayElement(int Array[100], int& Length, int Element) {
	Length++;
	Array[Length - 1] = Element;
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("Please enter the number of elements you want to generate and store : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(1, 100);
}

void CopyArray(int Arr1[100], int Arr2[100], int Length1, int &Length2) {
	for (int i = 0; i < Length1; i++) 
		AddArrayElement(Arr2, Length2, Arr1[i]);
}

void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message << endl;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
}

int main() {
	srand((unsigned)time(NULL));
	int Length1, Length2 = 0, Arr1[100], Arr2[100];

	FillArray(Arr1, Length1);
	PrintArray(Arr1, Length1, "\n\n-------- Orginal Array --------\n");

	CopyArray(Arr1, Arr2, Length1, Length2);
	PrintArray(Arr2, Length2, "\n\n-------- Copyed Array --------\n");

	return 0;
}