# Problem 29: Prime Number Array Copying Program

## Description
This C++ program generates an array of random numbers between 1 and 100, then identifies the prime numbers from the array and copies them into another array. Both the original array and the array containing prime numbers are printed.

The program performs the following tasks:
1. Prompts the user to input how many elements they want to store in the array.
2. Fills the first array (`Arr1`) with random numbers between 1 and 100.
3. Identifies the prime numbers from `Arr1` and copies them to `Arr2`.
4. Prints both the original array (`Arr1`) and the array of prime numbers (`Arr2`).

## Code Explanation

### Headers:
- `<iostream>`: For input/output operations.
- `<cstdlib>`: For random number generation using the `rand()` function.
- `<cmath>`: For mathematical functions like `sqrt()`.

### Enum:
- `enPrimeComposite`: Defines two states: `Prime` and `Composite`, used to identify if a number is prime or composite.

### Function Breakdown:

### `int ReadNumber(string Message)`
- Prompts the user to enter a non-negative number and returns the input.

### `int RandomNumber(int From, int To)`
- Generates a random number within the specified range `[From, To]` using the formula: `rand() % (To - From + 1) + From`.

### `enPrimeComposite CheckNumber(int Number)`
- Checks if a given number is prime or composite. It loops from `2` to the square root of the number. If the number is divisible by any value in this range, it is marked as `Composite`, otherwise, it remains `Prime`.

### `void FillArray(int Arr[100], int& Length)`
- This function prompts the user to enter the number of elements they wish to store in the array. It then fills the array with random numbers between 1 and 100.

### `int CopyArrayPrimeNumbers(int Arr1[100], int Arr2[100], int Length)`
- This function loops through the original array (`Arr1`), checks for prime numbers, and copies them into the second array (`Arr2`). It also returns the number of prime numbers found.

### `void PrintArrayElements(int Arr[100], int Length)`
- Prints the contents of the array, displaying each element's index and value in a formatted manner.

### `main()`
- The `main()` function controls the flow of the program:
  1. Calls `FillArray()` to populate the first array (`Arr1`) with random numbers.
  2. Prints the original array (`Arr1`).
  3. Copies the prime numbers from `Arr1` into `Arr2`.
  4. Prints the prime numbers in the second array (`Arr2`).

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem29 problem29.cpp
  ```

 2. **Execute**: Run the compiled program:
 ```
./problem29
 ```
The program will prompt you to:
  * Enter how many random numbers you want to store in the array.
  * It will then display the randomly generated elements of the original array and the prime numbers from that array.

## Example :
Here is an example of how the program works:

```
How many elements you will enter? : 5

***************** Array 1 *****************
*******************************************
*             Array's elements             *
*******************************************
Element [1] : 48
Element [2] : 23
Element [3] : 71
Element [4] : 19
Element [5] : 35
Element [6] : 49
Element [7] : 8

***************** Array 2 *****************
*******************************************
*             Array's elements             *
*******************************************
Element [1] : 23
Element [2] : 71
Element [3] : 19
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).