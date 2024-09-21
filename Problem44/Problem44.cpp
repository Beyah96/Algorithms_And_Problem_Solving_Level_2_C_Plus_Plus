#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

int ReadNumber(string Message) {
	int Number;
	do{
		cout << Message;
		cin >> Number;
	}while (Number < 0);
	return Number;
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("Please enter how many element you want to strore : ");
	for (int i = 0; i < Length; i++)
		Arr[i] = RandomNumber(-100, 100);
}

int CountPositiveNumbers(int Arr[100], int Length) {
	int Counter = 0;
	for (int i = 0; i < Length; i++)
		if (Arr[i] > 0)
			Counter++;
	return Counter;
}

void PrintArrayAndCountOfPositiveNumbers(int Arr[100], int Length) {
	cout << "\n\n------------- Array Content -------------\n";
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
	cout << "\n\n------------- Array Content -------------\n";
	cout << " Positive number count is : " << CountPositiveNumbers(Arr, Length) << endl;

}

int main() {
	srand((unsigned)time(NULL));
	int Arr[100], Length;

	FillArray(Arr, Length);
	PrintArrayAndCountOfPositiveNumbers(Arr, Length);
}