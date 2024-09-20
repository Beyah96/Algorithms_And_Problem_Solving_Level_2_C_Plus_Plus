# Problem 33 : Generate and Store Random Keys

## Description
This C++ program generates random keys consisting of four groups of uppercase letters (A-Z), with each group containing four letters. The groups are separated by dashes (`-`). The user specifies how many keys should be generated, and the program stores these keys in an array and prints them. The program includes the following functions:
- `ReadNumber` to get user input for the number of keys,
- `RandomNumber` to generate a random number within a specified range,
- `GenerateWord` to generate a random word of four uppercase letters,
- `GenerateKey` to create a key by concatenating four random words with dashes,
- `FillArray` to store the generated keys in an array,
- `PrintArray` to display the generated keys.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations, `<string>` for string manipulation, `<cstdlib>` for random number generation, and `<cmath>` for mathematical operations.
- **Function `ReadNumber`**: 
  - Prompts the user to enter a non-negative integer representing the number of keys.
  - Ensures the user enters a valid number.
- **Function `RandomNumber`**: 
  - Generates a random integer between a specified range `From` and `To`.
  - Uses the formula `rand() % (To - From + 1) + From` to generate random values, which are used to create random characters.
- **Function `GenerateWord`**: 
  - Generates a random string of four uppercase letters by repeatedly calling `RandomNumber(65, 90)` to generate random ASCII values between 'A' and 'Z'.
- **Function `GenerateKey`**: 
  - Generates a random key by concatenating four groups of four random letters, separated by a dash (`-`).
- **Function `FillArray`**: 
  - Fills the array with a number of random keys determined by the user's input.
- **Function `PrintArray`**: 
  - Prints each key from the array, with its corresponding index, and displays a custom message.
- **Function `main`**: 
  - Manages the program flow by calling `FillArray` to generate keys, and `PrintArray` to display the generated keys.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem33 problem33.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem33
 ```
The program will prompt you to enter the number of keys to generate, and will display the randomly generated keys.
## Example :
 - Input :
 ```
 Please enter how many Keys you will store: 3
 ```
 - Output :

```
-----------   Keys   -----------
Arr[0] : QWER-ASDF-ZXCV-PLMN
Arr[1] : TYUI-GHJK-BNML-OQWE
Arr[2] : IOPX-ERTS-FGHJ-QWER

```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).