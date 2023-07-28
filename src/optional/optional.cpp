#include <cmath>
#include <iostream>
#include <optional>

//-- plain old square root --// 
double mysqrt_base(double input) { return sqrt(input); }

//-- safe square root, returning only if a positive number is input --//
std::optional<double> mysqrt_safe(double input) {
  return input >= 0.0 ? std::make_optional<double>(sqrt(input)) : std::nullopt;
}

int main(int argc, char *argv[]) {
  auto result_base = mysqrt_base(std::atof(argv[1]));
  std::cout << "Base value: " << result_base << std::endl;

  auto result_safe = mysqrt_safe(std::atof(argv[1]));
  std::cout << "Safe result has value? " << (result_safe.has_value() ? "Yes" : "No") << std::endl;
  std::cout << result_safe.value() << std::endl;
}
