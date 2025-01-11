# Math Quiz Game Project

![Difficulty](https://img.shields.io/badge/Project-Easy-8A2BE2)
![Level](https://img.shields.io/badge/Order-First%20`C++` %20Project-32CD32)
![`C++` ](https://img.shields.io/badge/C%2B%2B-Beginner%20Friendly-00599C)

This project implements a basic **Math Quiz Game** in `C++`  where a player can test their math skills. The game generates questions based on the player's chosen difficulty level and operation type. The rules are simple:

```
- Answer correctly to earn points
- Choose difficulty level and operation type
- Complete a set number of questions
```
The player selects their preferences, and the game generates questions accordingly. The game tracks correct and incorrect answers, providing a final score at the end of all rounds.

## Features

- **`Difficulty selection`** : The player chooses between Easy, Medium, Hard, or Mixed levels.
- **`Operation choice`** : The player selects Addition, Subtraction, Multiplication, Division, or Mixed operations.
- **`Question generation`** : The game creates random questions based on the chosen settings.
- **`Answer evaluation`** : The game checks the player's answers and provides immediate feedback.
- **`Score tracking`** : The number of correct and incorrect answers is tracked throughout the game.
- **`Final result`** : The game summarizes the player's performance, including total correct answers and overall score.
- **`Color feedback`** : The game provides color feedback for correct and incorrect answers (Windows only).

---

## Detailed Code Breakdown

### 1. **Enumerations** 
The game uses two main enumerations:
- **`enQuestionsLevel`** : Represents Easy, Medium, Hard, or Mixed difficulty levels.
- **`enOperationType`** : Represents Addition, Subtraction, Multiplication, Division, or Mixed operations.

### 2. **Random Number Generation**
The game uses a random number generator to create diverse questions:
```cpp
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}
```
- This function generates random numbers for creating varied math questions.

### 3. **Question Generation**
`GenerateQuestion()`: Creates a question based on the chosen difficulty and operation type:
```cpp
stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType) {
    stQuestion Question;
    // Logic to generate question based on level and operation type
    return Question;
}
```
This ensures that questions are tailored to the player's chosen settings.

### 4. **Answer Evaluation**
The core of the game is evaluating the player's answers:
```cpp
void CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber) {
    if (Quizz.QuestionList[QuestionNumber].PlayerAnswer != Quizz.QuestionList[QuestionNumber].CorrectAnswer) {
        // Handle incorrect answer
    } else {
        // Handle correct answer
    }
    SetScreenColor(Quizz.QuestionList[QuestionNumber].AnswerResult);
    // Update game statistics
}
```
This function compares the player's answer to the correct one and updates the game statistics accordingly.

### 5. **Game Summary**
At the end of all questions, the game outputs a summary of results:
```cpp
void PrintQuizzResults(stQuizz Quizz) {
    // Display number of questions, difficulty level, operation type
    // Show number of correct and incorrect answers
    // Calculate and display final score
}
```
This function provides a comprehensive overview of the player's performance in the quiz.

## How It Works
### **Game Flow**
1. `Setup`: The player chooses the number of questions, difficulty level, and operation type.
2. `Question Generation`: The game creates questions based on the chosen settings.
3. `Answering`: For each question, the player inputs their answer.
4. `Evaluation`: The game immediately checks the answer and provides feedback.
5. `Progress`: The game tracks correct and incorrect answers throughout.
6. `Final Summary`: After all questions are answered, the game displays a summary of the player's performance.
7. `Replay Option`: The player can choose to play another round or exit.

### **Example Question**
```
Question [1/5]
7 + 3 = ?
Your Answer: 10
Correct Answer! :-)
```

## Quick Development Time
This project was developed as a follow-up to the Stone, Paper, Scissors game, building on previous `C++`  concepts while introducing new elements specific to math quizzes. The development focused on creating a functional and educational game within a reasonable timeframe.

## Potential Improvements
Here are some suggested improvements for future iterations:

* `Timer Feature`: Add a time limit for each question to increase challenge.
* `Difficulty Progression`: Implement a system where difficulty increases as the player answers correctly.
* `Graphical Interface`: Develop a simple GUI to enhance user experience.
* `Expanded Question Types`: Include more complex math operations or word problems.
* `Leaderboard System`: Implement a way to save and display high scores.
* `Customizable Question Sets`: Allow players to create their own sets of questions.

## Running the Program
**Compilation**
You can compile the program using a `C++`  compiler. For example:
```
g++ -o Project_Calculator Project_Calculator.cpp
```
**Execution**
Run the compiled program:
```
./Project_Calculator
```

## Final Thoughts
* This Math Quiz Game project serves as an educational tool while demonstrating fundamental `C++`  programming concepts.
* It provides a solid foundation for more advanced features and can be easily expanded to cover a wider range of mathematical topics. 
* The project is ideal for beginners looking to practice their `C++`  skills in a practical, interactive context.
