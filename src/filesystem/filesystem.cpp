#include <filesystem>
#include <iostream>
#include <vector>

namespace fs = std::filesystem;

class OS {
  //-- os.path submodule --//
  class Path {
  public:
    //-- import os.path --//
    Path() = default;

    //-- os.path.isdir --//
    bool isdir(fs::path dir) { return fs::is_directory(dir); }
  };

public:
  Path path;

  //-- import os --//
  OS() = default;

  //-- os.getcwd() --//
  fs::path getcwd() { return fs::current_path(); }

  // -- os.listdir() --//
  std::vector<fs::path> listdir(fs::path dir = fs::current_path()) {
    std::vector<fs::path> dir_list;
    for (auto path : fs::directory_iterator(dir)) {
      // for (auto path : fs::recursive_directory_iterator(dir)) {
      dir_list.push_back(fs::absolute(path).filename());
    }

    return dir_list;
  }
};

int main(int argc, char *argv[]) {
  //-- import os --//
  OS os;

  //-- os.getcwd() --//
  // python equivalent output:
  // '/home/davpoolechem2/Codes/group-programming-modern-cxx/src/filesystem'
  std::cout << "os.getcwd(): " << os.getcwd() << std::endl;

  // -- os.listdir() --//
  // python equivalent output: '[\'Makefile', 'bin', 'filesystem.cpp']
  std::cout << "os.listdir(): [";
  for (auto path : os.listdir()) {
    std::cout << path << ", ";
  }
  std::cout << "] " << std::endl;

  // -- os.path.isdir() --//
  // python equivalent output: False; True
  std::cout << "os.path.isdir(\"filesystem.cpp\"): "
            << (os.path.isdir("filesystem.cpp") ? "True" : "False")
            << std::endl;
  std::cout << "os.path.isdir(\"bin\"): "
            << (os.path.isdir("bin") ? "True" : "False") << std::endl;
}
