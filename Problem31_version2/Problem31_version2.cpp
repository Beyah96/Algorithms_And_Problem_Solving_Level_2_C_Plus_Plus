#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}


int ReadNumber(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("Please enter how many number do you want to store in the array : ");
	for (int i = 0; i < Length; i++) {
		Arr[i] = ReadNumber("Please the element \"Element [" + to_string(i + 1)+"]\" : ");
	}
}

void Swap(int& Number1, int& Number2) {
	int temp = Number1;
	Number1 = Number2;
	Number2 = temp;
}

void ShuffleArray(int Arr[100], int Length) {
	for (int i = 0; i < ceil(Length/2); i++) {
		Swap(Arr[i], Arr[RandomNumber(ceil(Length / 2), Length - 1)]);
	}
}

void PrintArray(int Arr[100], int Length) {
	cout << "*****************************************************" << endl;
	for (int i = 0; i < Length; i++) {
		cout << "\nElement[" << i << "] : " << Arr[i] << endl;
	}
}

int main() {
	int Arr[100], Length;
	FillArray(Arr, Length);
	cout << "*****************************************************" << endl;
	cout << "*                ARRAY BEFORE SHUFFLE                " << endl;
	cout << "*****************************************************" << endl;
	PrintArray(Arr, Length);
	
	ShuffleArray(Arr, Length);
	cout << "*****************************************************" << endl;
	cout << "*                ARRAY AFTER SHUFFLE                 " << endl;
	cout << "*****************************************************" << endl;
	PrintArray(Arr, Length);
	return 0;
}