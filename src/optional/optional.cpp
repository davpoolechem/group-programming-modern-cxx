#include <cmath>
#include <iostream>
#include <optional>

std::optional<double> mysqrt(double input) {
  return input >= 0.0 ? std::make_optional<double>(sqrt(input)) : std::nullopt;
}

int main(int argc, char *argv[]) {
  std::optional<double> result = mysqrt(std::atof(argv[1]));

  std::cout << (result.has_value() ? "Yes" : "No") << std::endl;
  std::cout << result.value() << std::endl;
}
