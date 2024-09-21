# Problem 42 : Count Odd Numbers in an Array

## Description
This C++ program generates a list of random integers, checks whether each number is odd or even, and then counts how many odd numbers are present in the array. The program prints the array along with the count of odd numbers.

## Code Breakdown

1. **Enumeration `enOddEven`**
   - Defines an enumeration to categorize numbers as either `Odd` or `Even`.

2. **Function `ReadNumber`**
   - Prompts the user to input a positive integer value, repeating the prompt if the input is negative.

3. **Function `RandomNumber`**
   - Generates a random integer within a specified range (`From`, `To`).

4. **Function `FillArray`**
   - Prompts the user to input the number of elements to generate, then fills an array with random integers.

5. **Function `CheckNumber`**
   - This function determines whether a number is odd or even. If the number is divisible by 2, it is considered `Even`, otherwise it is `Odd`.

6. **Function `CountOddNumbers`**
   - Iterates through the array and counts how many numbers are classified as `Odd` using the `CheckNumber` function.

7. **Function `PrintArrayAndOddCount`**
   - Prints the contents of the array and displays the total number of odd numbers present.

8. **Function `main`**
   - The entry point of the program:
     - Fills the array with random numbers.
     - Prints the array and the count of odd numbers.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem42 problem42.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem42
 ```
* The program will prompt the user to specify how many random numbers to generate.
* It will then generate the numbers, display the array, and show how many odd numbers were found.
## Example
- Input :
 ```
	Please enter how many elements do you want to generate: 5
 ```
 -  Output:
```
-------- Array content: --------
Arr[0] : 13
Arr[1] : 22
Arr[2] : 37
Arr[3] : 44
Arr[4] : 19

Odd numbers count is : 3
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).