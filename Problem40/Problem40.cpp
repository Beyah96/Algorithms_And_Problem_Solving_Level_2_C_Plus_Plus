#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

bool isExist(int Arr[100], int Length, int Element) {
	for (int i = 0; i < Length; i++)
		if (Arr[i] == Element)
			return true;
	return false;
}

void AddElement(int Arr[100], int& Length, int NewElement) {
	Length++;
	Arr[Length - 1] = NewElement;
}

void CopyArrayDistinctElement(int ArrSource[100], int ArrDestination[100], int LengthSourceArr, int& LengthDestinationArr) {
	LengthDestinationArr = 0;
	for (int i = 0; i < LengthSourceArr; i++)
		if (!isExist(ArrDestination, LengthDestinationArr, ArrSource[i]))
			AddElement(ArrDestination, LengthDestinationArr, ArrSource[i]);
}

void PrintArray(int Arr[100], int Length, string Message) {
	cout << Message;
	for (int i = 0; i < Length; i++)
		cout << "Arr[" << i << "] : " << Arr[i] << endl;
}
int main() {
	int Length = 10, LengthDistinctElements, Arr[100] = { 1, 1, 1, 2,5, 5, 3, 9, 9, 10 }, ArrDistinctElements[100];
	CopyArrayDistinctElement(Arr, ArrDistinctElements, Length, LengthDistinctElements);
	PrintArray(Arr, Length, "\n\n---------- Array Source ----------\n");
	PrintArray(ArrDistinctElements, LengthDistinctElements, "\n\n---------- Array Source ----------\n");
	return 0;
}