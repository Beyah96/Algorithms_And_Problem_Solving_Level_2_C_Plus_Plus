# Problem 24 : Random Number Array Filler And Max Searching

## Description
This C++ program generates an array of random numbers between 1 and 100. The user specifies how many elements they want, and the program fills the array with randomly generated values, which are then displayed to the user. Additionally, the program calculates and displays the maximum number from the generated array.

The program performs the following tasks:
1. Prompts the user to input how many elements they want to store in the array.
2. Fills the array with random numbers between 1 and 100.
3. Prints the array elements to the console.
4. Finds and displays the maximum number in the array.

## Code Explanation

### Headers:
- `<iostream>`: For input/output operations.
- `<cstdlib>`: For random number generation using the `rand()` function.

### Function Breakdown:

### `int ReadNumber(string Message)`
- This function prompts the user to enter a number, ensuring that the number is non-negative. It displays a custom message and returns the input number.

### `int RandomNumber(int From, int To)`
- Generates a random number within the specified range `[From, To]` using the formula: `rand() % (To - From + 1) + From`.

### `void FillArray(int Arr[100], int& Length)`
- This function prompts the user to enter how many elements they wish to store in the array. It then fills the array with random numbers between 1 and 100.

### `void PrintArrayElements(int Arr[100], int Length)`
- This function prints the contents of the array, displaying each element's index and value in a formatted manner.

### `int FindMax(int Arr[100], int Length)`
- This function iterates through the array to find and return the maximum number.

### `main()`
- The `main()` function controls the flow of the program:
  1. Seeds the random number generator.
  2. Calls `FillArray()` to populate the array with random numbers.
  3. Calls `PrintArrayElements()` to display the array's contents.
  4. Calls `FindMax()` to display the maximum number in the array.

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem24 problem24.cpp

   ```

 2. **Execute**: Run the compiled program:
 ```
./problem24
 ```
The program will prompt you to:
  * Enter how many random numbers you want to store in the array.
  * It will then display the randomly generated elements and the maximum number.
## Example :
Here is an example of how the program works:

```
How many elements you will enter? : 5
*******************************************
***        Array's elements             ***
*******************************************
Element [1] : 48
Element [2] : 82
Element [3] : 19
Element [4] : 77
Element [5] : 36
Max Number is : 82
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).