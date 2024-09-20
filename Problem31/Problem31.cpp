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
//int OrderedNumber()
void FillArray(int Arr[100], int& Length) {
	Length = ReadNumber("\nPlease enter how many element do you want to store : ");
	Arr[0] = ReadNumber("\nEnter Element[1] : ");
	int temp;
	for (int i = 1; i < Length; i++) {
		temp = ReadNumber("Enter Element[" + to_string(i + 1) + "] : ");
		if (temp >= Arr[i - 1])
			Arr[i] = temp;
		else {
			cout << endl << "Wrong input : " + to_string(temp) + " is less than " + to_string(Arr[i - 1]) << "\nThe numbers should be ordered from 1 to N, retry again : \n" << endl;
			i--;
		}

	}
}
int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

bool ExistInArray(int Arr[100], int Number) {
	for (int i = 0; i < 100; i++) {
		if (Number == Arr[i])
			return true;

	}
	return false;
} 
void ShuffleIndexesFrom1toN(int indexes[100], int Length) {
	int index;
	for (int i=0; i<Length;i++){
		do {
			index = RandomNumber(0, Length-1);
		} while (ExistInArray(indexes, index));
		indexes[i] = index;
	}
}



void ShuffleArray(int Arr[100], int indexes[100], int Arrshuffled[100], int Length) {
	for (int i = 0; i < Length; i++) {
		Arrshuffled[indexes[i]] = Arr[i];
	}

}


void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << "Element[" << i << "] : " << Arr[i] << endl;
}

int main() {
	int Arr[100], indexes[100], Arrshuffled[100];
	int Length;

	FillArray(Arr, Length);
	ShuffleIndexesFrom1toN(indexes, Length);
	ShuffleArray(Arr, indexes, Arrshuffled, Length);

	//PrintArray(indexes, Length, "\n\nIndexes the shuffle : \n");
	PrintArray(Arr, Length, "\n\nThe array element before the shuffle : \n");
	PrintArray(Arrshuffled, Length, "\n\nThe array element after the shuffle : \n");


	return 0;
}