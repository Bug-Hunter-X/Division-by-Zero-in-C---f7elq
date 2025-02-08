# Division by Zero Bug in C++

This repository demonstrates a common error in C++: division by zero. The `bug.cpp` file contains the erroneous code, which attempts to divide an integer by zero.  The `bugSolution.cpp` file provides a solution to handle this potential error.

**How to reproduce:**

1. Compile the `bug.cpp` file.
2. Run the compiled executable.
3. Observe the resulting error (likely a segmentation fault or similar).

**Solution:**

The `bugSolution.cpp` file incorporates input validation to prevent division by zero, using a simple conditional check. 
