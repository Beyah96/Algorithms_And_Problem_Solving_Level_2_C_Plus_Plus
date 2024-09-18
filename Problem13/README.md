# Problem 13 : # Problem: Ascending Number Pattern

## Description
This C++ program prints an ascending number pattern based on a positive integer input by the user. Each row of the pattern consists of the row number repeated multiple times, starting from `1` and increasing up to the number entered by the user.

For example, if the user enters `5`, the output will be:

```
1 
22 
333 
4444 
55555
```

### Program Details

- **`ReadName` Function**:
  - Prompts the user to enter a positive integer.
  - Ensures that the input is positive by repeatedly asking for the input until a valid number is provided.

- **`PrintInvertedNumberPattern` Function**:
  - Prints a pattern where each row starts with a number corresponding to the row number and the number is repeated multiple times.
  - The first row has `1` printed once, the second row has `2` printed twice, and so on.

- **`main` Function**:
  - The program begins by calling `ReadName` to get the user's input, then calls `PrintInvertedNumberPattern` to print the pattern.

## Code Explanation

- **Headers**: The program uses `<iostream>` for input/output operations.

- **Function `ReadName`**:
  - Prompts the user to enter a positive integer.
  - If the user enters a negative number, the function continues asking for a valid input.

- **Function `PrintInvertedNumberPattern`**:
  - Uses two nested loops to print the ascending number pattern.
  - The outer loop runs from `1` to the user’s input number.
  - The inner loop prints the current row number as many times as its value.

- **Function `main`**:
  - Calls `ReadName` to read the user's input and then passes it to `PrintInvertedNumberPattern` to display the pattern.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`:
   ```bash
   g++ -o Problem13 Problem13.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./Problem13
 ```
The program will prompt you to enter a positive number and then display the corresponding ascending number pattern.

## Example :
- Input :
```
Please enter a positive number: 3
```
- Output:
```
1
22
333
```


## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
