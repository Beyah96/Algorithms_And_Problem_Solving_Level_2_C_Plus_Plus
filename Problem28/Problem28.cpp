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

void CopyArray(int Arr1[100], int Arr2[100], int Length) {
	for (int i = 0; i < Length; i++)
		Arr2[i] = Arr1[i];	
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
	int Length;

	FillArray(Arr1, Length);

	cout << endl << "***************** Array 1 *****************" << endl;
	PrintArrayElements(Arr1, Length);

	CopyArray(Arr1, Arr2, Length);

	cout << endl << "***************** Array 2 *****************" << endl;
	PrintArrayElements(Arr2, Length);


	return 0;

}