# Problem 3 : Perfect Number Checker

## Description
This C++ program allows users to check whether a given number is a **perfect number**. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself). The program prompts the user to input a positive number, checks if it's a perfect number, and then prints the result.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to enter a positive number.
- **`CheckNumber`**: Checks if the entered number is a perfect number.
- **`PrintNumberType`**: Prints whether the number is perfect or not.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Enum `enPerfectNumber`**: This enumerator defines two states: `Perfect` and `NotPerfect` to represent the classification of the number.

- **Function `ReadNumber`**: 
  - Prompts the user to enter a positive number.
  - Uses a `do-while` loop to ensure that only positive numbers are accepted. If the user enters a negative number, they are prompted to re-enter a valid number.
  
- **Function `CheckNumber`**:
  - Takes an integer as input and checks if it is a perfect number.
  - It sums all divisors of the number (excluding the number itself) by iterating through numbers from 1 to the input number minus 1.
  - If the sum of divisors equals the number itself, it returns `Perfect`. Otherwise, it returns `NotPerfect`.

- **Function `PrintNumberType`**:
  - Takes the result from `CheckNumber` and prints `"Is Perfect"` if the number is perfect, otherwise prints `"Is not Perfect"`.

- **Function `main`**: 
  - Calls `ReadNumber` to get the user's input.
  - Uses `CheckNumber` to determine whether the number is perfect.
  - Prints the result using `PrintNumberType`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem3 problem3.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
 ./problem2
 ```
TThe program will prompt you to enter a `positive number` and then determine `if the number is perfect`.

## Example :
- Input :

```
Please enter a positive number : 6
```
- Output:
```
Is Perfect
```
- In this case, 6 is a perfect number because the sum of its divisors (1, 2, and 3) equals 6.

## What is a Perfect Number?
A perfect number is a positive integer that is equal to the sum of its divisors (excluding the number itself). For example:

* `6` is a perfect number because `1 + 2 + 3 = 6`.
* `28` is a perfect number because `1 + 2 + 4 + 7 + 14 = 28`.

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
