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
