#include <iostream>
#include <cstdlib>
#include <cmath>
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
	enPrimeComposite NumberType = enPrimeComposite::Prime;
	for (int i = 2; i <= ceil(sqrt(Number)); i++)
		if ((Number % i == 0) && (Number > 3))
			NumberType = enPrimeComposite::Composite;
	return NumberType;
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("How many elements you will enter? : ");
	for (int i = 1; i <= Length; i++)
		Arr[i - 1] = RandomNumber(1, 100);
}

int CopyArrayPrimeNumbers(int Arr1[100], int Arr2[100], int Length) {
	int Counter = 0;
	for (int i = 0; i < Length; i++)
		if (CheckNumber(Arr1[i]) == enPrimeComposite::Prime) {
			Arr2[Counter] = Arr1[i];
			Counter++;
		}
	return Counter;
}

void PrintArrayElements(int Arr[100], int Length) {
	cout << "*******************************************" << endl;
	cout << "*             Array's elements             *" << endl;
	cout << "*******************************************" << endl;
	for (int i = 0; i < Length; i++)
		cout << "Element [" << i + 1 << "] : " << Arr[i] << endl;
}

int main() {
	srand((unsigned)time(NULL));
	int Arr1[100], Arr2[100];
	int Length, Length2;

	FillArray(Arr1, Length);
	cout << endl << "***************** Array 1 *****************" << endl;
	PrintArrayElements(Arr1, Length);

	Length2 = CopyArrayPrimeNumbers(Arr1, Arr2, Length);

	cout << endl << "***************** Array 2 *****************" << endl;
	PrintArrayElements(Arr2, Length2);


	return 0;

}