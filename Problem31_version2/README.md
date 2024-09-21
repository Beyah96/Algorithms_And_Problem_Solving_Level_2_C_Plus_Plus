# Problem 31 Version 2: Array Shuffling Program

## Description
This C++ program allows the user to input a sequence of numbers and then shuffles the array randomly. The program performs the following tasks:
1. Prompts the user to input how many numbers they want to store in the array.
2. Accepts the input numbers from the user.
3. Shuffles the array elements randomly.
4. Displays the original and shuffled arrays.

## Code Explanation

**Headers:**
- `<iostream>`: For input/output operations.
- `<string>`: To utilize string manipulation functions.
- `<cmath>`: Provides mathematical functions like `ceil()`.
- `<cstdlib>`: For random number generation.

**Function Breakdown:**

1. **`int RandomNumber(int From, int To)`**
- Generates a random number within the specified range `[From, To]` using the formula: `rand() % (To - From + 1) + From`.

2. **`int ReadNumber(string Message)`**
- Prompts the user to enter a non-negative number, displaying a custom message. It returns the input number.

3. **`void FillArray(int Arr[100], int& Length)`**
- This function fills an array with user-input values.
- It first reads the desired length of the array and then prompts the user to enter each element.

4. **`void Swap(int& Number1, int& Number2)`**
- A helper function that swaps two integers by reference. This is used during the shuffling process.

5. **`void ShuffleArray(int Arr[100], int Length)`**
- Shuffles the array by swapping each element in the first half of the array with a randomly chosen element from the second half.

6. **`void PrintArray(int Arr[100], int Length)`**
- Prints the contents of the array, displaying each element's index and value in a formatted manner.

7. **`main()`**
- The `main()` function orchestrates the flow of the program:
  1. Calls `FillArray()` to allow the user to input numbers.
  2. Displays the original array before shuffling.
  3. Calls `ShuffleArray()` to randomly shuffle the array.
  4. Displays the shuffled array.

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem31_v2 problem31_v2.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem31_v2
 ```
The program will prompt you to:
  * Enter how many numbers you want to store in the array.
  * Input each number.
  * The program will then display the original array and the shuffled array.

## Example :
Here is an example of how the program works:

```
Please enter how many number do you want to store in the array : 5
Please the element "Element [1]" : 10
Please the element "Element [2]" : 20
Please the element "Element [3]" : 30
Please the element "Element [4]" : 40
Please the element "Element [5]" : 50

*****************************************************
*                ARRAY BEFORE SHUFFLE                *
*****************************************************
Element[0] : 10
Element[1] : 20
Element[2] : 30
Element[3] : 40
Element[4] : 50

*****************************************************
*                ARRAY AFTER SHUFFLE                 *
*****************************************************
Element[0] : 30
Element[1] : 50
Element[2] : 10
Element[3] : 20
Element[4] : 40

```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).