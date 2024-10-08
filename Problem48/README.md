# Problem 48: Implementing a Custom Floor Function

## Description
This C++ program reads a floating-point number from the user and calculates its floor using two methods:
1. A custom-defined function `MyFloor`.
2. The built-in `floor` function from the C++ Standard Library.

## Code Breakdown

1. **Function `ReadNumber`**
* This function prompts the user to input a floating-point number and returns that value.
```cpp
  float ReadNumber() {
    float Number;
    cout << "Please enter a Number : ";
    cin >> Number;
    return Number;
  }
```
2. **Function `MyFloor`**
* This custom implementation of the `floor` function first calculates the `absolute` value of the input and checks if the number has any fractional part. If the `number` is negative and has a fractional part, it is decremented by `1` to achieve `floor` behavior.
* For example:
  * Input: `-3.2`, the function subtracts `1` to get `-4`, then returns `-4`.
  * Input: `3.7`, the function directly returns `3` by truncating the decimal part.
```cpp
  int MyFloor(float Number) {
    float AbsNumber = abs(Number);
    if (AbsNumber > int(AbsNumber))  // Checks if there is a fractional part
      if (Number < 0)  // Applies only to negative numbers
        Number--;
    return int(Number);  // Returns the floored value
}
```
3. **Function `main`**
* This is the entry point of the program.
* It reads a floating-point number from the user using `ReadNumber()`.
* The result is then printed using both the custom `MyFloor` function and the built-in `floor` function from the `<cmath> `library for comparison.

## Key Expression in `MyFloor`

```Cpp
  float AbsNumber = abs(Number);
  if (AbsNumber > int(AbsNumber))
    if (Number < 0)
      Number--;
  return int(Number);
```
* `float AbsNumber = abs(Number)`: Stores the absolute value of the number to check for any fractional part.
* `if (AbsNumber > int(AbsNumber))`: Checks if the absolute number has a fractional part (i.e., non-zero decimals).
* `if (Number < 0)`: Checks if the number is negative.
* `Number--`: If negative, subtracts 1 from the number before converting it into an integer to ensure the number rounds toward negative infinity.
* `int(Number)`: Converts the number into an integer by truncating the decimal part.
## How to Run
1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem48 problem48.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem48
 ```
* The program will prompt the user to enter a floating-point number.
* It will then display the floored value using both the custom `MyFloor` function and the C++ built-in `floor `function.

## Example
- Input :
 ```
	Please enter a Number : -3.7
 ```
 -  Output:
```
My Floor : -4
C++ Floor : -4
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of conditional statements, type casting, and functions in C++.