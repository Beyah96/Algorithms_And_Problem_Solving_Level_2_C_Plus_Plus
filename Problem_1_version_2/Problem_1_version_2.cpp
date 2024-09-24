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


