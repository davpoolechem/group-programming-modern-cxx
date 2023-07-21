#include <iostream>

template <size_t N> struct Factorial {
  enum { value = N * Factorial<N - 1>::value };
};

template <> struct Factorial<0> {
  enum { value = 1 };
};

int main(int argc, char *argv[]) {
  size_t number_to_compute = 5;
  size_t result = Factorial<5>::value;

  std::cout << result << std::endl;
}
