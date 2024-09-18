# Problem 5 : Reverse Digits Printer

## Description
This C++ program takes a positive number as input from the user and prints its digits in reverse order, each on a new line. The number is first read as an integer, converted to a string, and then its digits are printed in reverse using a loop.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to input a positive number and returns it as a string.
- **`PrintNumberInReversedOrder`**: Prints the digits of the given number in reverse order, with each digit on a new line.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` to handle string manipulation.

- **Function `ReadNumber`**:
  - Prompts the user to enter a positive integer.
  - A `do-while` loop ensures that the input is positive. If the user inputs a negative number, the program will prompt them to re-enter the value.
  - Once a valid number is entered, it is converted into a string using `to_string()` and returned.

- **Function `PrintNumberInReversedOrder`**:
  - Takes the string representation of the number and prints its digits in reverse order.
  - A `for` loop starts from the last character of the string and prints each digit, moving backward to the first character.

- **Function `main`**:
  - Calls `ReadNumber` to get the user input.
  - Passes the result to `PrintNumberInReversedOrder` to print the digits in reverse order.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem5 problem5.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
 ./problem5
 ```
The program will prompt you to enter a `positive number` and will print `the digits of the number in reverse order`, each on a new line.

## Example :
- Input :

```
Please enter a positive number : 1234
```
- Output:
```
4
3
2
1
```
-In this case, the number `1234` is printed in reverse order, with each digit appearing on a new line.

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
