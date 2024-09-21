#include <iostream>

using namespace std;

int ReadNumber(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void FillAray(int Arr[100], int& Length) {
	cout << "---------- READING ELEMENTS ----------" << endl;
	bool AddElement;
	Length = 0;
	do {
		Arr[Length] = ReadNumber("Please enter a number : ");
		Length++;
		cout << "Do you want to add more numbers ([1]:YES / [0] : NO) : ";
		cin >> AddElement;
		
	} while (AddElement);
}

void PrintArray(int Arr[100], int Length) {
	cout << "---------- PRINTING ELEMENTS ----------" << endl;
	cout << "Array Length : " << Length << endl;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
}

int main() {
	int Length, Arr[100];
	FillAray(Arr, Length);
	PrintArray(Arr, Length);
	return 0;
}