#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enPrimeComposite{ Prime, Composite};

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

enPrimeComposite CheckNumber(int Number) {
	for (int i = 2; i < Number; i++)
		if ((Number % i == 0) && Number > 3)
			return enPrimeComposite::Composite;
	return enPrimeComposite::Prime;
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("How many elements do you want to generate : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(1, 10);
}

void AddElement(int Arr[100], int& Length, int NewElement) {
	Length++;
	Arr[Length-1] = NewElement;
}

void CopyPrimeNumbers(int Arr[100], int Length, int ArrPrimeNumbers[100], int& LengthArrPrimeNumbers) {
	LengthArrPrimeNumbers = 0;
	for (int i = 0; i < Length; i++) 
		if (CheckNumber(Arr[i]) == enPrimeComposite::Prime){
			AddElement(ArrPrimeNumbers, LengthArrPrimeNumbers, Arr[i]);
		}
}

void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
}

int main() {
	srand((unsigned)time(NULL));
	int Arr[100], ArrPrimeNumbers[100], Length, LengthArrayPrimeNumbers;

	FillArray(Arr, Length);
	PrintArray(Arr, Length, "\n\n--------- Array source ---------\n");
	CopyPrimeNumbers(Arr, Length, ArrPrimeNumbers, LengthArrayPrimeNumbers);
	PrintArray(ArrPrimeNumbers, LengthArrayPrimeNumbers, "\n\n--------- Array source ---------\n");

	return 0;
}