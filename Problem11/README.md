# Problem 11 : Palindrome Number Checker

## Description
This C++ program checks if a given positive integer is a palindrome. A palindrome number is one that reads the same forward and backward (e.g., 121, 1331). The program prompts the user to enter a positive number, reverses it, and then checks if the reversed number is equal to the original.

The program includes the following key components:
- **`ReadNumber`**: Prompts the user to input a positive integer.
- **`NumberReversed`**: Reverses the digits of the given number.
- **`CheckPalindrome`**: Compares the original number and its reversed version to determine if it is a palindrome.
- **`Print`**: Displays whether the number is a palindrome or not.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Prompts the user to input a positive number.
  - The input is validated to ensure it is positive (greater than or equal to zero).

- **Function `NumberReversed`**:
  - Reverses the digits of the input number. For example, if the number is `1234`, it returns `4321`.

- **Function `CheckPalindrome`**:
  - Compares the original number with the reversed version.
  - Returns `true` if the number is a palindrome, and `false` otherwise.

- **Function `Print`**:
  - Prints a message indicating whether the number is a palindrome or not based on the result from `CheckPalindrome`.

- **Function `main`**:
  - Reads the user's input number using `ReadNumber`.
  - Reverses the number using `NumberReversed`.
  - Checks if the number is a palindrome using `CheckPalindrome`.
  - Prints the result using `Print`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o palindrome_checker palindrome_checker.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./Problem11
 ```
The program will prompt you to enter a positive number and then display whether the number is a palindrome or not.

## Example :
- Input :
```
Please enter a positive number: 121
```
- Output:
```
  It is a Palindrome number
```

- Input :
```
Please enter a positive number: 123
```
- Output:
```
  It is not a Palindrome number
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
