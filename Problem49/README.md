# Problem 49: Implementing a Custom Ceil Function

## Description
This C++ program reads a floating-point number from the user and calculates its ceiling using two methods:
1. A custom-defined function `MyCeil`.
2. The built-in `ceil` function from the C++ Standard Library.

## Code Breakdown

1. **Function `ReadNumber`**
- This function prompts the user to input
  floating-point number and returns that value.
 ```cpp
 float ReadNumber() {
     float Number;
     cout << "Please enter a Number : ";
     cin >> Number;
     return Number;
 }
```
2. **Function `MyCeil`**
- This is the custom implementation of the `ceil` function.
- The logic first calculates the absolute value of the number (`AbsNumber`) to handle both positive and negative numbers uniformly when checking for decimal places.
- It then checks if the number has a decimal part (i.e., if the absolute value is greater than its integer part). If so, and the number is positive, it increments the number to round it up.
- For example:
- Input: `3.2` will be incremented to `4`, then return `4`.
- Input: `-2.7` will be truncated to `-2` without incrementing since negative numbers don’t need to be rounded up.
```cpp
 int MyCeil(float Number) {
   float AbsNumber = abs(Number);
   if (AbsNumber > int(AbsNumber)) {
     if (Number > 0)
       Number++;
     }
   return int(Number);
 }
```
3. **Function `main`**
* This is the entry point of the program.
* It reads a floating-point number from the user using `ReadNumber()`.
* The result is then printed using both the custom `MyCeil` function and the built-in `ceil` function from the `<cmath> `library for comparison.

## Key Expression in `MyCeil`

```Cpp
  float AbsNumber = abs(Number);
   if (AbsNumber > int(AbsNumber)) {
     if (Number > 0)
       Number++;
     }
   return int(Number);
```
* `float AbsNumber = abs(Number)`: Stores the absolute value of the number to check for any fractional part.
* `if (AbsNumber > int(AbsNumber))`: Checks if the absolute number has a fractional part (i.e., non-zero decimals).
* `if (Number > 0)`: Checks if the number is positive.
* `Number++`: If positive, adds 1 to the number before converting it into an integer to ensure the number rounds toward positive infinity.
* `int(Number)`: Converts the number into an integer by truncating the decimal part.
## How to Run
1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem49 problem49.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem49
 ```
* The program will prompt the user to enter a floating-point number.
* It will then display the  ceiling value using both the custom `MyCeil` function and the C++ built-in `ceil` function.

## Example
- Input :
 ```
	Please enter a Number : 3.2
 ```
 -  Output:
```
My Ceil : 4
C++ Ceil : 4
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of conditional statements, type casting, and functions in C++.