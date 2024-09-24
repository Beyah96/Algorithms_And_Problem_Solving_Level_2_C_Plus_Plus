#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enChoice { Stone = 1, Paper = 2, Scissor = 3 };
enum enWinner { Player = 2, Computer = 4, NoWinner = 6 };

struct stRoundInfo {
	int RoundNumber;
	enChoice PlayerChoice, ComputerChoice;
	enWinner Winner;
};
struct stGameResult {
	int NumberOfRounds, ComputerWonCount = 0, PlayerWonCount = 0, DrawCount = 0;
	string GameWinnerName;
};


int ReadNumber(string Message, int Limit) {
	int Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0 || Number > Limit);
	return Number;
}

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

enChoice PlayerChoiceFunction() {
	return (enChoice)ReadNumber("Your Choice [1] : Stone, [2] : Paper, [3] : Scissor ? : ", 4);
}

enChoice ComputerChoiceFunction() {
	return (enChoice)RandomNumber(1, 3);
}


void ScreenColor(enWinner Winner) {
	string Message;
	if (Winner == enWinner::Computer)
		Message = "color " + to_string(int(enWinner::Computer)) + "F";
	else if (Winner == enWinner::Player)
		Message = "color " + to_string(int(enWinner::Player)) + "F";
	else
		Message = "color " + to_string(int(enWinner::NoWinner)) + "F";

	system(Message.c_str());
}

