# Problem 6 : Sum of Digits Calculator

## Description
This C++ program calculates the sum of the digits of a positive integer entered by the user. It reads the integer, computes the sum of its digits, and prints the result.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to input a positive number and returns it as an integer.
- **`SumDigits`**: Computes the sum of the digits of the given number.
- **`PrintSumDigits`**: Prints the sum of the digits.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Prompts the user to enter a positive integer.
  - Uses a `do-while` loop to ensure the user inputs a positive number. If the user inputs a negative number, they are prompted to re-enter the value.

- **Function `SumDigits`**:
  - Takes an integer as input and calculates the sum of its digits.
  - Uses a `while` loop to repeatedly extract the last digit of the number using `Number % 10` and adds it to the sum.
  - Reduces the number by removing the last digit using integer division (`Number / 10`).
  - Returns the sum of the digits.

- **Function `PrintSumDigits`**:
  - Takes the sum of digits as input and prints it.

- **Function `main`**:
  - Calls `ReadNumber` to get the user input.
  - Passes the result to `SumDigits` to compute the sum of digits.
  - Passes the result of `SumDigits` to `PrintSumDigits` to print the sum.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem6 problem6.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem6
 ```
The program will prompt you to enter a `positive number` and will display the `sum of the digits` of that number..

## Example :
- Input :

```
Please enter a positive number : 1234
```
- Output:
```
The sum of your number's digits is : 10
```
- In this case, the sum of the digits of the number `1234` is `10`.

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
