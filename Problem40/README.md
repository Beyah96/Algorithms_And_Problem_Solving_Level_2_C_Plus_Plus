# Problem 40 : Copy Distinct Elements from One Array to Another

## Description
This C++ program demonstrates how to copy only distinct elements from one array to another. Given an array with potential duplicate values, the program filters out duplicates and stores the unique elements in a new array.

## Code Breakdown

1. **Function `isExist`**
   - This function checks if a given element already exists in an array. It returns `true` if the element is found and `false` otherwise.

2. **Function `AddElement`**
   - Adds an element to the destination array by appending it at the end and increasing the array's length.

3. **Function `CopyArrayDistinctElement`**
   - Iterates through the source array and copies only the distinct elements (those not already in the destination array) to the destination array.
   - The function uses `isExist` to ensure that each element is copied only once.

4. **Function `PrintArray`**
   - Prints the contents of an array along with a descriptive message.

5. **Function `main`**
   - The entry point of the program. It:
     - Defines a source array (`Arr`) with 10 elements, some of which are duplicates.
     - Calls `CopyArrayDistinctElement` to copy only distinct elements from `Arr` to `ArrDistinctElements`.
     - Prints both the source array and the array with distinct elements.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem40 problem40.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem40
 ```
* The program will prompt the user to specify how many random numbers to generate.
* It will then generate the numbers, filter out the prime numbers, and print both the original list and the list of prime numbers.

## Example :
 - Source Array (Hard Coded) :
 ```
Arr[0] : 1
Arr[1] : 1
Arr[2] : 1
Arr[3] : 2
Arr[4] : 5
Arr[5] : 5
Arr[6] : 3
Arr[7] : 9
Arr[8] : 9
Arr[9] : 10
 ```
 - Output :
```
Arr[0] : 1
Arr[1] : 2
Arr[2] : 5
Arr[3] : 3
Arr[4] : 9
Arr[5] : 10
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).