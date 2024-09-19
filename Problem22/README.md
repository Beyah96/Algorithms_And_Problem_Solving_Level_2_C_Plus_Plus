# Problem 22 : Array (Store + Print Elements) and Element Frequency Checker

## Description
This C++ program allows a user to store a set of integer values in an array, display all the elements, and then check how many times a specific element appears in the array.

The program performs the following tasks:
1. Reads a set of integer elements from the user.
2. Displays the stored elements in the array.
3. Allows the user to input a number and checks how many times that number appears in the array.

## Code Explanation

### Headers:
- `<iostream>`: For input/output operations.
- `<string>`: For string manipulation.
- `<cmath>` and `<cstdlib>` are included but not used in this specific program.

### Function Breakdown:

### `int ReadNumber(string Message)`
- This function repeatedly prompts the user for a number until a positive integer is entered. It displays a custom message (such as "How many elements you will store:" or "Enter an element:").

### `void StoreElements(int Arr[100], int& Length)`
- This function stores elements in the array `Arr`. 
- It first reads the number of elements to be stored (the length) and then takes that many inputs from the user to populate the array.

### `void PrintAllArrayElements(int Arr[100], int Length)`
- This function prints all the elements stored in the array along with their index.

### `void CheckNumber(int Arr[100], int Length)`
- This function prompts the user to enter a number to check for its occurrence in the array.
- It then counts how many times that number appears in the array and prints the result.

### `main()`
- The `main()` function controls the flow of the program:
  1. Calls `StoreElements()` to get input from the user and store the elements in the array.
  2. Calls `PrintAllArrayElements()` to display all the elements.
  3. Calls `CheckNumber()` to check how many times a specific number appears in the array.

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem22 problem22.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem22
 ```
The program will prompt you to:
  * Enter how many elements you want to store.
  * Input each element one by one.
  * Check the frequency of any specific element.

## Example :
Here is an example of how the program works:

```
How many elements you will store: 5
Enter an element: 10
Enter san element: 20
Enter an element: 30
Enter an element: 10
Enter an element: 50

Element[0] = 10
Element[1] = 20
Element[2] = 30
Element[3] = 10
Element[4] = 50

Please enter the number you want to check: 10
10 is repeated 2 time(s)
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
