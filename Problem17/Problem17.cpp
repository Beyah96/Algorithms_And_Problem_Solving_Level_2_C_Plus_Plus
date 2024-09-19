#include <iostream>
#include <string>

using namespace std;

string ReadPassword(){
	string PasswordCode;
	cout << "Please enter a 3-Letters password (All capitals) : ";
	cin >> PasswordCode;
	return PasswordCode;
}

bool CheckPassword( string PasswordCode) {
	string word = "";
	int TrialsNumber = 0;
	for (int i = 0; i <= 25; i++)
		for (int j = 0; j <= 25; j++)
			for (int k = 0; k <= 25; k++) {
				word += char(i + 65);
				word += char(j + 65);
				word += char(k + 65);
				
				TrialsNumber++;
				cout << "Trial [" << TrialsNumber << "] : " << word << endl;

				if (word == PasswordCode) {
					cout << "Password is " << word << endl;
					cout << "Found after " << TrialsNumber << " Trial(s)";
					return true;
				}
				word = "";
			}


}

int main() {
	CheckPassword(ReadPassword());
}