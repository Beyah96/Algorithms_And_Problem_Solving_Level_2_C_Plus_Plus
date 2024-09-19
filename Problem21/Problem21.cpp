#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}
string KeyGenerator() {
	string word = "";
	for (int i = 1; i <=4; i++){
		for (int j = 1; j <= 4; j++) 
			word = word + char(RandomNumber(65, 90));
		if (i == 4) {
			break;
		}
		word = word + '-';
	}
	return word;
}
void KeysGenerator() {
	int HowManyKeys;
	cout << "How many Keys do you want to generate : ";
	cin >> HowManyKeys;
	
	for (int i = 1; i <= HowManyKeys; i++) {
		cout << "Key [" << i << "] : " << KeyGenerator() << endl;
	}
}

int main() {
	KeysGenerator();
	return 0;
}