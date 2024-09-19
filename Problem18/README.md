# Problem: Encryption and Decryption of Text

## Description
This C++ program performs simple encryption and decryption on user-provided text using a Caesar cipher. The user enters a text string and is prompted to choose between displaying the original text, encrypting the text, or decrypting the text. If encryption or decryption is selected, the user must provide an encryption key, which will be used to shift the ASCII values of the characters in the string.

Key Functions:
- `ReadText`: Reads the user input (text to be encrypted or decrypted).
- `ReadEncryptOrDecrypt`: Asks the user if they want to display the original text, encrypt it, or decrypt it.
- `EncryptDecrypt`: Performs the actual encryption or decryption using the given encryption key.
- `PrintText`: Handles the user choice and prints the corresponding result.

## Code Explanation

- **Headers**: Includes `<iostream>` for input/output and `<string>` for string manipulation.

- **Function `ReadText`**:
  - Prompts the user to input a text string.
  - Returns the entered string.

- **Function `ReadEncryptOrDecrypt`**:
  - Asks the user to choose whether to display the original text, encrypt the text, or decrypt the text.
  - Returns the user's choice as an enumeration (`Orginal`, `Encrypt`, `Decrypt`).

- **Function `EncryptDecrypt`**:
  - Takes the input string (`Message`), a boolean value `ED` (true for encrypting, false for decrypting), and an encryption key (`EncryptionKey`).
  - Shifts each character's ASCII code by the encryption key for encryption, or reverses the shift for decryption.
  - Returns the encrypted or decrypted string.

- **Function `PrintText`**:
  - Based on the user's choice (original, encrypt, or decrypt), it either prints the original text, encrypts it, or decrypts it using the provided encryption key.

## How to Run

1. **Compile**: Use a C++ compiler to compile the program. For example, using `g++`, you can compile it with:
   ```bash
   g++ -o problem18 problem18.cpp
   ```

 2. **Execute**: Run the compiled program:
 ```
./problem18
 ```
The program will prompt you to:
* Enter a text string to be encrypted or decrypted.
* Choose whether to display the original, encrypted, or decrypted text.
* If encryption or decryption is chosen, you will be asked to provide an encryption key.

## Example :
If the user inputs the text `HELLO` and selects encryption with a key of `2`, the output might look like this:

```
Please enter a text : HELLO
Do you want to print Orginal (0), Encrypted (1) or Decrypted (2) text? (0, 1 or 2) : 1
Please enter your encryption/decryption key : 2
Text After Encrypt : JGNNQ
```
If the same text is decrypted with the same key:

```
Please enter a text : JGNNQ
Do you want to print Orginal (0), Encrypted (1) or Decrypted (2) text? (0, 1 or 2) : 2
Please enter your encryption/decryption key : 2
Text After Encrypt and Decrypt : HELLO

```

## Requirements
- C++ compiler
- Basic understanding of functions and string handling in C++
