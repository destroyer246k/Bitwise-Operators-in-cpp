# Bitwise-Operators-in-cpp
Aim: To stidy bitwise operator in C++.
write a program to implement all bitwise operators.
write a program to set and reset bit.

Tools: GNU g++ compiler for local and code editor or Online C++ Compiler.

Program Expalination:
# Program 1: Bitwise Operations
The program starts with the declaration and initialization of two integers a and b with 10 and 13 respectively, represented in binary as 1010 (for 10) and 1101 (for 13).
The program demonstrates different types of bitwise operations: 
AND (&) examines each bit of both numbers and returns 1 if both are equal to 1.     
OR (|) returns 1 if the first number has at least one of the bits equal to 1.   
NOT (~) flips each bit (making 1 equal to 0 and 0 equal to 1).  
XOR (^) returns 1 if the bits are different.    
Left Shift (<<) shifts given bit to the left, thus adding required bit each time the given bit shifts to left.  
Right Shift (>>) shifts the bits to the right, thus adding required bit each time the given bit shifts to right.

Each of the results is stored in its own variable and outputted using cout. These operations will assist in demonstrating how low-level data manipulation occurs in C++ and how we can define this more simply using bitwise logic.

# Program 2: Bit Set and Reset
The program begins by creating an integer a and assigning it a value of 345. In binary, this is represented as 101011001.
The program demonstrates to the user the process of setting and resetting bits in a number.
The user is prompted to enter the position of a bit to set (change to 1).
The user is then prompted to enter the position of a bit to reset (change to 0).
To set a bit, the program uses the expression a | (1 << bit_set) which shifts 1 to the left by bit_set positions then uses a bitwise OR to turn that bit ON.
To reset a bit, it uses a & (~(1 << bit_reset)) which shifts 1 to the left, then uses bitwise NOT to create a mask, then ANDs to turn that bit OFF.
The results of setting and resetting the bits are printed, and the program demonstrates basic bit manipulation, a common way to manipulate bits in system programming, embedded systems, or in performance-critical code.

Conclusion:
We learn how to use bitwise operators in C++ and learned the concept pof setting anf resetting of bits. 
