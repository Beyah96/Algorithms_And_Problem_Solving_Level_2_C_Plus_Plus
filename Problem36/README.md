# Problem 36: Read and Print Array Elements

## Description
This C++ program allows the user to input a variable number of integers into an array and subsequently print those integers. The program continuously prompts the user to enter numbers until they choose to stop adding more.

## Code Breakdown

1. **Function `ReadNumber`**
   - This function prompts the user to enter a non-negative integer and validates the input.
   - It displays a custom message and ensures that only non-negative numbers are accepted.

2. **Function `FillArray`**
   - This function reads numbers from the user to fill the array.
   - It initializes the `Length` of the array to zero and uses a loop to read numbers until the user decides to stop.
   - After each input, it prompts the user to indicate whether they want to continue adding more numbers.

3. **Function `PrintArray`**
   - This function prints the elements of the array.
   - It displays each element along with its corresponding index.

4. **Function `main`**
   - The entry point of the program.
   - It declares an array and its length, then calls `FillArray` to populate the array and `PrintArray` to display the results.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`:
   ```bash
   g++ -o problem36 problem36.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem36
 ```
* The program will prompt you to enter numbers to store in the array.
* After each number, it will ask if you want to add more numbers.
* Once you decide to stop, it will print all the entered numbers.
## Example :
 - Input :
 ```
Please enter a number: 5
Do you want to add more numbers ([1]:YES / [0]:NO): 1
Please enter a number: 10
Do you want to add more numbers ([1]:YES / [0]:NO): 0
 ```
 - Output :

```
---------- PRINTING ELEMENTS ----------
Arr[0]: 5
Arr[1]: 10
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).