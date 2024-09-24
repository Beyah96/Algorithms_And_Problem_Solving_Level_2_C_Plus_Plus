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

string CheckFinalWinner(stGameResult Game) {
	if (Game.PlayerWonCount > Game.ComputerWonCount)
		return "Player";
	else if (Game.ComputerWonCount > Game.PlayerWonCount)
		return "Computer";
	else
		return "No Winner";
}

string PrintChoice(enChoice Choice) {
	switch (Choice)
	{
	case enChoice::Stone:
		return "Stone";
	case enChoice::Paper:
		return "Paper";
	case enChoice::Scissor:
		return "Scissor";
	default:
		return "Unkown choice";
	}
}

string RoundWinnerName(enWinner Winner) {
	switch (Winner) {
	case enWinner::NoWinner:
		return "No Winner";
	case enWinner::Computer:
		return "Computer";
	case enWinner::Player:
		return "Player";
	default:
		return "Unkwon winner";
	}
}

void PrintRound(stRoundInfo Round) {
	cout << "\n\n------------ Round " + to_string(Round.RoundNumber) + " ------------ \n";
	cout << "Player   Choice : " << PrintChoice(Round.PlayerChoice) << endl;
	cout << "Computer Choice : " << PrintChoice(Round.ComputerChoice) << endl;
	cout << "Round   Winner  : " << RoundWinnerName(Round.Winner) << endl;
	cout << "--------------------------------- \n\n";
}

void CheckWinner(stGameResult& GameResult, stRoundInfo& RoundInfo) {
	RoundInfo.PlayerChoice = PlayerChoiceFunction();
	RoundInfo.ComputerChoice = ComputerChoiceFunction();
	if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice) {
		GameResult.DrawCount++;
		RoundInfo.Winner = enWinner::NoWinner;
	}
	else if ((RoundInfo.PlayerChoice == enChoice::Stone && RoundInfo.ComputerChoice == enChoice::Scissor) ||
		(RoundInfo.PlayerChoice == enChoice::Paper && RoundInfo.ComputerChoice == enChoice::Stone) ||
		(RoundInfo.PlayerChoice == enChoice::Scissor && RoundInfo.ComputerChoice == enChoice::Paper)) {
		GameResult.PlayerWonCount++;
		RoundInfo.Winner = enWinner::Player;
	}
	else {
		GameResult.ComputerWonCount++;
		RoundInfo.Winner = enWinner::Computer;
		cout << "\a" << endl;
	}
	ScreenColor(RoundInfo.Winner);
	PrintRound(RoundInfo);
}


void GameOver(stGameResult GameResult) {

	cout << "\n\n\t\t-------------------------------------- \n";
	cout << "\t\t     ++ + Game Over++ +     ";
	cout << "\n\t\t-------------------------------------- \n";
	cout << "\n\t\t----------- [Game Results] ----------- \n";
	cout << "\t\tGame Rounds : " << GameResult.NumberOfRounds << endl;
	cout << "\t\tPlayer won times : " << GameResult.PlayerWonCount << endl;
	cout << "\t\tComputer won times: " << GameResult.ComputerWonCount << endl;
	cout << "\t\tDraw times: " << GameResult.DrawCount << endl;
	cout << "\t\tFinal Winner: " << CheckFinalWinner(GameResult) << endl;
	cout << "\t\t-------------------------------------- \n";

}


void NewRound(stGameResult GameResult, stRoundInfo RoundInfo) {
	GameResult.NumberOfRounds = ReadNumber("How many rounds 1 to 10? : ", 10);
	string Choice;
	for (int i = 0; i < GameResult.NumberOfRounds; i++) {
		RoundInfo.RoundNumber = i + 1;
		CheckWinner(GameResult, RoundInfo);
	}
	GameOver(GameResult);
}

void NewGame(stGameResult GameResult, stRoundInfo& RoundInfo) {
	char Play;
	do {
		NewRound(GameResult, RoundInfo);
		cout << "Do you want to play again? (Y/N) ";
		cin >> Play;
	} while (Play == 'y' || Play == 'Y');
}

int main() {
	srand((unsigned)time(NULL));
	stGameResult GameResult;
	stRoundInfo RoundInfo;
	NewGame(GameResult, RoundInfo);

}








