# C++ Multiplication Table Generator

A simple C++ console application that generates a multiplication table up to 10 with input error handling. 

## ✨ Features
- **Crash-Resistant Input Validation:** Detects when a user types a letter or invalid symbol instead of a number, clears the input stream buffer using `cin.clear()` and `cin.ignore()`, and prompts them again without crashing.
- **Interactive Menu:** Allows the user to run multiple tables in a single session with case-insensitive choice controls (`y`/`Y`/`n`/`N`).
- **Clean Control Flow:** Built using nested `do-while` loops and robust loop control structures.

## 🚀 How to Run
1. Make sure you have a C++ compiler installed (like GCC or MinGW).
2. Clone or download this repository.
3. Compile and run the code:
   ```bash
   g++ multiplication_table.cpp -o multiplication_table
   ./multiplication_table
