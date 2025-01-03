#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


enum enLevel {Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4 };
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


void GetOperationMembers() {

}

short Score(short Number) {
	return Number;
}



void PlayGame() {
	short Number = AskUserForNumber("How many questions do you want to answer? : ", 0, 10);
	enLevel Level = AskUserForLevel();
	enOperationType OperationType = AskUserForOperationType();

	for (int i = 0; i < Number; i++) {
		cout << "Question [" << i + 1 << "/" << Number <<"] :" << endl;
		cout << "Score : " << Score(i) << endl;
	}
}
int main() {
	srand((unsigned)time(NULL));
	//PlayGame();
	cout << GetRandomNumber(37, 39);
	system("pause>0");
	return 0;
}