**🚀 LLVM Redundant Instruction Elimination Pass**

This project demonstrates how to write an LLVM optimization pass in C++ that eliminates redundant instructions in LLVM IR (e.g., add x, 0 or mul x, 1). It showcases compiler-level optimization techniques and the LLVM pass infrastructure.

📌 Project Description
The Redundant Instruction Elimination Pass traverses LLVM Intermediate Representation (IR) and removes operations that do not affect the final outcome — optimizing runtime performance by simplifying unnecessary instructions.

This is an introductory compiler project for those interested in LLVM, compiler optimization, or program analysis.

🔧 Features
Identifies and removes instructions like:

add x, 0

mul x, 1

x = x

Preserves IR validity and correctness

Easily extendable for more optimizations

🧰 Requirements
LLVM (version 16 or above)

CMake (>= 3.13)

Clang (for generating IR)

VS Code (recommended for development)

C++ compiler (with C++17 or newer)

