#include <iostream>
#include <string>
#include <cmath>
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


void StoreElements(int Arr[100], int& Length) {
	Length = ReadNumber("How many elements you will store : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = ReadNumber("Enter an elemnt : ");
}

void PrintAllArrayElements(int Arr[100], int Length) {

	for (int i = 0; i < Length; i++)
		cout << "Element[" << i << "] = " << Arr[i] << endl;
}

void CheckNumber(int Arr[100], int Length) {
	int SearchedElement = ReadNumber("Please enter the number you want to check : ");
	int Counter = 0;
	for (int i = 0; i < Length; i++)
		if (Arr[i] == SearchedElement)
			Counter++;
	cout << SearchedElement << " is repeated " << Counter << "time(s)" << endl;
}



int main() {
	int Arr[100];
	int Length;
	StoreElements(Arr, Length);
	PrintAllArrayElements(Arr, Length);
	CheckNumber(Arr, Length);
	return 0;
}