# Problem 37: Copy and Print Array

## Description
This C++ program generates an array of random numbers, then copies its contents into another array. Both arrays are then printed for comparison, demonstrating the copy functionality.

## Code Breakdown

1. **Function `ReadNumber`**
   - This function prompts the user to input a non-negative integer, validating the input to ensure only valid numbers are accepted.

2. **Function `RandomNumber`**
   - Generates a random integer between a specified range (`From` to `To`).
   - Used to populate the array with random numbers.

3. **Function `AddArrayElement`**
   - Adds a new element to the array by appending it at the end and incrementing the array's length.

4. **Function `FillArray`**
   - Populates the array (`Arr1`) with random numbers using the `RandomNumber` function.
   - The length of the array is determined by the user's input.

5. **Function `CopyArray`**
   - Copies the contents of the first array (`Arr1`) into the second array (`Arr2`) by iterating through the first array and adding elements one by one.

6. **Function `PrintArray`**
   - Prints the contents of the array to the console, along with a custom message.

7. **Function `main`**
   - This is the entry point of the program.
   - It initializes two arrays (`Arr1` and `Arr2`), fills the first array with random numbers, and then copies its contents to the second array.
   - It prints both the original and copied arrays.

## How to Run

1. **Compile**: Compile the program using a C++ compiler. For example:
   ```bash
   g++ -o problem37 problem37.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem37
 ```
* The program will ask for the number of elements to generate.
* It will then generate an array of random numbers, copy the array, and print both the original and copied arrays.

## Example :
 - Input :
 ```
Please enter the number of elements you want to generate and store: 5
 ```
 - Output :

```
-------- Orginal Array --------
Arr[0] : 42
Arr[1] : 86
Arr[2] : 17
Arr[3] : 54
Arr[4] : 3

-------- Copyed Array --------
Arr[0] : 42
Arr[1] : 86
Arr[2] : 17
Arr[3] : 54
Arr[4] : 3
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).