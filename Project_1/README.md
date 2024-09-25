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
The player can choose between these three options, and the computer will randomly select its choice. The game then determines the round winner and displays the result. The results of each round are tracked and displayed at the end of the game, with a final winner declared based on the overall performance.

## Features
- **`User inputs`** for selecting between Stone, Paper, and Scissors.
- **`Randomized computer choice`** for competitive gameplay.
- **`Multiple rounds`** (the user can specify the number of rounds, between 1 and 10).
- **`Final score summary`**: After all rounds, the overall winner is determined.
- **`Color feedback based on the round winner`** (Windows only).
- **`Replay option`**: The player can choose to play again after the final round.

---

## Detailed Code Breakdown

### 1. **Enumerations**

The game uses enumerations to represent the possible choices and outcomes:
- **`enChoice`**: Represents Stone, Paper, or Scissors as integers (1, 2, and 3, respectively).
- **`enWinner`**: Represents the result of a round (Player wins, Computer wins, or No Winner in the case of a tie).

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
4. **Winner Determination**
The heart of the game is deciding who wins each round:
```Cpp
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
```

This function compares the player's and computer's choices and determines the winner based on the classic rules of Rock-Paper-Scissors.

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