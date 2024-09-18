#include <iostream>
#include <string>

using namespace std;

int ReadName(string Message) {
	int Number;
	do{
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void PrintInvertedNumberPattern(int Number) {
	for (int i = Number; i >0; i--) {
		for (int j = 1; j <= i; j++)
			cout << i;
		cout << "\n";
	}
}
int main() {
	PrintInvertedNumberPattern(ReadName("Please enter a positive number : "));
	return 0;
}