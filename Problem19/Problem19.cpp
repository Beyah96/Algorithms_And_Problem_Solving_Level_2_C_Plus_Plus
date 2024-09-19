#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int RandomNmuber(int From, int To) {
	return rand() % (To - From + 1) + From;
}



int main() {

	int From, To;

	cout << "Enter the lower bound for the random number : ";
	cin >> From;

	cout << "Enter the upper bound for the random number : ";
	cin >> To;

	srand((unsigned)time(NULL));

	cout <<"This is a random number between " + to_string(From) + " and " + to_string(To) + " : " << RandomNmuber(From, To);

	return 0;

}