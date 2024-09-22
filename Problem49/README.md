# Problem 49: Implementing a Custom Ceil Function

## Description
This C++ program reads a floating-point number from the user and calculates its ceiling using two methods:
1. A custom-defined function `MyCeil`.
2. The built-in `ceil` function from the C++ Standard Library.

## Code Breakdown

### 1. **Function `ReadNumber`**
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
2. **Function `Ceil`**
* This is the custom implementation of the `ceil` function.
* The logic checks if the number is positive. If so, it adds 1 to the number before converting it to an integer to ensure it rounds up toward positive infinity.
* For example:
  * Input: `3.2`, the function adds `1` to get `4`, then returns `4`.
  * Input: `-2.7`, the function directly returns `-2` because no rounding up is necessary for negative numbers.
```cpp
  int MyCeil(float Number) {
    if (Number > 0)
        Number++;
    return int(Number);
}
```
3. **Function `main`**
* This is the entry point of the program.
* It reads a floating-point number from the user using `ReadNumber()`.
* The result is then printed using both the custom `MyCeil` function and the built-in `ceil` function from the `<cmath> `library for comparison.

## Key Expression in `MyCeil`

```Cpp
  if (Number > 0)
    Number++;
  return int(Number);
```
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