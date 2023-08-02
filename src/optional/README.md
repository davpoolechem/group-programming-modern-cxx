# std::optional Demo
Demo of `std::optional` feature, using safer computation of square roots 

# File list:
- optional.cpp: Safer `sqrt` impl using `std::optional` 

# Makefile
- `make exe` builds executable binaries.

# Notes
- This feature is a parallel of the `Optional` type seen in Python.
- Psi4 use case: [CompositeJK](github.com/davpoolechem/psi4/blob/dpoole34/compositejk-scftype-optional/psi4/src/psi4/libfock/CompositeJK.cc) can use `std::optional` to handle the K algorithm option. 
