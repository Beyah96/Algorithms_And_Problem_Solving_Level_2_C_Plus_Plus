# Problem 20 : Random Character Generator

## Description
This C++ program generates a random character based on the user's choice. The user can choose between generating:
1. A lowercase letter
2. An uppercase letter
3. A special character
4. A digit

The random character is generated using the `rand()` function, and the user inputs their preference for the type of character they want.

Key Functions:
- `RandomNumber`: Generates a random integer between a specified range.
- `RandomGetter`: Handles user input and generates a random character based on the user's choice.

## Code Explanation

- **Headers**: 
  - `<iostream>` for input/output operations.
  - `<string>` for string manipulation.
  - `<cstdlib>` for the `rand()` function.
  - `<cmath>` for mathematical functions (though in this case not used extensively).

- **Enumeration `enRandomOutput`**:
  - Defines four types of random output: lowercase letter, uppercase letter, special character, and digit.

- **Function `RandomNumber`**:
  - Takes two integers, `From` and `To`, as input parameters.
  - Uses the `rand()` function to generate a random number within the specified range.
  - Returns the generated random number.

- **Function `RandomGetter`**:
  - Prompts the user to choose between a lowercase letter, uppercase letter, special character, or digit.
  - Depending on the user's choice, it calls `RandomNumber` to generate the corresponding random character.
  - Outputs the generated character.

- **Function `main`**:
  - Initializes the random number generator with `srand((unsigned)time(NULL))` to ensure a different sequence of random numbers each time the program runs.
  - Calls `RandomGetter` to prompt the user and print the result.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem20 problem20.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem20
 ```
The program will prompt you to choose between generating a `lowercase letter`, an `uppercase letter`, a `special character`, or a `digit`. It will then output the corresponding `random character`.

## Example :
After running the program, the user will see the following prompt:

```
Please choose one : 
 - (1) Small Letter 
 - (2) Capital Letter 
 - (3) Special character 
 - (4) Digit 
Your choice : 2
```
If the user chooses `2` (Capital Letter), the output might be:
```
H
```
## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
