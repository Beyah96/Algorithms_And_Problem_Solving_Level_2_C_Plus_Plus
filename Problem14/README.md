# Problem 14 : Inverted Letter Pattern

## Description
This C++ program prints an inverted letter pattern based on a positive integer input by the user. The rows of the pattern begin with letters starting from 'A' for 1, 'B' for 2, and so on, based on the corresponding ASCII values. Each row contains repeated letters in descending order, with the highest letter on top.

For example, if the user enters `5`, the output will be:
```
EEEEE 
DDDD 
CCC 
BB 
A
```

### Program Details

- **`ReadName` Function**:
  - Prompts the user to enter a positive integer.
  - Ensures the input is positive by repeatedly asking for a valid number if a negative value is provided.

- **`PrintInvertedNumberPattern` Function**:
  - Prints a pattern where each row consists of repeated letters based on the row number, starting with the letter corresponding to the ASCII value `i + 64`.
  - The first row prints the character for the input number, and each subsequent row prints the next character in the sequence with one less repetition.

- **`main` Function**:
  - The program starts by calling `ReadName` to get the user's input, and then it calls `PrintInvertedNumberPattern` to display the inverted letter pattern.

## Code Explanation

- **Headers**: The program uses `<iostream>` for input/output operations.

- **Function `ReadName`**:
  - Prompts the user to enter a positive integer.
  - Ensures that the number entered is positive by asking the user to enter the number repeatedly until a valid input is provided.

- **Function `PrintInvertedNumberPattern`**:
  - Uses two nested loops to generate the pattern:
    - The outer loop runs from the user input down to `1`.
    - The inner loop prints the character corresponding to `i + 64` (where `i` is the loop variable) as many times as the row number.

- **Function `main`**:
  - Calls `ReadName` to read the user's input and then passes it to `PrintInvertedNumberPattern` to display the pattern.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`:
   ```bash
   g++ -o Problem14 Problem14.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./Problem14
 ```
The program will prompt you to enter a positive number, and it will print the corresponding inverted letter pattern.

## Example :
- Input :
```
Please enter a positive number: 3
```
- Output:
```
CCC
BB
A
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
