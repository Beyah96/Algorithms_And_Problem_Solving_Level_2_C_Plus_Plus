#include <iostream>
#include <cstdlib>
using namespace std;


enum enLevel { Easy = 1, Med = 2, Hard = 3, MixLevels = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOperations = 5 };
struct stQuestion {
	short Number1 = 0, Number2 = 0;
	enLevel Level;
	enOperationType OperationType;
	int CorrectAnswer, PlayerAnswer;
	bool AnswerResult = false;
};

struct stQuiz {
	stQuestion QuestionsList[100];
	short NumberOfQuestions;
	short NumberOfWrongAnswers = 0;
	bool isPass = false;
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
	return (enLevel)AskUserForNumber("Enter question level [1] Easy, [2] Med, [3] Hard, [4] Mix : ", 1, 4);
}

enOperationType AskUserForOperationType() {
	return (enOperationType)AskUserForNumber("Enter operation type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix : ", 1, 4);
}


void ResetScreen() {
	system("cls");
	system("color 0F");
};

enLevel GetRandomLevel() {
	return (enLevel)GetRandomNumber(1, 3);
}

enOperationType GetRandomOperation() {
	return (enOperationType)GetRandomNumber(1, 4);
}

int SimpleCalculator(short Number1, short Number2, enOperationType Operation) {
	switch (Operation)
	{
	case Add:
		return Number1 + Number2;
	case Sub:
		return Number1 - Number2;
	case Mul:
		return Number1 * Number2;
	case Div:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}
stQuestion GenerateQuestion(stQuiz Quiz) {
	stQuestion Question;

	if (Quiz.QuestionsList->Level == enLevel::MixLevels)
		Question.Level = GetRandomLevel();
	if (Quiz.QuestionsList->OperationType == enOperationType::MixOperations)
		Question.OperationType = GetRandomOperation();

	switch (Question.OperationType)
	{
	case Easy:
		Question.Number1 = GetRandomNumber(1, 10);
		Question.Number2 = GetRandomNumber(1, 10);
	case Med:
		Question.Number1 = GetRandomNumber(10, 100);
		Question.Number2 = GetRandomNumber(10, 100);
	case Hard:
		Question.Number1 = GetRandomNumber(100, 1000);
		Question.Number2 = GetRandomNumber(100, 1000);
	default:
		break;
	}
	Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
	return Question;
}
void GenerateQuizQuestions(stQuiz Quiz) {
	for (short Question = 0; Question < Quiz.NumberOfQuestions; Question++)
		Quiz.QuestionsList[Question] = GenerateQuestion(Quiz);
};
void AskAndCorrectQuestionsListAnswers(stQuiz Quiz) {
};
void PrintQuizResult(stQuiz Quiz) {};

void PlayMathGame() {
	stQuiz Quiz;
	Quiz.NumberOfQuestions = AskUserForNumber("How many questions do you want to answer? : ", 0, 10); // Number of Rounds
	Quiz.QuestionsList->Level = AskUserForLevel();
	Quiz.QuestionsList->OperationType = AskUserForOperationType();

	GenerateQuizQuestions(Quiz);
	AskAndCorrectQuestionsListAnswers(Quiz);
	PrintQuizResult(Quiz);

};

void StartGame() {
	char PlayNewGame = 'Y';
	do {
		ResetScreen();
		PlayMathGame();
		cout << "Do you want to play a new game ? : ";
		cin >> PlayNewGame;
	} while (toupper(PlayNewGame) == 'Y');
}

int main() {
	srand((unsigned)time(NULL));

	system("pause>0");
	return 0;
}