# Problem 44: Count Positive Numbers in an Array

## Description
This C++ program generates an array of random integers (both negative and positive), and counts how many of those numbers are positive. The program outputs the contents of the array and the count of positive numbers.

## Code Breakdown

1. **Function `RandomNumber`**
   - Generates a random integer in the range `[From, To]`. This function is used to populate the array with numbers between -100 and 100.

2. **Function `ReadNumber`**
   - Prompts the user to enter a positive integer value. The input must be greater than or equal to zero. The function ensures that a valid input is given by repeating the prompt if necessary.

3. **Function `FillArray`**
   - Prompts the user to specify the number of elements to generate. It then fills the array with random integers between -100 and 100.

4. **Function `CountPositiveNumbers`**
   - Iterates through the array and counts how many numbers are positive (greater than 0).

5. **Function `PrintArrayAndCountOfPositiveNumbers`**
   - Prints the content of the array and displays the count of positive numbers.

6. **Function `main`**
   - The entry point of the program:
     - Fills the array with random numbers.
     - Prints the array and displays the count of positive numbers.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem44 problem44.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem44
 ```
* The program will ask the user to input the number of elements they wish to generate.
* The program will then generate and display the array, and output the number of positive numbers in the array.

## Example
- Input :
 ```
	Please enter how many elements do you want to generate: 5
 ```
 -  Output:
```
------------- Array Content -------------
Arr[0] : -50
Arr[1] : 30
Arr[2] : -1
Arr[3] : 25
Arr[4] : 10

------------- Array Content -------------
Positive number count is : 3
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).