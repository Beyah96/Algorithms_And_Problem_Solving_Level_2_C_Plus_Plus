# Problem 35: Search for a Number in a Randomly Generated Array (Optimized with Boolean Return)

## Description
This C++ program generates an array of random integers and checks if a specific number provided by the user exists in the array. It provides feedback indicating whether the number was found or not.

The key difference between this problem and Problem 34 is the introduction of a `bool` return type to optimize the search, making it simpler to just check the existence of the number in the array.

## Code Breakdown

### 1. **Function `ReadNumber`**
   - This function prompts the user to enter a non-negative integer, displaying a custom message.
   - It ensures the input number is valid (no negative numbers allowed).

### 2. **Function `RandomNumber`**
   - Generates a random integer between two given bounds (`From` and `To`).
   - It is used to fill the array with random values between 1 and 100.

### 3. **Function `FillArray`**
   - Fills an array with random numbers based on user input for the desired number of elements.
   - Calls `RandomNumber` to assign a random value between 1 and 100 to each array element.

### 4. **Function `SearchNumberInArray`**
   - This function iterates through the array to find if the searched number exists.
   - Returns the index of the number if found, otherwise returns `-1`.

### 5. **Function `IsNumberInArray`**
   - A helper function that checks whether the searched number exists in the array.
   - Returns `true` if the number is found, otherwise `false`.

### 6. **Function `PrintSearchedNumber`**
   - Prints whether the number was found or not based on the result of `IsNumberInArray`.

### 7. **Function `SearchNumber`**
   - Prompts the user to input a number to search for.
   - Prints the searched number and calls `PrintSearchedNumber` to display the result.

### 8. **Function `PrintArray`**
   - Prints the entire array, showing the values stored in each index.

### 9. **Function `main`**
   - Calls the main flow of the program:
     1. Fills the array with random values.
     2. Prints the array.
     3. Prompts the user to search for a number and displays whether it was found or not.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`:
   ```bash
   g++ -o problem35 problem35.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem35
 ```
* The program will first prompt you to enter the number of elements you want to generate.
* It will display the content of the array.
* Then, it will ask for a number to search for and indicate if the number was found or not.
## Example :
 - Input :
 ```
Please enter how many numbers do you want to generate: 5
Please enter a number to search for: 25
 ```
 - Output :

```
---------- Array content ----------
Arr[0] : 67
Arr[1] : 34
Arr[2] : 25
Arr[3] : 90
Arr[4] : 12

The Number you're locking for is : 25
The number is found :-)
```
If the number is not found, it will display:
```
The number is not found :-(
```
## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).