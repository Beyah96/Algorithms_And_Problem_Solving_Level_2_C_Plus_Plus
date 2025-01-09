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

enOperationType PickRandomOperation(vector <enOperationType> OperationsType) {
	return OperationsType[GetRandomNumber(0, OperationsType.size())];
}

vector <enOperationType> GetOperationsType(enOperationType OperationType) {
	switch (OperationType)
	{
	case Add:
		return { enOperationType::Add };
	case Sub:
		return { enOperationType::Sub };
	case Mul:
		return { enOperationType::Mul };
	case Div:
		return { enOperationType::Div };
	case MixOperations:
		return { GetOperationsType(PickRandomOperation({OperationType})) };
	}
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

enum enResult {Correct  = 1, Wrong = 2};

bool isResultCorrect(enResult Result) {
	return (Result == enResult::Correct) ? true : false;
}
short Score(enResult Result) {
	return  isResultCorrect(Result) ? GameScore++ : GameScore ;
}



void PlayGame() {
	short Number = AskUserForNumber("How many questions do you want to answer? : ", 0, 10); // Number of Rounds
	enLevel Level = AskUserForLevel();

	enOperationType OperationType = AskUserForOperationType();

	//cout << "Result : " << GetOperationResult(GetOperationMembers(), );
	for (int i = 0; i < Number; i++) {
		cout << "Question [" << i + 1 << "/" << Number <<"] :" << endl;
		GetOperationMembers();
	}
}
int main() {
	srand((unsigned)time(NULL));
	PlayGame();

	system("pause>0");
	return 0;
}