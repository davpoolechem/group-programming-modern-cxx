#include <iostream>

template<size_t N>
constexpr size_t factorial() {
  if constexpr (N <= 1) {
    return 1;
  } else {
    return N * factorial<N-1>();
  }
}

int main(int argc, char* argv[]) {
  constexpr size_t number_to_compute = 5;
  constexpr size_t result = factorial<number_to_compute>(); 

  std::cout << result << std::endl;
}
