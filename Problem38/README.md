# Problem 38 : Generate Random Numbers and Filter Odd Numbers

## Description
This C++ program generates a list of random integers, then filters out the odd numbers from this list and stores them in a separate array. Both the original and filtered arrays are printed for comparison.

## Code Breakdown

1. **Enumeration `enOddOrEven`**
   - Defines an enumeration type to categorize numbers as either `Odd` or `Even`.

2. **Function `ReadNumber`**
   - Prompts the user for a positive integer input, ensuring that only non-negative values are accepted.

3. **Function `RandomNumber`**
   - Generates a random integer between a specified range (`From` and `To`).

4. **Function `FillArray`**
   - Fills an array with random numbers, based on the number of elements specified by the user.

5. **Function `CheckNumber`**
   - Checks if a given number is odd or even and returns the appropriate enumeration (`Odd` or `Even`).

6. **Function `CopyOddNumbers`**
   - Iterates through the original array and copies the odd numbers into a separate array.
   - It checks each number using the `CheckNumber` function and appends only odd numbers to the `OddArray`.

7. **Function `PrintArray`**
   - Prints the contents of an array, along with a message to label the output.

8. **Function `main`**
   - This is the entry point of the program.
   - It initializes two arrays: one for the original list of numbers and one for storing odd numbers.
   - After generating the original array, it copies only the odd numbers to the second array and prints both arrays.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem38 problem38.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem38
 ```
* The program will prompt the user to enter how many random numbers they want to generate.
* It will then generate the numbers, filter out the odd ones, and print both the original list and the list of odd numbers.

## Example :
 - Input :
 ```
Please enter how many generated elements do you want to store: 5
 ```
 - Output :

```
----------- Array source -----------
Arr[0] : 42
Arr[1] : 17
Arr[2] : 86
Arr[3] : 53
Arr[4] : 31

----------- Odd numbers -----------
Arr[0] : 17
Arr[1] : 53
Arr[2] : 31

```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).