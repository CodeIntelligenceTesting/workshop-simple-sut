#include <iostream>
#include "explore_me.h"

int main(int argc, char* argv[]) {

  if (argc != 4) {
    std::cout << "Error: Expected 3 parameters, but got " << (argc - 1) << ".\nThe first is an integer, the second is an integer, and the third is a string." << std::endl;
    return -1;
  }

  int arg1 = std::stoi(argv[1]);
  int arg2 = std::stoi(argv[2]);
  std::string arg3 = argv[3];

  exploreMe(arg1, arg2, arg3);
}
