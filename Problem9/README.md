# Problem 9 : Digit Frequency Counter for All Digits

## Description
This C++ program calculates the frequency of each digit (from 0 to 9) in a positive integer entered by the user. The program processes the number, computes how often each digit appears, and displays the result only for digits that appear at least once.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to input a positive number and returns it as an integer.
- **`NumberFrequency`**: Computes the frequency of a specific digit within the given number.
- **`PrintFrequency`**: Displays the frequency of all digits (0-9) in the number.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Takes a message as input to prompt the user.
  - Prompts the user to enter a positive integer and ensures it is non-negative using a `do-while` loop.

- **Function `NumberFrequency`**:
  - Takes two integers: the number to analyze and the specific digit to search for.
  - Uses a `while` loop to examine each digit of the number and count how often the specific digit appears.

- **Function `PrintFrequency`**:
  - Iterates through each digit (0-9).
  - Calls `NumberFrequency` for each digit and prints its frequency if it appears at least once in the number.

- **Function `main`**:
  - Calls `ReadNumber` to get the number.
  - Passes the number to `PrintFrequency` to compute and display the frequency of each digit.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem9 problem9.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem9
 ```
The program will prompt you to enter a `positive number` and  will display how many times each digit appears in that number.

## Example :
- Input :

```
Please enter a positive number: 1223334444
```
- Output:
```
Digit 1 frequency is : 1 Time(s)
Digit 2 frequency is : 2 Time(s)
Digit 3 frequency is : 3 Time(s)
Digit 4 frequency is : 4 Time(s)
```


## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
