#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

enum enRandomOutput{ SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

int RandomNumber( int From, int To) {
	return rand() % (To - From + 1) + From;
}

void RandomGetter() {
	enRandomOutput Pick;
	int Choice;
	cout << "Please choose one : \n - (1) Small Letter \n - (2) Capital Letter \n - (3) Special character \n - (4) Digit \nYour choice : ";
	cin >> Choice;
	Pick = enRandomOutput(Choice);
	if (Pick == enRandomOutput::SmallLetter)
		cout << char(RandomNumber(97, 122));
	else if (Pick == enRandomOutput::CapitalLetter)
		cout << char (RandomNumber(65, 90));
	else if (Pick == enRandomOutput::SpecialCharacter)
		cout << char(RandomNumber(34, 47));
	else
		cout << char(RandomNumber(48, 57));
}

int main() {
	srand((unsigned)time(NULL));
	RandomGetter();

}