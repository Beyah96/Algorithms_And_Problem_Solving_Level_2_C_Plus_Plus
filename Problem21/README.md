# Problem 21 : # Keys Generator

## Description
This C++ program generates a series of random keys that resemble product license keys or serial numbers, each consisting of four groups of four uppercase letters separated by hyphens (e.g., `ABCD-EFGH-IJKL-MNOP`). The user specifies how many keys they want to generate, and the program outputs that number of keys.

Each key follows the format:
```
XXXX-XXXX-XXXX-XXXX
```
Where each `X` is a randomly generated uppercase letter from `A` to `Z`.

## Code Explanation

- **Headers**:
  - `<iostream>` for input/output operations.
  - `<string>` for string manipulation.
  - `<cstdlib>` for generating random numbers with `rand()`.

### Function Breakdown:

### `RandomNumber(int From, int To)`:
- This function generates a random number between the specified `From` and `To` bounds (inclusive). It uses the `rand()` function to return a number in this range.

### `KeyGenerator()`:
- This function generates a single key in the format `XXXX-XXXX-XXXX-XXXX`:
  - It creates a loop that runs four times (`i` loop), generating four random uppercase letters in each iteration (`j` loop).
  - Between each set of four letters, it adds a hyphen (`-`) except after the last group.
  - It returns the generated key as a string.

### `KeysGenerator()`:
- This function asks the user how many keys they want to generate, then calls `KeyGenerator()` that many times and prints each generated key.

### `main()`:
- The `main()` function starts by calling `KeysGenerator()`, which handles the user input and prints the required number of keys.

## How to Run

1. **Compile**: Use a C++ compiler like `g++` to compile the program. For example:
   ```bash
   g++ -o problem21 problem21.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem21
 ```
 The program will prompt the user to enter the `number of keys` they want to generate and will then output that number of keys.

## Example :
After running the program, the user will see the following prompt:

```
How many Keys do you want to generate: 3
Key [1]: QWER-TYUI-ASDF-GHJK
Key [2]: ZXCV-BNMK-LKJH-GFED
Key [3]: POIU-YTRE-WQAZ-XSWD
```
The number of keys generated (in this case, 3) depends on the user's input.
## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
