# Problem 2 : Prime Number Checker and Printer

## Description
This C++ program allows users to determine whether a given number is prime or composite and print all prime numbers up to a given number. The program is divided into several functions:
- **`ReadNumber`**: Prompts the user to enter a positive number.
- **`CheckNumber`**: Determines if a number is prime or composite.
- **`PrintNumberType`**: Prints whether the number is prime or composite.
- **`PrintPrimeNumbers`**: Prints all prime numbers from 1 to the number entered by the user.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<cmath>` to use mathematical functions like `sqrt()` for determining prime numbers.
  
- **Enum `enPrimeNumber`**: This enumerator defines two states: `Prime` for prime numbers and `Composite` for composite numbers.

- **Function `ReadNumber`**: Prompts the user to enter a positive number and ensures that the input is positive through a `do-while` loop. The function returns the entered number.

- **Function `CheckNumber`**: 
  - Takes an integer as input and checks whether the number is prime or composite.
  - The check is done by dividing the number by every integer from 2 to the square root of the number (inclusive). If any division results in zero and the number is greater than 3, it is marked as `Composite`.
  - If no such division is found, the number is marked as `Prime`.

- **Function `PrintNumberType`**: Takes the result from `CheckNumber` and prints `"Prime"` if the number is prime, and `"Composite"` if it is not.

- **Function `PrintPrimeNumbers`**: 
  - Takes a number as input and prints all prime numbers from 1 to that number.
  - It repeatedly calls the `CheckNumber` function for each number in the range.

- **Function `main`**: Starts the program by calling `ReadNumber` to get a number, and then prints all prime numbers up to that number using `PrintPrimeNumbers`.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem2 problem2.cpp -lm
   ````
 The -lm flag is used to link the math library for the sqrt() function.
 2. **Execute**: Run the compiled program:
 ```
 ./problem2
 ```
The program will prompt you to enter a `positive number` and then print all prime numbers up to that `number`.
## Example :
- Input :

```
Please enter a positive number : 10
```
- Output:
```
1
2
3
5
7
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
