#include <iostream>

//-- factorial computed at compile-time using template metaprogramming --//
template <size_t N> struct Factorial {
  enum { value = N * Factorial<N - 1>::value };
};

template <> struct Factorial<0> {
  enum { value = 1 };
};

int main(int argc, char *argv[]) {
  size_t number_to_compute = 5;
  size_t result = Factorial<5>::value; // evaluates to 5! = 120 at compile-time

  std::cout << result << std::endl;
}
