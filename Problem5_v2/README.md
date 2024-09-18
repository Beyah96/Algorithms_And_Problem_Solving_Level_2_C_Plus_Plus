# Problem 5 : Reverse Digits Printer (Version 2)

## Description
This C++ program takes a positive integer input from the user and prints its digits in reverse order, each on a new line. Unlike the previous version, this program handles the number directly as an integer without converting it to a string.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to input a positive number and returns it as an integer.
- **`PrintNumberInReversedOrder`**: Prints the digits of the given number in reverse order, with each digit on a new line.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Prompts the user to enter a positive integer.
  - Uses a `do-while` loop to ensure the user inputs a positive number. If the user inputs a negative number, they are prompted to re-enter the value.

- **Function `PrintNumberInReversedOrder`**:
  - Takes an integer as input and prints its digits in reverse order.
  - Uses a `while` loop to repeatedly extract and print the last digit of the number until all digits are processed.
  - The last digit is obtained using `Number % 10`, and the number is reduced by removing the last digit using integer division (`Number / 10`).

- **Function `main`**:
  - Calls `ReadNumber` to get the user input.
  - Passes the result to `PrintNumberInReversedOrder` to print the digits in reverse order.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem5_v2 problem5_v2.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
 ./problem5_v2
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
