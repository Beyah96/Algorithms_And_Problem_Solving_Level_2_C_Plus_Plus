#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message){
	int Number;
	do {
		cout << endl << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}
void FillArrayWithRandomNumbers(int Arr[100], int Length) {
	for (int i = 1; i <= Length; i++) 
		Arr[i - 1] = RandomNumber(1,100);
}

void SumArrays(int Arr1[100], int Arr2[100], int Arr3[100], int Length) {
	for (int i = 0; i < Length; i++)
		Arr3[i] = Arr1[i] + Arr2[i];
}

void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << endl << "Element ["<< i <<"] : " << Arr[i];
}

int main() {
	srand((unsigned)time(NULL));
	int Arr1[100], Arr2[100], Arr3[100];
	int Length;
	
	Length = ReadNumber("Please enter how many elements do you want to store? : ");


	FillArrayWithRandomNumbers(Arr1, Length);
	FillArrayWithRandomNumbers(Arr2, Length);

	SumArrays(Arr1, Arr2, Arr3, Length);

	PrintArray(Arr1, Length, "\n\n*********** Arr1 ***********");
	PrintArray(Arr2, Length, "\n\n*********** Arr2 ***********");
	PrintArray(Arr3, Length, "\n\n*********** Arr3 ***********");


	return 0;
}