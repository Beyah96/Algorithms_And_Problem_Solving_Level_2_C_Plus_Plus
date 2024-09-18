
# Problem 1 : Multiplication Table Generator

## Description
This C++ program generates and displays a multiplication table for numbers 1 through 10. The table shows the products of multiplying each number from 1 to 10 with every other number in the same range. The program formats the output to align the columns and provide a clear and readable table.

The program includes the following functions:
- `TableHeader` to print the header row of the table.
- `ColumnSeparator` to format the columns based on the number of digits.
- `MultiplicationTable` to generate and print the entire multiplication table.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` for handling string manipulation.
- **Function `TableHeader`**: Prints the top row of the table, which contains the numbers 1 through 10.
- **Function `ColumnSeparator`**: Formats the column separators to ensure proper alignment, adjusting based on the digit length of the column numbers.
- **Function `MultiplicationTable`**: 
  - Calls `TableHeader` to print the header.
  - Iterates through each number from 1 to 10, printing each row of the multiplication table.
  - Calls `ColumnSeparator` to handle column alignment and formatting.
- **Function `main`**: Starts the program by calling `MultiplicationTable`, which generates and displays the multiplication table.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem1 problem1.cpp
   ````
 
 2. **Execute**: Run the compiled program:
 ```
 ./problem1
 ```
The program will display a formatted multiplication table for numbers `1` through `10`.

## Example :
- Output:
```
        1       2       3       4       5       6       7       8       9      10
----------------------------------------------------------------------------------
1  |    1       2       3       4       5       6       7       8       9      10
2  |    2       4       6       8      10      12      14      16      18      20
3  |    3       6       9      12      15      18      21      24      27      30
4  |    4       8      12      16      20      24      28      32      36      40
5  |    5      10      15      20      25      30      35      40      45      50
6  |    6      12      18      24      30      36      42      48      54      60
7  |    7      14      21      28      35      42      49      56      63      70
8  |    8      16      24      32      40      48      56      64      72      80
9  |    9      18      27      36      45      54      63      72      81      90
10 |   10      20      30      40      50      60      70      80      90     100

```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
