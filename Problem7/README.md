# Problem 7 : Reverse Number Printer

## Description
This C++ program takes a positive integer input from the user, reverses its digits, and prints the reversed number. The number is processed directly as an integer without converting it to a string.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to input a positive number and returns it as an integer.
- **`NumberReversed`**: Computes the reverse of the given number.
- **`PrintNewNumber`**: Prints the reversed number.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Prompts the user to enter a positive integer.
  - Uses a `do-while` loop to ensure the user inputs a positive number. If the user inputs a negative number, they are prompted to re-enter the value.

- **Function `NumberReversed`**:
  - Takes an integer as input and calculates its reverse.
  - Uses a `while` loop to repeatedly extract the last digit of the number using `Number % 10`, and constructs the reversed number by multiplying the current result by `10` and adding the last digit.
  - Reduces the number by removing the last digit using integer division (`Number / 10`).

- **Function `PrintNewNumber`**:
  - Takes the reversed number as input and prints it.

- **Function `main`**:
  - Calls `ReadNumber` to get the user input.
  - Passes the result to `NumberReversed` to compute the reversed number.
  - Passes the result of `NumberReversed` to `PrintNewNumber` to print the reversed number.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem7 problem7.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem7
 ```
The program will prompt you to enter a `positive number` and will display the `number` with its `digits reversed`.

## Example :
- Input :

```
Please enter a positive number : 1234
```
- Output:
```
Reverse is : 4321
```
- In this case, the number `1234` is reversed to `4321`.

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
