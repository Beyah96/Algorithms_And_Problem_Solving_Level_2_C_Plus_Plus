#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enStonePaperScissor { Stone = 1, Paper = 2, Scissor = 3 };
enum enHwoWon { Player = 2, Computer = 4, NoWinner = 6 };

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

enStonePaperScissor UserChoice() {
	return (enStonePaperScissor)ReadNumber("Your Choice [1] : Stone, [2] : Paper, [3] : Scissor ? : ", 4);
}

enStonePaperScissor ComputerChoice() {
	return (enStonePaperScissor)RandomNumber(1, 3);
}

void ScreenColor(enHwoWon Winner) {
	string Message;
	if (Winner == enHwoWon::Computer)
		Message = "color " + to_string(int(enHwoWon::Computer)) + "F";
	else if (Winner == enHwoWon::Player)
		Message = "color " + to_string(int(enHwoWon::Player)) + "F";
	else
		Message = "color " + to_string(int(enHwoWon::NoWinner)) + "F";

	system(Message.c_str());
}


string CheckFinalWinner(int FinalScores[3], int NumberOfRounds) {
	if (FinalScores[0] > FinalScores[1])
		return "Player";
	else if (FinalScores[1] > FinalScores[0])
		return "Computer";
	else
		return "No Winner";
}

string PrintChoice(enStonePaperScissor Choice) {
	switch (Choice)
	{
	case enStonePaperScissor::Stone:
		return "Stone";
	case enStonePaperScissor::Paper:
		return "Paper";
	case enStonePaperScissor::Scissor:
		return "Scissor";
	default:
		return "Unkown choice";
	}
}

string RoundWinnerName(enHwoWon Winner) {
	switch (Winner) {
	case enHwoWon::NoWinner:
		return "No Winner";
	case enHwoWon::Computer:
		return "Computer";
	case enHwoWon::Player:
		return "Player";
	default:
		return "Unkwon winner";
	}
}
void PrintRound(int RoundNumber, string User, string Computer, string RoundWinnerName) {
	cout << "\n\n------------ Round " + to_string(RoundNumber) + " ------------ \n";
	cout << "Player   Choice : " << User << endl;
	cout << "Computer Choice : " << Computer << endl;
	cout << "Round   Winner  : " << RoundWinnerName << endl;
	cout << "--------------------------------- \n\n";
}

enHwoWon CheckWinner(int RoundNumber) {
	enHwoWon Score;
	enStonePaperScissor User, Computer;
	User = UserChoice();
	Computer = ComputerChoice();
	if (User == Computer) {
		Score = enHwoWon::NoWinner;
	}
	else if ((User == enStonePaperScissor::Stone && Computer == enStonePaperScissor::Scissor) ||
		(User == enStonePaperScissor::Paper && Computer == enStonePaperScissor::Stone) ||
		(User == enStonePaperScissor::Scissor && Computer == enStonePaperScissor::Paper)) {
		Score = enHwoWon::Player;
	}
	else {
		Score = enHwoWon::Computer;
	}
	ScreenColor(Score);
	PrintRound(RoundNumber, PrintChoice(User), PrintChoice(Computer), RoundWinnerName(Score));
	return Score;
}


void GetFinalScores(enHwoWon Score[10], int Length, int FinalScores[3]) {
	FinalScores[0] = FinalScores[1] = FinalScores[2] = 0;
	for (int i = 0; i < Length; i++) {
		if (Score[i] == enHwoWon::Player)
			FinalScores[0]++;
		else if (Score[i] == enHwoWon::Computer)
			FinalScores[1]++;
		else
			FinalScores[2]++;
	}
}


void GameOver(int FinalScores[3], int NumberOfRounds) {

	cout << "\n\n\t\t-------------------------------------- \n";
	cout << "\t\t     ++ + Game Over++ +     ";
	cout << "\n\t\t-------------------------------------- \n";
	cout << "\n\t\t----------- [Game Results] ----------- \n";
	cout << "\t\tGame Rounds : " << NumberOfRounds << endl;
	cout << "\t\tPlayer won times : " << FinalScores[0] << endl;
	cout << "\t\tComputer won times: " << FinalScores[1] << endl;
	cout << "\t\tDraw times: " << FinalScores[2] << endl;
	cout << "\t\tFinal Winner: " << CheckFinalWinner(FinalScores, NumberOfRounds) << endl;
	cout << "\t\t-------------------------------------- \n";

}

void Game(int& NumberOfRounds, enHwoWon Score[10], int FinalScores[3]) {
	NumberOfRounds = ReadNumber("How many rounds 1 to 10? : ", 10);
	string Choice;
	for (int i = 0; i < NumberOfRounds; i++) {
		Score[i] = CheckWinner(i+1);

	}
	GetFinalScores(Score, NumberOfRounds, FinalScores);
	GameOver(FinalScores, NumberOfRounds);
}


void NewGame(int& NumberOfRounds, enHwoWon Score[10], int FinalScores[3]) {
	char Play;
	do {
		Game(NumberOfRounds, Score, FinalScores);
		cout << "Do you want to play again? (Y/N) ";
		cin >> Play;
	} while (Play == 'y' || Play == 'Y');

}
int main() {
	srand((unsigned)time(NULL));
	int NumberOfRounds, FinalScores[3];
	enHwoWon RoundsScores[10];
	NewGame(NumberOfRounds, RoundsScores, FinalScores);

}