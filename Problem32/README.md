# Problem 32 : Reverse Array and Display

## Description
This C++ program generates an array of random integers between 1 and 100, and allows the user to define the number of elements. The program then reverses the array and displays both the original and reversed arrays. The program includes the following functions:
- `ReadNumber` to get user input for the number of elements,
- `RandomNumber` to generate random integers between a given range,
- `FillArray` to populate the array with random values,
- `Swap` to swap two elements,
- `CopyReversedArray` to reverse the array by swapping elements,
- `PrintArray` to display the array.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations, `<string>` for string manipulation, `<cstdlib>` for random number generation, and `<cmath>` for mathematical operations.
- **Function `ReadNumber`**: 
  - Prompts the user to enter a non-negative integer and returns it.
  - Ensures the user enters a valid number.
- **Function `RandomNumber`**: 
  - Generates a random integer between a specified range `From` and `To`.
  - Uses the formula `rand() % (To - From + 1) + From` to generate random values.
- **Function `FillArray`**: 
  - Reads the number of elements from the user, then fills the array with random integers between 1 and 100.
- **Function `Swap`**: 
  - Swaps two integer values by using a temporary variable.
- **Function `CopyReversedArray`**: 
  - Reverses the array by swapping the first half of the array with the second half using the `Swap` function.
  - The loop iterates up to half of the array length (`ceil(Length / 2)`).
- **Function `PrintArray`**: 
  - Prints all elements of the array with their index and value.
  - Displays a custom message passed as a parameter.
- **Function `main`**: 
  - Manages the program flow by filling the array, printing the original array, reversing it, and printing the reversed array.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem32 problem32.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem32
 ```
The program will prompt you to enter the number of elements, generate random values, and display the array before and after reversing it.
## Example :
 - Input :
 ```
 Please enter the number of elements you need to store: 5
 ```
 - Output :

```
-------- The Array Before reverse --------
Element [0] : 23
Element [1] : 57
Element [2] : 85
Element [3] : 16
Element [4] : 42

-------- The Array After reverse --------
Element [0] : 42
Element [1] : 16
Element [2] : 85
Element [3] : 57
Element [4] : 23
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).