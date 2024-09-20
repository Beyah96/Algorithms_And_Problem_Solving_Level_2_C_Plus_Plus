# Problem 30: Sum of Two Arrays Program

## Description
This C++ program generates two arrays filled with random numbers between 1 and 100, sums the corresponding elements from both arrays, and stores the results in a third array. It then displays all three arrays.

The program performs the following tasks:
1. Prompts the user to input how many elements they want to store in the arrays.
2. Fills the first array (`Arr1`) with random numbers between 1 and 100.
3. Fills the second array (`Arr2`) with random numbers between 1 and 100.
4. Sums the content of the first array (`Arr1`) and the second array (`Arr2`), storing the results in a third array (`Arr3`).
5. Prints all three arrays to the console.

## Code Explanation

**Headers:**
- `<iostream>`: For input/output operations.
- `<string>`: For handling string data types.

**Function Breakdown:**

**`int ReadNumber(string Message)`**
- This function prompts the user to enter a number, ensuring that the number is non-negative. It displays a custom message and returns the input number.

**`int RandomNumber(int From, int To)`**
- Generates a random number within the specified range `[From, To]` using the formula: `rand() % (To - From + 1) + From`.

**`void FillArrayWithRandomNumbers(int Arr[100], int Length)`**
- Fills an array with random numbers between 1 and 100.

**`void SumArrays(int Arr1[100], int Arr2[100], int Arr3[100], int Length)`**
- Adds the corresponding elements of `Arr1` and `Arr2` and stores the results in `Arr3`.

**`void PrintArray(int Arr[100], int Length, string Message)`**
- Prints the contents of an array, displaying each element's index and value in a formatted manner.

**`main()`**
- The `main()` function controls the flow of the program:
  1. Seeds the random number generator.
  2. Calls `ReadNumber()` to ask the user for the array length.
  3. Calls `FillArrayWithRandomNumbers()` to fill `Arr1` and `Arr2` with random numbers.
  4. Calls `SumArrays()` to sum the corresponding elements of `Arr1` and `Arr2`, storing the result in `Arr3`.
  5. Calls `PrintArray()` to display all three arrays.

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem30 problem30.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem30
 ```
The program will prompt you to:
  * Enter how many random numbers you want to store in the array.
  * It will then display the contents of all three arrays (`Arr1`, `Arr2`, `Arr3`), where `Arr3` contains the sum of corresponding elements from `Arr1` and `Arr2`.

## Example :
Here is an example of how the program works:

```
Please enter how many elements do you want to store? : 5

*********** Arr1 ***********
Element [0] : 45
Element [1] : 89
Element [2] : 32
Element [3] : 67
Element [4] : 13

*********** Arr2 ***********
Element [0] : 35
Element [1] : 12
Element [2] : 56
Element [3] : 43
Element [4] : 21

*********** Arr3 ***********
Element [0] : 80
Element [1] : 101
Element [2] : 88
Element [3] : 110
Element [4] : 34

```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).