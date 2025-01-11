#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;
static short GameScore;

enum enLevel {Easy = 1, Med = 2, Hard = 3, MixLevels = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOperations = 5 };
struct stQuiz {
	short Number;
	enLevel Level;
	enOperationType OperationType;
};

short AskUserForNumber(string Message, short minNumber, short maxNumber) {
	short Number;
	do {
		cout << Message;
		cin >> Number;
	} while (Number < minNumber && Number > maxNumber);
	return Number;
}

short GetRandomNumber(short From, short To) {
	return rand() % (To - From + 1) + From;
}


enLevel AskUserForLevel() {
	return (enLevel) AskUserForNumber("Enter question level [1] Easy, [2] Med, [3] Hard, [4] Mix : ", 1, 4);
}

enOperationType AskUserForOperationType() {
	return (enOperationType) AskUserForNumber("Enter operation type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix : ", 1, 4);
}


vector <short> GetOperationMembers(enLevel Level) {
	
	switch (Level)
	{
	case Easy:
		return { GetRandomNumber(0, 10), GetRandomNumber(0, 10) };
	case Med:
		return { GetRandomNumber(10, 100), GetRandomNumber(10, 100) };
	case Hard:
		return { GetRandomNumber(100, 1000), GetRandomNumber(100, 1000) };
	case MixLevels:
		return { GetRandomNumber(0, 1000), GetRandomNumber(0, 1000) };
	}
}

enOperationType PickRandomOperation() {
	return (enOperationType) GetRandomNumber(1,6);
}

enOperationType GetOperationsType(enOperationType OperationType) {
	if (OperationType == enOperationType::MixOperations)
		return GetOperationsType(PickRandomOperation());
	else
		return OperationType;
}	

int GetOperationResult(vector <short> vMembers, enOperationType PickedOpeation) {
	switch (PickedOpeation)
	{
	case Add:
		return vMembers[0] + vMembers[1];
	case Sub:
		return vMembers[0] - vMembers[1];
	case Mul:
		return vMembers[0] * vMembers[1];
	case Div:
		return vMembers[0] / vMembers[1];
	case MixOperations:
		GetOperationResult(vMembers, PickedOpeation);
	}
}


bool isResultCorrect(int Result, int userResult) {
	return (Result == userResult) ? true : false;
}
short Score(int Result, int userResult) {
	return  isResultCorrect(Result, userResult) ? GameScore++ : GameScore ;
}

char PrintOperationSign(enOperationType OperationType) {
	switch (OperationType)
	{
	case Add:
		return '+';
	case Sub:
		return '-';
	case Mul:
		return '*';
	case Div:
		return '/';
	}
}

void PlayGame() {
	short Number = AskUserForNumber("How many questions do you want to answer? : ", 0, 10); // Number of Rounds
	enLevel Level = AskUserForLevel();
	vector <short> vMembers;
	enOperationType OperationType = AskUserForOperationType();
	
	vector <enOperationType> OperationsType;
	int Result, userInput;
	for (int i = 0; i < Number; i++)
		OperationsType.push_back((GetOperationsType(OperationType)));

	for (int i = 0; i < Number; i++) {
		cout << endl << endl << "Question [" << i + 1 << "/" << Number <<"] :" << endl;
		vMembers = GetOperationMembers(Level);
		Result = GetOperationResult(vMembers, OperationsType[i]);
		cout << vMembers[0] << endl << PrintOperationSign(OperationsType[i]) << endl << vMembers[1] << endl << "___________" << endl;
		cin >> userInput;
		cout << "The result : " << Result << endl;
		cout << (isResultCorrect(Result, userInput)) ? "Correct" : "Wrong";
		system("color 2F");
		Score(Result, userInput);
		cout << endl << "Score : " << GameScore;
		vMembers.clear();
		
	}
}
int main() {
	srand((unsigned)time(NULL));
	PlayGame();

	system("pause>0");
	return 0;
}