# Bitwise-Operators-in-cpp
Aim: To stidy bitwise operator in C++.
write a program to implement all bitwise operators.
write a program to set and reset bit.

Tools: GNU g++ compiler for local and code editor or Online C++ Compiler.
# Theory


Bitwise operators perform operations directly on **binary representations of integers**. These operators manipulate individual bits of data, enabling efficient computation especially useful in **low-level programming, optimization, and hardware-level tasks**. The two provided programs demonstrate bitwise manipulation using various operators.


## Basic Bitwise Operations

The first program demonstrates several fundamental bitwise operations:

- **AND (`&`)**: Compares each bit of two numbers and returns 1 only if both bits are 1.
- **OR (`|`)**: Compares each bit and returns 1 if either of the bits is 1.
- **NOT (`~`)**: Inverts each bit of the number, turning 1 into 0 and 0 into 1, also known as complement.
- **XOR (`^`)**: Returns 1 if the corresponding bits of operands are different.
- **Left Shift (`<<`)**: Shifts bits of a number to the left, effectively multiplying the number by powers of 2.
- **Right Shift (`>>`)**: Shifts bits to the right, effectively dividing the number by powers of 2.

These operations allow us to manipulate data at the bit level, which is highly efficient for certain algorithms, cryptography, graphics processing, and embedded systems programming.


## Bit Manipulation (Setting and Resetting Bits)

The second program illustrates **bit manipulation techniques**:

- **Setting a Bit**: To set (turn on) a particular bit, the program uses `OR (|)` with a **left-shifted mask** where the desired bit is set to 1. This ensures that the target bit is set without affecting other bits.

- **Resetting a Bit**: To reset (turn off) a bit, the program uses `AND (&)` with the complement of the **left-shifted mask**, ensuring only the targeted bit is cleared.




# Program 1: Bitwise Operations
The program starts with the declaration and initialization of two integers a and b with 10 and 13 respectively, represented in binary as 1010 (for 10) and 1101 (for 13).
Each of the results is stored in its own variable and outputted using cout. These operations will assist in demonstrating how low-level data manipulation occurs in C++ and how we can define this more simply using bitwise logic.

Algorithm:
1. Start
2. Initialize integers a = 10, b = 13
3. Perform and store results of:
- a & b → AND
- a | b → OR
- ~a and ~b → NOT
- a ^ b → XOR
- a << 1, b << 1 → Left Shift
- a >> 1, b >> 1 → Right Shift
4. Print all results
5. End

# Program 2: Bit Set and Reset
The program begins by creating an integer a and assigning it a value of 345. In binary, this is represented as 101011001.
The program demonstrates to the user the process of setting and resetting bits in a number.
The user is prompted to enter the position of a bit to set (change to 1).
The user is then prompted to enter the position of a bit to reset (change to 0).
To set a bit, the program uses the expression a | (1 << bit_set) which shifts 1 to the left by bit_set positions then uses a bitwise OR to turn that bit ON.
To reset a bit, it uses a & (~(1 << bit_reset)) which shifts 1 to the left, then uses bitwise NOT to create a mask, then ANDs to turn that bit OFF.
The results of setting and resetting the bits are printed, and the program demonstrates basic bit manipulation, a common way to manipulate bits in system programming, embedded systems, or in performance-critical code.

Algorithm:
1. Start
2. Initialize integer a = 345
3. Input bit position to set → bit_set
4. Set bit using a | (1 << bit_set)
5. Input bit position to reset → bit_reset
6. Reset bit using a & (~(1 << bit_reset))
7. Print results of both operations
8. End

Conclusion:      
We learn how to use bitwise operators in C++ and learned the concept pof setting anf resetting of bits. 
