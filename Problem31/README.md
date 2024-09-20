# Problem 31: Ordered Array Shuffling Program

## Description
This C++ program allows the user to input a sequence of numbers in increasing order and then shuffles the array randomly. It performs the following tasks:
1. Prompts the user to input an ordered sequence of numbers.
2. Ensures that each subsequent number entered is greater than or equal to the previous one.
3. Shuffles the array by rearranging the elements in a random order.
4. Displays the original and shuffled arrays.

## Code Explanation

**Headers:**
- `<iostream>`: For input/output operations.
- `<cstdlib>`: For random number generation.
- `<cmath>`: Provides mathematical functions like `ceil()`.

**Function Breakdown:**

**`int ReadNumber(string Message)`**
- This function prompts the user to enter a number. It ensures that the number is non-negative, displaying a custom message. It returns the number.

**`void FillArray(int Arr[100], int& Length)`**
- This function fills an array with user-input values in a strictly increasing order.
- It ensures that each entered element is greater than or equal to the previous one. If an invalid number is entered (i.e., smaller than the previous number), the user is prompted to re-enter it.

**`int RandomNumber(int From, int To)`**
- Generates a random number within the specified range `[From, To]` using the formula: `rand() % (To - From + 1) + From`.

**`bool ExistInArray(int Arr[100], int Number)`**
- This function checks whether a specific number already exists in the array. It returns `true` if the number exists, and `false` otherwise.

**`void ShuffleIndexesFrom1toN(int indexes[100], int Length)`**
- Generates an array of shuffled indexes ranging from 0 to `Length - 1`. 
- Ensures no duplicate indexes by using `ExistInArray()`.

**`void ShuffleArray(int Arr[100], int indexes[100], int Arrshuffled[100], int Length)`**
- Shuffles the original array by using the shuffled indexes. It rearranges the elements of `Arr` based on the random indexes generated and stores the result in `Arrshuffled`.

**`void PrintArray(int Arr[100], int Length, string Message)`**
- This function prints the contents of the array, displaying each element's index and value in a formatted manner. It takes a custom message to be printed before the array elements.

**`main()`**
- The `main()` function controls the flow of the program:
  1. Calls `FillArray()` to allow the user to input numbers in increasing order.
  2. Calls `ShuffleIndexesFrom1toN()` to generate random indexes for shuffling.
  3. Uses `ShuffleArray()` to shuffle the elements of the array based on the random indexes.
  4. Displays the original array and the shuffled array using `PrintArray()`.

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program:
   ```bash
   g++ -o problem31 problem31.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem31
 ```
The program will prompt you to:
  * Enter a sequence of numbers, ensuring that each subsequent number is greater than or equal to the previous one.
  * It will then display the original array and the shuffled array.

## Example :
Here is an example of how the program works:

```
Please enter how many element do you want to store : 5

Enter Element[1] : 10
Enter Element[2] : 15
Enter Element[3] : 18
Enter Element[4] : 25
Enter Element[5] : 30

The array element before the shuffle : 
Element[0] : 10
Element[1] : 15
Element[2] : 18
Element[3] : 25
Element[4] : 30

The array element after the shuffle : 
Element[0] : 25
Element[1] : 15
Element[2] : 18
Element[3] : 10
Element[4] : 30
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).