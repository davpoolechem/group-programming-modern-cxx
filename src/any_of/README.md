# std::any\_of Demo
Demo of `std::any_of` feature, analyzing the positions of people in the Sherrill group. Also demonstrates the similar features `std::all_of` and `std::none_of`, as well as structured binding. 

# File list:
- any\_of.cpp: C++ demonstration of `std::any/all/none_of` by analyzing group members.

# Makefile
- `make exe` builds executable binaries.

# Notes
- `std::any_of` and `std::all_of` are parallels to Python's `any` and `all` functions, respectively.
- When used in range-based for-loops over C++ maps, structured binding is a parallel to Python's `dict.items()` feature. 
- Structured binding can also be used as a more Pythonic way to accept multiple return values from a function when initializing variables, in contrast to the old `std::tie` method.
