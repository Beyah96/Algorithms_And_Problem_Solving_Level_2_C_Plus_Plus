/*
# Problem 16 : Generate and Print All Combinations of Three Letters (A-Z)

## Description
This C++ program generates and prints all possible combinations of three uppercase letters from 'A' to 'Z'. The program iterates through each letter of the alphabet three times to create every possible combination. For example, combinations start with "AAA", "AAB", "AAC", etc., and continue until "ZZZ". It includes the following function:
- `PrintLetters` to generate and display the letter combinations.

## Code Explanation

- **Headers**: The program includes `<iostream>` for input/output operations and `<string>` to handle string manipulation.
- **Function `PrintLetters`**: 
  - Uses three nested loops to generate combinations of letters from 'A' (ASCII value 65) to 'Z' (ASCII value 90).
  - For each combination of letters, the function appends the letters to a string and prints them.
  - After printing each combination, the string is reset for the next combination.
- **Function `main`**: Simply calls `PrintLetters` to initiate the printing process.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem16 problem16.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem16
 ```
The program will then print all the three-letter combinations from "AAA" to "ZZZ" to the console.


## Example :
The program will output all three-letter combinations, including:
```
AAA
AAB
AAC
...
ZZX
ZZY
ZZZ

```


## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
