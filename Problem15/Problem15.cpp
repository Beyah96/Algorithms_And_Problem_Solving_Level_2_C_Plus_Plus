#include <iostream>
#include <string>

using namespace std;

int ReadName(string Message) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void PrintInvertedNumberPattern(int Number) {
	for (int i = 1; i <= Number; i++) {
		for (int j = 1; j <= i; j++)
			cout << char (i+64);
		cout << "\n";
	}
}
int main() {
	PrintInvertedNumberPattern(ReadName("Please enter a positive number : "));
	return 0;
}