# Boolean Expression & Truth Table Simulator

## Project Overview
This C++ application simulates Boolean logic by generating truth tables for expressions involving up to three variables (A, B, and C). The system uses Object-Oriented Programming (OOP) to define logic gates and evaluate expressions.

## Features
- **OOP Logic Engine**: Uses polymorphism to define AND, OR, NOT, NAND, and XOR operations.
- **Truth Table Generation**: Automatically computes all 8 possible combinations for 3-bit logic.
- **Operator Explanation**: Provides pedagogical descriptions of each Boolean operator detected.
- **File Persistence**: Saves generated truth tables to `truth_table.txt` for future reference.

## How to Compile and Run
1. Ensure you have a C++ compiler installed (e.g., g++, Clang, or MSVC).
2. Open a terminal/command prompt in the `Code` directory.
3. Compile the code:
   ```bash
   g++ main.cpp -o BooleanSimulator
