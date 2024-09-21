# Problem 43 : Count Even Numbers in an Array

## Description
This C++ program generates an array of random integers, checks each number to determine if it is even or odd, and counts the number of even numbers present in the array. The program prints the array along with the count of even numbers.

## Code Breakdown

1. **Enumeration `enOddEven`**
   - Defines an enumeration to classify numbers as `Odd` or `Even`.

2. **Function `ReadNumber`**
   - Prompts the user to input a positive integer value. If the input is negative, the prompt repeats until a valid number is entered.

3. **Function `RandomNumber`**
   - Generates a random integer within the range `[From, To]`.

4. **Function `FillArray`**
   - Prompts the user to specify how many numbers should be generated, then fills the array with random numbers between 1 and 100.

5. **Function `CheckNumber`**
   - Determines whether a number is odd or even. Returns `enOddEven::Even` if the number is even, and `enOddEven::Odd` if it is odd.

6. **Function `CountOddNumbers`**
   - Iterates through the array and counts how many numbers are classified as even using the `CheckNumber` function. This function is inaccurately named, as it counts **even** numbers.

7. **Function `PrintArrayAndOddCount`**
   - Prints the array contents and the total number of even numbers present in the array.

8. **Function `main`**
   - The entry point of the program:
     - Fills the array with random numbers.
     - Prints the array and the count of even numbers.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem43 problem43.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem43
 ```
* The program will ask the user how many random numbers they wish to generate.
* After generating and displaying the array, the program will print the count of even numbers.
## Example
- Input :
 ```
	Please enter how many elements do you want to generate: 5
 ```
 -  Output:
```
-------- Array content : --------
Arr[0] : 13
Arr[1] : 22
Arr[2] : 37
Arr[3] : 44
Arr[4] : 19

Even numbers count is : 2
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).