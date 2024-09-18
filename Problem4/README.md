# Problem 4 : Perfect Numbers Printer

## Description
This C++ program prints all **perfect numbers** up to a given number entered by the user. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself). The program prompts the user to input a positive number and then prints all perfect numbers from 2 to that number.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to enter a positive number.
- **`CheckNumber`**: Checks if a number is perfect.
- **`PrintPerfectNumbers`**: Prints all perfect numbers from 2 up to the entered number.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Enum `enPerfectNumber`**: This enumerator defines two states: `Perfect` and `NotPerfect`, which represent whether a number is perfect or not.

- **Function `ReadNumber`**:
  - Prompts the user to enter a positive number.
  - Uses a `do-while` loop to ensure the user inputs a positive number. If the input is negative, the program prompts the user again.

- **Function `CheckNumber`**:
  - Takes an integer as input and checks if it is a perfect number by summing all its divisors (excluding the number itself).
  - If the sum of divisors equals the number, the function returns `Perfect`. Otherwise, it returns `NotPerfect`.

- **Function `PrintPerfectNumbers`**:
  - Takes an integer as input and iterates through all numbers from 2 to the input number.
  - For each number, it calls `CheckNumber` to determine if it's perfect. If it is, the program prints the number.

- **Function `main`**:
  - Calls `ReadNumber` to get the user's input.
  - Then calls `PrintPerfectNumbers` to print all perfect numbers from 2 up to the input number.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem4 problem4.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
 ./problem4
 ```
The program will prompt you to enter a `positive number` and then display a`ll perfect numbers` up to that number.

## Example :
- Input :

```
Please enter a positive number : 30
```
- Output:
```
6
28
```
-Here, `6` and `28` are the perfect numbers between `2` and `30`..

## What is a Perfect Number?
A perfect number is a positive integer that is equal to the sum of its divisors (excluding the number itself). For example:

* `6` is a perfect number because `1 + 2 + 3 = 6`.
* `28` is a perfect number because `1 + 2 + 4 + 7 + 14 = 28`.

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
