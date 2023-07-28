#include <iostream>

//-- factorial computed at run-time using standard recursive approach --//
size_t factorial(const size_t N) {
  if (N <= 1) {
    return 1;
  } else {
    return N * factorial(N - 1);
  }
}

int main(int argc, char *argv[]) {
  size_t result = factorial(5); // evaluates to 5! = 120 at run-time

  std::cout << result << std::endl;
}
