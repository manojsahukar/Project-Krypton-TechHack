# Project Krypton TechHack
It's a software implementation of 'Confederate Army Cipher Disk' programmed using 'C'.
To know more about this cipher disk visit: https://www.youtube.com/watch?v=y94Mfvr2pKI

The inner ring of this disk implementation has alphabets in reverse order as in: https://www.britannica.com/topic/cipher-disk

To compile and execute it online, visit: http://www.tutorialspoint.com/compile_c_online.php

## Goal
The goal of this project is to develop a simple encryption and decryption program using a custom substitution cipher. The program will take a 3-letter code and a message as input and output the encoded or decoded message.

## Deliverables
1. A C program that:
   - Prompts the user to enter a 3-letter code in uppercase.
   - Generates a substitution cipher based on the code.
   - Prompts the user to enter a message to encode or decode.
   - Outputs the encoded or decoded message.
2. Documentation explaining the code and the process.

## Process
1. **Input Handling**:
   - Prompt the user to enter a 3-letter code in uppercase.
   - Calculate the starting index based on the first letter of the code.
   - Initialize an array with the third letter of the code.

2. **Cipher Generation**:
   - Fill the array with decreasing values from the third letter of the code.
   - Handle different cases to ensure the array is filled correctly.
   - Print the generated substitution cipher.

3. **Message Encoding/Decoding**:
   - Prompt the user to enter a message to encode or decode.
   - Use the generated substitution cipher to encode or decode the message.
   - Output the encoded or decoded message.

4. **Output**:
   - Print the encoded or decoded message.
   - Print the author's name.

## Author
MANOJ SAHUKAR
