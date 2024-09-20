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
	return rand() % (To - From + 1);
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("Please enter how many numbers do you want to generate : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(1,100);
}

int SearchNumberInArray(int Array[100], int Length, int SearchedNumber) {
	for (int i = 0; i < Length; i++) 
		if (Array[i] == SearchedNumber) 
			return i;	
	return -1;
}
void PrintSerchedNumber(int Arr[100], int Length, int SearchedNumber) {
	int index = SearchNumberInArray(Arr, Length, SearchedNumber);
	if (index == -1)
		cout << "The number is not found :-) " << endl;
	else
		cout << "The number found at position : " << index << endl << "The number found its order : " << index + 1 << endl;

}

void SearchNumber(int Arr[100], int Length) {
	int SearchedNumber = ReadNumber("Please enter a number to search for : ");
	cout << "The Number you're locking for is : " << SearchedNumber << endl;
	PrintSerchedNumber(Arr, Length, SearchedNumber);
	
}

void PrintArray(int Arr[100], int Length) {
	cout << "\n---------- Array content ----------" << endl;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
}

int main() {
	srand((unsigned)time(NULL));
	int Arr[100], Length;

	FillArray(Arr, Length);
	PrintArray(Arr, Length);
	SearchNumber(Arr, Length);

	return 0;
}