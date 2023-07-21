# constexpr Demo 
Demo of `constexpr` feature, using compile-time computation of factorials.

# File list:
- constexpr.cpp: Factorial impl at compile-time using `constexpr`
- noconstexpr.cpp: Factorial impl at runtime 
- expr.cpp: "Factorial impl" using hard-coded value 
- tmp.cpp: Factorial impl at compile-time using template metaprogramming

# Makefile
- `make asm` builds disassembly files
- `make exe` builds executable binaries.
- `make` builds both disassembly and executable files.

# Notes
- This feature has no real corollary in Python as far as I am aware, since Python is not a compiled language. :) 
- Note that the disassembly of constexpr.cpp, expr.cpp, and tmp.cpp are all the same!
