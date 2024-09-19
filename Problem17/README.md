/# Problem 17: 3-Letter Password Brute Force

## Description
This C++ program brute-forces a 3-letter password entered by the user. The password must be composed of uppercase letters. The program systematically tries all possible combinations of three uppercase letters and compares them to the user-entered password.

Key functions:
- `ReadPassword`: Reads the user’s input of a 3-letter uppercase password.
- `CheckPassword`: Brute-forces all possible 3-letter combinations, checking each against the entered password.
- Displays each trial and the number of attempts made before finding the password.

## Code Explanation

- **Headers**: Includes `<iostream>` for input/output and `<string>` for handling strings.

- **Function `ReadPassword`**:
  - Prompts the user to input a password of exactly 3 uppercase letters.
  - Returns the entered password as a string.

- **Function `CheckPassword`**:
  - Tries all possible combinations of three uppercase letters ('A' to 'Z').
  - For each combination, it checks if it matches the user-entered password.
  - Displays the trial number and the guessed password for each attempt.
  - Returns `true` once the correct password is found and displays the total number of trials.

- **Function `main`**:
  - Calls `ReadPassword` to get the user’s input.
  - Calls `CheckPassword` to perform the brute-force search.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem17 problem17.cpp

   ```

 2. **Execute**: Run the compiled program:
 ```
./problem17
 ```
The program will prompt you to input a 3-letter password. It will then brute-force all possible combinations and display each trial until the correct password is found.

## Example :
If the user enters the password `XYZ`, the output could look like this:
- Input :
```
Please enter a 3-Letters password (All capitals) : XYZ
```
- Output :
```
Trial [1] : AAA
Trial [2] : AAB
...
Trial [16900] : XYZ
Password is XYZ
Found after 16900 Trial(s)
```


## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
