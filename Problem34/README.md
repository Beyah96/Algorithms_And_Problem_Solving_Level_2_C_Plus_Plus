# Problem 34: Search for a Number in a Randomly Generated Array

## Description
This C++ program generates an array of random integers, allows the user to search for a specific number within the array, and then displays whether the number was found or not. If found, the program provides both the index and the order (position) of the number in the array.

## Code Breakdown

- **Headers**: 
  - `<iostream>` is used for input/output operations.
  - `<string>` is used for message manipulation.
  - `<cstdlib>` and `<cmath>` are used for random number generation and mathematical operations.

- **Function `ReadNumber`**: 
  - Prompts the user for a non-negative integer input with a custom message.
  - Ensures that the input is valid (no negative numbers).

- **Function `RandomNumber`**: 
  - Generates a random integer between the given `From` and `To` range.
  - Returns the random number.

- **Function `FillArray`**: 
  - Prompts the user for the number of elements they want to generate.
  - Fills the array with random numbers between 1 and 100 using `RandomNumber`.

- **Function `SearchNumberInArray`**: 
  - Searches for a specific number in the array.
  - If the number is found, returns its index in the array.
  - If the number is not found, returns `-1`.

- **Function `PrintSerchedNumber`**: 
  - Displays the result of the search.
  - If the number is found, prints its position (index) and order (index + 1).
  - If not found, prints a message saying the number was not found.

- **Function `SearchNumber`**: 
  - Prompts the user for the number they want to search.
  - Displays the number they are looking for and calls `PrintSerchedNumber` to show the search results.

- **Function `PrintArray`**: 
  - Prints the content of the array to the console.

- **Function `main`**: 
  - Orchestrates the flow of the program by calling `FillArray` to generate the random numbers, `PrintArray` to display the array, and `SearchNumber` to search for a specific number.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`:
   ```bash
   g++ -o problem34 problem34.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem34
 ```
The program will prompt you to enter how many numbers you want to generate and then display the array. It will then ask for a number to search and display whether the number is found or not.
## Example :
 - Input :
 ```
Please enter how many numbers do you want to generate: 5
Please enter a number to search for: 25
 ```
 - Output :

```
---------- Array content ----------
Arr[0] : 67
Arr[1] : 34
Arr[2] : 25
Arr[3] : 90
Arr[4] : 12

The Number you're locking for is: 25
The number found at position: 2
The number found its order: 3
```
If the number is not found, it will display:
```
The number is not found :-)
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).