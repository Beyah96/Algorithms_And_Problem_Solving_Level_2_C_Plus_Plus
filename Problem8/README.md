# Problem 8 : Digit Frequency Counter

## Description
This C++ program calculates how many times a specific digit appears within a positive integer entered by the user. The program reads the integer and the digit to be searched, then calculates and displays the frequency of that digit in the number.

The program includes the following functions:
- **`ReadNumber`**: Prompts the user to input a positive number or a single digit and returns it as an integer.
- **`NumberFrequency`**: Computes the frequency of a specific digit in the given number.
- **`PrintFrequency`**: Prints the frequency of the searched digit.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Takes a message as input to prompt the user.
  - Prompts the user to enter a positive integer or a digit.
  - Uses a `do-while` loop to ensure the user inputs a non-negative number.

- **Function `NumberFrequency`**:
  - Takes two integers as input: the number and the digit to search for.
  - Uses a `while` loop to process each digit of the number.
  - Counts occurrences of the searched digit and returns the count.

- **Function `PrintFrequency`**:
  - Takes the frequency of the searched digit as input and prints it.

- **Function `main`**:
  - Calls `ReadNumber` to get the number and the digit to search.
  - Passes these values to `NumberFrequency` to compute the frequency of the digit.
  - Passes the result to `PrintFrequency` to print the frequency.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem8 problem8.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem8
 ```
The program will prompt you to enter a `positive number` and a digit to search within that number, then display the `frequency` of that digit.

## Example :
- Input :

```
Please enter a positive number: 123456
Please enter your searched number: 2
```
- Output:
```
Your searched number frequency is : 1 Time(s)
```
- In this case, the digit `2` appears `1` time in the number `123456`.

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
