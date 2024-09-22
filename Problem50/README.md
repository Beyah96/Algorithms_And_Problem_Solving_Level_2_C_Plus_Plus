# Problem 50: Implementing a Custom Square Root Function

## Description
This C++ program reads a floating-point number from the user and calculates its square root using two methods:
1. A custom-defined function `MySqrt` that uses the `pow` function from the `<cmath>` library.
2. The built-in `sqrt` function from the C++ Standard Library.

## Code Breakdown

1. **Function `ReadNumber`**
- This function prompts the user to input a floating-point number and returns that value.
```cpp
  float ReadNumber() {
    float Number;
    cout << "Please enter a Number : ";
    cin >> Number;
    return Number;
}
```
2. **Function `MySqrt`**
* This is the custom implementation of a `square root` function.
* It uses the `pow` function from the `<cmath>` library to raise the input number to the power of `0.5` (i.e., the mathematical operation for calculating the square root).
* The function returns the result of `pow(Number, 0.5)`, which is mathematically equivalent to the square root of the number.
* For example:
 * Input: `9`, the function calculates `pow(9, 0.5)` and returns `3`.
 * Input: `16`, the function calculates `pow(16, 0.5)` and returns `4`.
```cpp
  int MySqrt(float Number) {
    return pow(Number, 0.5);
  }
```
3. **Function `main`**
* This is the entry point of the program.
* It reads a floating-point number from the user using `ReadNumber()`.
* The result is then printed using both the custom `MySqrt` function and the built-in `sqrt` function from the `<cmath> `library for comparison.

## Key Expression in `MySqrt`

```Cpp
  return pow(Number, 0.5);
```
* `pow(Number, 0.5)`: This uses the power function to calculate the square root of a number. Mathematically, raising a number to the power of `0.5` is equivalent to taking its square root.
## How to Run
1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem50 problem50.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem50
 ```
* The program will prompt the user to enter a floating-point number.
* It will then display the  ceiling value using both the custom `MySqrt` function and the C++ built-in `sqrt` function.

## Example
- Input :
 ```
  Please enter a Number : 9
 ```
 -  Output:
```
My Sqrt: 3
C++ sqrt: 3
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of conditional statements, type casting, and functions in C++.