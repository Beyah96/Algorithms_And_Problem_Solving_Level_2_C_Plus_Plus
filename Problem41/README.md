# Problem 41 : Check if an Array is a Palindrome

## Description
This program checks if an array of integers is a palindrome. An array is called a **palindrome** if its sequence of elements is identical when read from left to right and right to left.
In this implementation, the palindrome check is optimized by iterating through only half of the array, reducing unnecessary comparisons and improving performance.


## Explanation of the Code

1. **Function `FillArray`**
   - This function initializes an array of integers with a predefined size of 11 elements.
   - You can modify the contents of the array within this function to test other sequences.

2. **Function `IsPalindrome`**
   - This function checks if the array is a palindrome.
   - It compares the elements from both ends of the array, moving towards the center.
   - If the corresponding elements on both sides are equal, it counts them.
   - The array is considered a palindrome if all paired elements match.

3. **Function `PrintIsPalindrome`**
   - This function prints whether the array is a palindrome or not.
   - If the `IsPalindrome` function returns `true`, it outputs "Yes, it is a Palindrome!".
   - Otherwise, it outputs "No, it is not a Palindrome!".

4. **Main Function**
   - The `main` function initializes the array, calls `FillArray` to populate it, and then checks if it’s a palindrome using the `IsPalindrome` function.
   - Finally, it prints the result using `PrintIsPalindrome`.


## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example:
   ```bash
   g++ -o problem41 problem41.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem41
 ```
* FillArray: Initializes the array.
* IsPalindrome: Checks if the array is a palindrome.
* PrintIsPalindrome: Displays the result.
## Example
- Given the predefined array:
 ```
	Arr[0] = 20;
	Arr[1] = 15;
	Arr[2] = 30;
	Arr[3] = 40;
	Arr[4] = 50;
	Arr[5] = 90;
	Arr[6] = 50;
	Arr[7] = 40;
	Arr[8] = 30;
	Arr[9] = 10;
	Arr[10] = 20;
 ```
 -  The program will output :
```
No, it is not a Palindrome!
```
- If the array is changed to :
 ```
	Arr[0] = 20;
	Arr[1] = 15;
	Arr[2] = 30;
	Arr[3] = 40;
	Arr[4] = 50;
	Arr[5] = 90;
	Arr[6] = 50;
	Arr[7] = 40;
	Arr[8] = 30;
	Arr[9] = 15;
	Arr[10] = 20;
 ```
 -  The output will be:
```
Yes, it is a Palindrome!
```

## Requirements
- A C++ compiler such as g++
- Basic understanding of arrays and loops
- The program allows up to 100 elements in the array (hardcoded limit).