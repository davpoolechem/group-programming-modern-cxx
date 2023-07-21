#include <cmath>
#include <iostream>
#include <optional>

double mysqrt(double input) {
  return sqrt(input);
}

int main(int argc, char *argv[]) {
  double result = mysqrt(std::atof(argv[1]));

  std::cout << result << std::endl;
}
