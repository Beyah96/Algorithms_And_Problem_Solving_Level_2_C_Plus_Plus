# Basik Project N°1 : Stone, Paper, Scissors Game
![Difficulty](https://img.shields.io/badge/Project-Easy-8A2BE2)
![Level](https://img.shields.io/badge/Order-First%20C++%20Project-32CD32)
![C++](https://img.shields.io/badge/C%2B%2B-Beginner%20Friendly-00599C)

This project implements a basic **Stone, Paper, Scissors** game in C++ where a player can compete against the computer. The game follows the standard rules where:
```
- Stone beats Scissors
- Scissors beat Paper
- Paper beats Stone
```
The player selects their choice, and the computer generates its own randomly. The game declares a round winner and provides a final result at the end of all rounds.


## Features

- **`User choice input`**: The player selects between Stone, Paper, or Scissors.
- **`Computer choice`**: The computer randomly selects its choice.
- **`Round tracking`**: The number of rounds is specified by the player (up to 10), and results are tracked.
- **`Final result`**: The game summarizes the number of rounds won by both the player and computer, including draws, and declares an overall winner.
- **`Color feedback`**: The game provides color feedback for each round, indicating the winner (Windows only).
---

## Detailed Code Breakdown

### 1. **Enumerations** 
The game uses two enumerations to represent player choices and round outcomes:
- **`enChoice`**: Represents Stone, Paper, or Scissors.
- **`enWinner`**: Represents who won a round (Player, Computer, or No Winner in the case of a draw).

### 2. **Random Number Generation**
The game uses a simple random number generator to make the computer's choice unpredictable:
```cpp
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}
```
- This function ensures that the computer randomly selects between Stone, Paper, and Scissors each round.

### 3. **Input Handling**
`ReadNumber()`: Prompts the user for their choice and validates input to ensure it's within an acceptable range:
```Cpp
int ReadNumber(string Message, int Limit) {
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number < 1 || Number > Limit);
    return Number;
}
```
The player chooses between options [1] Stone, [2] Paper, or [3] Scissors.
This ensures that the player can select from three valid options while the computer picks one randomly.
### 4. **Winner Determination**
The heart of the game is deciding who wins each round:
```Cpp
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
        cout << "\a" << endl;  // Sound for computer win.
    }
    ScreenColor(RoundInfo.Winner);  // Visual feedback (Windows only).
    PrintRound(RoundInfo);  // Output the round results.
}
```

This function compares the player's and computer's choices and determines the winner based on the classic rules of Rock-Paper-Scissors.

### 5. **Game Over Summary**
At the end of all rounds, the game outputs a summary of results:
```Cpp
void GameOver(stGameResult GameResult) {
    cout << "\t\tPlayer won times: " << GameResult.PlayerWonCount << endl;
    cout << "\t\tComputer won times: " << GameResult.ComputerWonCount << endl;
    cout << "\t\tDraw times: " << GameResult.DrawCount << endl;
    cout << "\t\tFinal Winner: " << CheckFinalWinner(GameResult) << endl;
}

This function summarizes the results, including player wins, computer wins, and draws, and declares the overall winner based on performance.
```
## How It Works
### **Game Flow**
1. `Rounds`: The player first selects how many rounds they want to play (1 to 10).
2. `Choices`: For each round, the player selects either Stone, Paper, or Scissors.
3. `Results`: The computer randomly selects its choice, and the game compares the two selections to determine the winner.
4. `Feedback`: The console provides feedback after each round, displaying who won. The console's background color changes to indicate the round's winner.
5. `Final Summary`: After all rounds are played, the game provides a summary of the total wins for the player, the computer, and any draws.
6. `Replay Option`: The player can choose to play again or exit.

### **Example Round**
```
Your Choice [1] : Stone, [2] : Paper, [3] : Scissor ? : 1
------------ Round 1 ------------ 
Player   Choice : Stone
Computer Choice : Scissor
Round   Winner  : Player
---------------------------------
```
## Quick Development Time
This project was developed within `1 hour`, focusing on creating a functional prototype with essential game mechanics. Given the limited time, the core functionalities were implemented and tested, while certain areas (such as input validation and platform portability) can be further refined in future iterations.

## Potential Improvements
Here are some suggested improvements for future iterations:

* `Input Validation`: Currently, input is limited to integer-based choices. Improving this to handle invalid inputs (e.g., handling non-integer input gracefully) would improve user experience.
* `Cross-Platform Compatibility`: The system("color") command is used to change the console background color to reflect the round's winner. This command is specific to Windows. Future versions could include a more cross-platform approach, such as using a library like ncurses for terminal control.
* `Enhanced Randomness`: Currently, rand() is used for random number generation. This can be replaced with C++'s <random> library to improve randomness and eliminate bias.
* `More Visual Feedback`: Using text formatting or more advanced console libraries to create visually appealing feedback could enhance the user experience.
* `Extend Game Modes`: Add more features such as user-defined names, saving game progress, or a multiplayer mode where two human players can compete.
* `Improved User Interface`: Consider making the UI more interactive and graphical for a better user experience.

## Running the Program
**Compilation**
You can compile the program using a C++ compiler. For example:
```
g++ -o project_1 project_1.cpp
```
**Execution**
Run the compiled program:
```
./project_1
```

## Final Thoughts
This project serves as a simple yet functional implementation of a classic game. While it was completed within a short timeframe, it provides a solid foundation for more complex features to be added in the future. The current implementation is efficient, but there's ample room for improvement in terms of user experience, portability, and game features.