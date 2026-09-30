C CLI Scientific Calculator

A command-line scientific calculator written in C.

Features
Basic Operations
Addition
Subtraction
Multiplication
Division
Division-by-zero protection
Scientific Operations
Factorial (n!)
Sine (sin)
Cosine (cos)
Tangent (tan)
Square (x²)
Square root (√x)
Cube (x³)
Cube root (∛x)
Additional Features
Repeated calculations
Menu-driven interface
Input validation
Angles entered in degrees
Factorial support up to 20!
Technologies
C
GCC
Linux
C Math Library
Requirements
GCC compiler
Linux or another Unix-like operating system
Standard C library
Math library
Compilation

Compile the calculator using GCC:

gcc calculator.c -o calculator -lm

The -lm option links the C math library required for functions such as sin(), cos(), tan(), sqrt(), and cbrt().

Run
./calculator
Example
========== C SCIENTIFIC CALCULATOR ==========
1.  Add
2.  Subtract
3.  Multiply
4.  Divide
5.  Factorial (n!)
6.  Sine (sin)
7.  Cosine (cos)
8.  Tangent (tan)
9.  Square (x^2)
10. Square Root (sqrt)
11. Cube (x^3)
12. Cube Root (cbrt)
13. Exit
=============================================

Example calculations:

5! = 120

sin(30°) = 0.500000

cos(60°) = 0.500000

tan(45°) = 1.000000

12² = 144

sqrt(144) = 12

5³ = 125

cbrt(27) = 3
Concepts Practiced
Variables
Data types
Functions
Arrays and loops
Conditional statements
Switch statements
User input
Input validation
Mathematical operations
Modular program design
C standard library
C math library
Basic error handling
Project Structure
c-cli-calculator/
├── calculator.c
├── calculator
├── README.md
└── .gitignore
Learning Objectives

This project was created to practice fundamental C programming concepts while building a practical command-line application.

The project demonstrates how multiple mathematical operations can be organized into a menu-driven program using functions, loops, conditional logic, and the C math library.

Future Improvements

Possible future improvements include:

More advanced mathematical functions
Power and logarithm operations
Memory of previous calculations
Better input validation
Expression parsing
Calculation history
More advanced scientific functions
