# Problem 46 : Absolute Value Calculation

## Description
This C++ program prompts the user to input a number and calculates its absolute value in two ways:
1. Using a custom-defined function `MyABS`.
2. Using the built-in `abs` function from the C++ Standard Library.

## Code Breakdown

1. **Function `ReadNumber`**
   - Prompts the user to input an integer and returns that value.

2. **Function `MyABS`**
   - A custom implementation of the absolute value function.
   - If the input number is negative, it multiplies it by `-1` to make it positive.
   - Returns the absolute value of the number.

3. **Function `main`**
   - The entry point of the program:
     - Reads an integer input from the user.
     - Displays the absolute value of the input number using both the `MyABS` function and the built-in `abs` function for comparison.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem46 problem46.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem46
 ```
* The program will prompt the user to enter an integer.
* It will then output the absolute value calculated by the custom function `MyABS` as well as by the built-in `abs` function.

## Example
- Input :
 ```
	Please enter a Number: -25
 ```
 -  Output:
```
- The Absolute value Calculated By my function of -25 is : 25
- The Absolute value Calculated By abs function of -25 is : 25
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).