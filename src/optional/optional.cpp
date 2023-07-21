#include <cmath>
#include <iostream>
#include <optional>

std::optional<double> mysqrt(double input) {
  return input >= 0.0 ? std::optional<double>(sqrt(input)) : std::nullopt;
}

int main(int argc, char *argv[]) {
  std::optional<double> result = mysqrt(std::atof(argv[1]));

  std::cout << result.value() << std::endl;
}
