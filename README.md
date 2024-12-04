# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`. The error occurs when the loop condition `i <= myVector.size()` is used, causing an attempt to access an element beyond the vector's bounds.  This can lead to unpredictable behavior, crashes, or subtle bugs.

The `bug.cpp` file contains the erroneous code.  The `bugSolution.cpp` provides the corrected version.

This example highlights the importance of careful index checking when working with vectors and other dynamic data structures in C++.