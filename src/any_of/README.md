# std::any\_of Demo
Demo of `std::any_of`, `std::all_of`, and `std::none_of` features, analyzing the positions of people in the Sherrill group. These functions apply a fed-in predicate function to elements of a container and return `true` if any, all, or none of the selected elements, respectively, evaluate to true for the predicate function. Also demonstrates structured binding, a more Pythonic way to initialize multiple variables. 

# File list:
- any\_of.cpp: C++ demonstration of `std::any/all/none_of` and structured binding by analyzing group members.

# Makefile
- `make exe` builds executable binaries.

# Notes
- `std::any_of` and `std::all_of` are parallels to Python's `any` and `all` functions, respectively.
- When used in range-based for-loops over C++ maps, structured binding is a parallel to Python's `dict.items()` feature. 
- Structured binding can also be used as a more Pythonic way to accept multiple return values from a function when initializing variables, in contrast to the old `std::tie` method.
- Use case in Psi4: `std::any_of` was used to find composite algorithms in the `SCF_TYPE` input string in [PR #3001](https://github.com/psi4/psi4/pull/3001).
