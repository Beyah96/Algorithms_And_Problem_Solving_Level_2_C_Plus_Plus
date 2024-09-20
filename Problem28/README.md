# Problem 28 : Array Copying Program

## Description
This C++ program generates an array of random numbers between 1 and 100. It then creates a copy of the array and displays both the original and copied arrays. 

The program performs the following tasks:
1. Prompts the user to input how many elements they want to store in the array.
2. Fills the first array (`Arr1`) with random numbers between 1 and 100.
3. Copies the content of the first array (`Arr1`) into a second array (`Arr2`).
4. Prints both the original and the copied arrays to the console.

## Code Explanation

**Headers:**
- `<iostream>`: For input/output operations.
- `<cstdlib>`: For random number generation using the `rand()` function.

**Function Breakdown:**

**`int ReadNumber(string Message)`**
- This function prompts the user to enter a number, ensuring that the number is non-negative. It displays a custom message and returns the input number.

**`int RandomNumber(int From, int To)`**
- Generates a random number within the specified range `[From, To]` using the formula: `rand() % (To - From + 1) + From`.

**`void FillArray(int Arr[100], int& Length)`**
- This function prompts the user to enter how many elements they wish to store in the array. It then fills the array with random numbers between 1 and 100.

**`void CopyArray(int Arr1[100], int Arr2[100], int Length)`**
- This function copies the content of the first array (`Arr1`) into a second array (`Arr2`). It loops through each element of `Arr1` and assigns it to the corresponding index in `Arr2`.

**`void PrintArrayElements(int Arr[100], int Length)`**
- This function prints the contents of the array, displaying each element's index and value in a formatted manner.

**`main()`**
- The `main()` function controls the flow of the program:
  1. Seeds the random number generator.
  2. Calls `FillArray()` to populate the first array (`Arr1`) with random numbers.
  3. Calls `PrintArrayElements()` to display the contents of `Arr1`.
  4. Copies the contents of `Arr1` into `Arr2` using `CopyArray()`.
  5. Prints the contents of the second array (`Arr2`).

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem28 problem28.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem28
 ```
The program will prompt you to:
  * Enter how many random numbers you want to store in the array.
  * It will then display the randomly generated elements of the original array and its copy.

## Example :
Here is an example of how the program works:

```
How many elements you will enter? : 5

****************** Array n°1 ********************
*******************************************
***        Array's elements             ***
*******************************************
Element [1] : 48
Element [2] : 82
Element [3] : 19
Element [4] : 77
Element [5] : 36

****************** Array n°2 ********************
*******************************************
***        Array's elements             ***
*******************************************
Element [1] : 48
Element [2] : 82
Element [3] : 19
Element [4] : 77
Element [5] : 36
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).