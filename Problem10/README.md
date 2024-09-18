# Problem 10 : Reverse Number Digit by Digit

## Description
This C++ program prompts the user to enter a positive integer and then prints the digits of the number in reversed order, one digit per line. It first reverses the entire number and then prints each digit on a new line.

The program includes the following key components:
- **`ReadNumber`**: Prompts the user to input a positive integer and ensures it is non-negative.
- **`NumberReversed`**: Reverses the digits of the given number.
- **`PrintNumberInReversedOrder`**: Prints each digit of the reversed number on a new line.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations.

- **Function `ReadNumber`**:
  - Prompts the user to input a positive number.
  - The input is validated to ensure it is positive (greater than or equal to zero).

- **Function `NumberReversed`**:
  - Reverses the digits of the input number.
  - For example, if the number is `1234`, it returns `4321`.

- **Function `PrintNumberInReversedOrder`**:
  - Prints each digit of the reversed number on a separate line.
  - For example, if the reversed number is `4321`, it prints:
    ```
    1
    2
    3
    4
    ```

- **Function `main`**:
  - First, it reads the user's input number using `ReadNumber`.
  - Then, it calls `NumberReversed` to reverse the digits of the number.
  - Finally, it prints the reversed number digit-by-digit using `PrintNumberInReversedOrder`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o Problem10 Problem10.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./Problem10
 ```
The program will prompt you to enter a `positive number` and then print its digits in order, one per line..

## Example :
- Input :

```
Please enter a positive number: 1234
```
- Output:
```
    1
    2
    3
    4
```


## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
