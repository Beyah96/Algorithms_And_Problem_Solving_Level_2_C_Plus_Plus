# Problem 19 : Random Number Generator

## Description
This C++ program generates a random integer within a user-specified range. The user inputs a lower bound and an upper bound, and the program outputs a random number between these two bounds. The random number is generated using the `rand()` function.

Key Functions:
- `RandomNumber`: Generates a random integer between a specified lower and upper bound.
- `main`: Manages user input and displays the generated random number.

## Code Explanation

- **Headers**: Includes `<iostream>` for input/output operations, `<string>` for string manipulation, and `<cstdlib>` for the `rand()` function.

- **Function `RandomNumber`**:
  - Takes two integers, `From` and `To`, as input parameters.
  - Uses the `rand()` function to generate a random number within the specified range.
  - Returns the generated random number.

- **Function `main`**:
  - Prompts the user to enter the lower and upper bounds for the random number.
  - Initializes the random number generator with `srand((unsigned)time(NULL))` to ensure different sequences of random numbers each time the program runs.
  - Calls `RandomNumber` to generate a random number within the user-specified range and prints the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem19 problem19.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem19
 ```
The program will prompt you to input the lower and upper bounds for the random number. It will then display a random number within the specified range.

## Example :
If the user inputs `1` as the lower bound and `10` as the upper bound, the output might look like this:

```
Enter the lower bound for the random number : 1
Enter the upper bound for the random number : 10
This is a random number between 1 and 10 : 7
```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
