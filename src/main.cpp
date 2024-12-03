#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Incorrect usage. Required format...." << "\n";
    std::cerr << "tree <input.tree>" << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << argv[1] << std::endl;
  return EXIT_SUCCESS;

  std::string program;
  {
    std::stringstream contents;
    std::fstream input(argv[1], std::ios::in);
    contents << input.rdbuf();
    program = contents.str();
  }

  std::cout << program << "\n";

  return EXIT_SUCCESS;
}