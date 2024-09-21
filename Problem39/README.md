# Problem 39 : Generate Random Numbers and Filter Prime Numbers

## Description
This C++ program generates a list of random integers, checks whether each number is prime or composite, and then stores only the prime numbers in a separate array. The original array and the array of prime numbers are both printed to the console.

## Code Breakdown

1. **Enumeration `enPrimeComposite`**
   - Defines an enumeration to categorize numbers as either `Prime` or `Composite`.

2. **Function `ReadNumber`**
   - Prompts the user to input a positive integer value, repeating the prompt if the input is negative.

3. **Function `RandomNumber`**
   - Generates a random integer within a specified range (`From`, `To`).

4. **Function `CheckNumber`**
   - This function determines whether a number is prime or composite. It checks for divisibility by numbers smaller than the input number to classify it as `Prime` or `Composite`.

5. **Function `FillArray`**
   - Prompts the user to input the number of random elements to generate and fills an array with random integers.

6. **Function `AddElement`**
   - Adds an element to the end of an array by increasing the length and assigning the new value.

7. **Function `CopyPrimeNumbers`**
   - This function iterates through the original array and copies all prime numbers to a new array, using the `CheckNumber` function to identify prime numbers.

8. **Function `PrintArray`**
   - Prints the contents of an array along with a descriptive message.

9. **Function `main`**
   - The entry point of the program. It:
     - Fills an array with random numbers.
     - Prints the original array.
     - Filters and copies only the prime numbers into another array.
     - Prints the array of prime numbers.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem39 problem39.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem39
 ```
* The program will prompt the user to specify how many random numbers to generate.
* It will then generate the numbers, filter out the prime numbers, and print both the original list and the list of prime numbers.

## Example :
 - Input :
 ```
How many elements do you want to generate: 5
 ```
 - Output :

```
--------- Array source ---------
Arr[0] : 5
Arr[1] : 6
Arr[2] : 8
Arr[3] : 7
Arr[4] : 9

--------- Array of Prime Numbers ---------
Arr[0] : 5
Arr[1] : 7
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).