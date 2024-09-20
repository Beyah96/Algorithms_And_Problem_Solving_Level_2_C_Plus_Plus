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

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}
string GenerateWord(){
	string word = "";
	for (int i = 0; i < 4; i++) 
		word += char(RandomNumber(65, 90));
	return word;
}

string GenerateKey() {
	string key = "";
	for (int i = 1; i <= 4; i++) {
		key += GenerateWord();
		if (i == 4)
			break;
		key += '-';
	}
	return key;
}

void FillArray(string Arr[100], int& Length) {
	Length = ReadNumber("Please enter how many Keys you will store: ");
	for (int i = 0; i < Length; i++)
		Arr[i] = GenerateKey();
}

void PrintArray(string Arr[100],int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i]<< endl;
}

int main() {
	srand((unsigned)time(NULL));

	int Length;
	string Arr[100];

	FillArray(Arr, Length);
	PrintArray(Arr, Length, "\n\n-----------   Keys   -----------\n");
	return 0;
}