#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enChoice { Stone = 1, Paper = 2, Scissor = 3 };
enum enWinner { Player = 2, Computer = 4, NoWinner = 6 };

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

enChoice UserChoice() {
	return (enChoice)ReadNumber("Your Choice [1] : Stone, [2] : Paper, [3] : Scissor ? : ", 4);
}

enChoice ComputerChoice() {
	return (enChoice)RandomNumber(1, 3);
}

void SetScreenColor(enWinner Winner) {
	string Message;
	if (Winner == enWinner::Computer)
		Message = "color " + to_string(int(enWinner::Computer)) + "F";
	else if (Winner == enWinner::Player)
		Message = "color " + to_string(int(enWinner::Player)) + "F";
	else
		Message = "color " + to_string(int(enWinner::NoWinner)) + "F";

	system(Message.c_str());
}


string CheckGameWinner(int FinalScores[3], int NumberOfRounds) {
	if (FinalScores[0] > FinalScores[1])
		return "Player";
	else if (FinalScores[1] > FinalScores[0])
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

string GetRoundWinnerName(enWinner Winner) {
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
void PrintRoundDetails(int RoundNumber, string User, string Computer, string GetRoundWinnerName) {
	cout << "\n\n------------ Round " + to_string(RoundNumber) + " ------------ \n";
	cout << "Player   Choice : " << User << endl;
	cout << "Computer Choice : " << Computer << endl;
	cout << "Round   Winner  : " << GetRoundWinnerName << endl;
	cout << "--------------------------------- \n\n";
}

enWinner CheckWinner(int RoundNumber) {
	enWinner Score;
	enChoice User, Computer;
	User = UserChoice();
	Computer = ComputerChoice();
	if (User == Computer) {
		Score = enWinner::NoWinner;
	}
	else if ((User == enChoice::Stone && Computer == enChoice::Scissor) ||
		(User == enChoice::Paper && Computer == enChoice::Stone) ||
		(User == enChoice::Scissor && Computer == enChoice::Paper)) {
		Score = enWinner::Player;
	}
	else {
		Score = enWinner::Computer;
	}
	SetScreenColor(Score);
	PrintRoundDetails(RoundNumber, PrintChoice(User), PrintChoice(Computer), GetRoundWinnerName(Score));
	return Score;
}


void GetFinalScores(enWinner Score[10], int Length, int FinalScores[3]) {
	FinalScores[0] = FinalScores[1] = FinalScores[2] = 0;
	for (int i = 0; i < Length; i++) {
		if (Score[i] == enWinner::Player)
			FinalScores[0]++;
		else if (Score[i] == enWinner::Computer)
			FinalScores[1]++;
		else
			FinalScores[2]++;
	}
}


void PrintGameOverScreen(int FinalScores[3], int NumberOfRounds) {

	cout << "\n\n\t\t-------------------------------------- \n";
	cout << "\t\t     ++ + Game Over++ +     ";
	cout << "\n\t\t-------------------------------------- \n";
	cout << "\n\t\t----------- [Game Results] ----------- \n";
	cout << "\t\tGame Rounds : " << NumberOfRounds << endl;
	cout << "\t\tPlayer won times : " << FinalScores[0] << endl;
	cout << "\t\tComputer won times: " << FinalScores[1] << endl;
	cout << "\t\tDraw times: " << FinalScores[2] << endl;
	cout << "\t\tFinal Winner: " << CheckGameWinner(FinalScores, NumberOfRounds) << endl;
	cout << "\t\t-------------------------------------- \n";

}

void PlayGame(int& NumberOfRounds, enWinner Score[10], int FinalScores[3]) {
	NumberOfRounds = ReadNumber("How many rounds 1 to 10? : ", 10);
	string Choice;
	for (int i = 0; i < NumberOfRounds; i++) {
		Score[i] = CheckWinner(i + 1);

	}
	GetFinalScores(Score, NumberOfRounds, FinalScores);
	PrintGameOverScreen(FinalScores, NumberOfRounds);
}


void NewGame(int& NumberOfRounds, enWinner Score[10], int FinalScores[3]) {
	char Play;
	do {
		PlayGame(NumberOfRounds, Score, FinalScores);
		cout << "Do you want to play again? (Y/N) ";
		cin >> Play;
	} while (Play == 'y' || Play == 'Y');

}
int main() {
	srand((unsigned)time(NULL));
	int NumberOfRounds, FinalScores[3];
	enWinner RoundsScores[10];
	NewGame(NumberOfRounds, RoundsScores, FinalScores);

}