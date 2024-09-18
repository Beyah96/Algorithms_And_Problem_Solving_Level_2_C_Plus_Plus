# Problem 15: Letters Pattern

## Description

This C++ program generates a pattern of letters based on the user input. The program prompts the user for a positive integer and prints a pattern of letters in an inverted triangle shape. The pattern uses letters starting from 'A', where each row corresponds to a specific letter repeated multiple times, increasing in number with each row.

For example, if the input is `3`, the output will be:

```
A
BB
CCC
```

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for string manipulation.
- **Function `ReadName`**: Prompts the user to enter a positive integer. It uses a `do-while` loop to ensure the number entered is non-negative.
- **Function `PrintInvertedNumberPattern`**: This function generates the pattern of letters. It takes the user's input number and prints rows of characters, where each row corresponds to a letter starting from 'A' (ASCII value 65). The number of repetitions of the letter in each row increases with each iteration.
- **Function `main`**: Manages the program flow by calling `ReadName` to get the user input and then calls `PrintInvertedNumberPattern` to display the letter pattern.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o Problem15 Problem15.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./Problem15
 ```
The program will prompt you to enter a positive integer. After entering it, the program will print the corresponding letter pattern.


## Example :
- Input :
```
Please enter a positive number: 5
```
- Output:
```
A
BB
CCC
DDDD
EEEEE
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
