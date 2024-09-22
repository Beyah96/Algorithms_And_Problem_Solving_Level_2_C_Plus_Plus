# Problem 47 : Rounding a Floating-Point Number

## Description
This C++ program reads a floating-point number from the user and rounds it to the nearest integer using two methods:
1. A custom-defined rounding function `MyRound`.
2. The built-in `round` function from the C++ Standard Library.

## Code Breakdown

### 1. **Function `ReadNumber`**
   - Prompts the user to input a floating-point number and returns that value.

### 2. **Function `MyRound`**
   - A custom implementation of rounding that uses the following logic:
     - First, it converts the absolute value of the number into an integer by multiplying it by 10 and then taking the modulus 10:
       ```cpp
       (int)abs((Number * 10)) % 10
       ```
       - This expression extracts the first digit after the decimal point. 
       - For example, if the input is `4.67`, then `Number * 10` is `46.7`. Taking the integer part of the absolute value of `46.7` and applying modulus 10 gives `7`, which represents the first decimal place.
     - The function checks if the first decimal is `5` or greater. If it is, the function rounds the number up:
       ```cpp
       if ((int)abs((Number * 10)) % 10 >= 5)
       ```
     - If the number is positive, it simply adds 1 to round up. If it's negative, it subtracts 1 to round down.

     - Finally, the rounded integer value is returned.

### 3. **Function `main`**
   - The entry point of the program:
     - Reads a floating-point input from the user.
     - Displays the rounded number using both the `MyRound` function and the built-in `round` function for comparison.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem47 problem47.cpp

   ```

 2. **Execute**: Run the compiled program:
 ```
./problem47
 ```
* The program will prompt the user to enter a floating-point number.
* It will then output the rounded value using both the custom `MyRound` function and the C++ built-in `round` function.

## Example
- Input :
 ```
	Please enter a Number: 4.67
 ```
 -  Output:
```
My Round : 5
C++ Round : 5
```

## Explanation of the Expression
The expression used in the custom rounding logic:
```
(int)abs((Number * 10)) % 10
```

* `Number * 10`: Multiplies the input number by 10 to shift the decimal point one place to the right.
* `abs()`: Takes the absolute value of the result to ensure the logic works for both positive and negative numbers.
* `(int)`: Converts the number into an integer, effectively truncating everything after the decimal point.
* `% 10`: Returns the remainder when dividing by 10, giving the first decimal digit.

For instance, with `Number = -3.67`, the expression works as follows:
```
Number * 10 = -36.7
abs(-36.7) = 36.7
(int)36.7 = 36
36 % 10 = 6
```
Thus, the expression captures the first digit after the decimal point, which is essential for determining if rounding up is needed.
## Requirements
- A C++ compiler such as g++
- Basic understanding of C++;