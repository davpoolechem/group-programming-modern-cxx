#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>

//-- check if any member in "members" is of type "member_type" --//
//-- using both a standard implementation and with std::any_of --//
std::tuple<bool, bool>
impls_any_of(const std::unordered_map<std::string, std::string> &members,
             std::string member_type) {
  //-- traditional implementation --//
  bool has_member_type_base = false;

  for (auto &[member, role] : members) {
    has_member_type_base = has_member_type_base | role == member_type;
  }

  //-- std::any_of implementation --//
  bool has_member_type_std =
      std::any_of(members.cbegin(), members.cend(),
                  [&](const auto &pair) { return pair.second == member_type; });

  return std::tie(has_member_type_base, has_member_type_std);
}

//-- check if all members in "members" are of type "member_type" --//
bool impl_all_of(std::unordered_map<std::string, std::string> &members,
                 std::string member_type) {
  return std::all_of(members.cbegin(), members.cend(), [&](const auto &pair) {
    return pair.second == member_type;
  });
}

//-- check if no members in "members" are of type "member_type" --//
bool impl_none_of(std::unordered_map<std::string, std::string> &members,
                  std::string member_type) {
  return std::none_of(members.cbegin(), members.cend(), [&](const auto &pair) {
    return pair.second == member_type;
  });
}

int main(int argc, char *argv[]) {
  std::unordered_map<std::string, std::string> members = {
      {"Sherrill", "Professor"}, {"Lori", "Scientist"},    {"David", "Postdoc"},
      {"Phillip", "Graduate"},   {"Caroline", "Graduate"}, {"Luke", "Graduate"},
      {"Austin", "Graduate"},    {"Andy", "Undergrad"}};

  std::string member_type{argv[1]};

  //-- group analysis pre-Andy --//
  const auto &[any_of_base, any_of_std] = impls_any_of(members, member_type);

  std::cout << "Any " << member_type << "? " << (any_of_base ? "Yes" : "No")
            << std::endl;
  std::cout << "Any " << member_type << "? " << (any_of_std ? "Yes" : "No")
            << std::endl;
  std::cout << "All " << member_type << "? "
            << (impl_all_of(members, member_type) ? "Yes" : "No") << std::endl;
  std::cout << "No " << member_type << "? "
            << (impl_none_of(members, member_type) ? "Yes" : "No") << std::endl
            << std::endl;

  //-- Andy goes to UGA --//
  members.erase("Andy");
  std::cout << "Bye Andy :(" << std::endl;

  //-- group analysis post-Andy --//
  const auto &[any_of_base_b, any_of_std_b] =
      impls_any_of(members, member_type);

  std::cout << "Any " << member_type << "? " << (any_of_base_b ? "Yes" : "No")
            << std::endl;
  std::cout << "Any " << member_type << "? " << (any_of_std_b ? "Yes" : "No")
            << std::endl;
  std::cout << "All " << member_type << "? "
            << (impl_all_of(members, member_type) ? "Yes" : "No") << std::endl;
  std::cout << "No " << member_type << "? "
            << (impl_none_of(members, member_type) ? "Yes" : "No") << std::endl
            << std::endl;
}
