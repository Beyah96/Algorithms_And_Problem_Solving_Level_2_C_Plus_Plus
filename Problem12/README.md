# Problem: Inverted Number Pattern

## Description
This C++ program prints an inverted number pattern based on a positive integer input by the user. The number pattern decreases in length and value with each row. The user is prompted to enter a positive integer, and the program then prints the corresponding inverted number pattern.

For example, if the user enters `5`, the output will be:
```
 55555
 4444 
 333 
 22 
 1
```

### Program Details

- **`ReadName` Function**:
  - Prompts the user to enter a positive number.
  - Ensures the input is positive by repeatedly asking for the input until a valid number is provided.

- **`PrintInvertedNumberPattern` Function**:
  - Prints an inverted pattern where each row starts with a number that corresponds to the row number and decreases by one in both value and length.
  - For example, if the user enters `5`, it will print 5 rows, starting with 5 repetitions of the number `5` on the first row and decreasing by one in both the number of repetitions and the value of the number on each subsequent row.

- **`main` Function**:
  - The program begins by calling `ReadName` to get the user's input, then calls `PrintInvertedNumberPattern` to print the pattern based on the input.

## Code Explanation

- **Headers**: The program uses `<iostream>` for input/output operations.
  
- **Function `ReadName`**:
  - Prompts the user to enter a positive integer.
  - If the user enters a negative number, the function continues asking for a valid input.

- **Function `PrintInvertedNumberPattern`**:
  - Uses two nested loops to print the inverted number pattern.
  - The outer loop decreases from the input number down to `1`.
  - The inner loop prints the current number for each line based on the current iteration of the outer loop.

- **Function `main`**:
  - Calls `ReadName` to read the user's input and then passes it to `PrintInvertedNumberPattern` to display the pattern.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`:
   ```bash
   g++ -o Problem12 Problem12.cpp
   ```
2. **Execute**: Run the compiled program:
```
./Problem12
```

The program will prompt you to enter a positive number and then display the corresponding inverted number pattern.

## Example
If the user inputs the number `3`, the output will be:
```
333
22
1
```

## Requirements
C++ compiler
Basic understanding of loops and input validation