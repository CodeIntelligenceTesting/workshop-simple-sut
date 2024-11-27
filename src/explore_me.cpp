#include "explore_me.h"
#include <cstdio>
#include <cstring>
using namespace std;

// just a function with multiple paths that can be discoverd by a fuzzer
int exploreMe(int a, int b, string c) {
  if (a >= 20000) {
    if (b >= 2000000) {
      if (b - a < 100000) {
        int n = 23;
        n <<= a;

        char hello[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
        char world[8] = {'W', 'o', 'r', 'l', 'd', '!','!', '\0'};
        if (c.find("FUZZING") != std::string::npos) {
          strcpy(world, c.c_str());
        }
        else if(c == "seg-fault"){
          char arr[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
          int pos = (b-a)/5;
          arr[pos] = 'n';
          printf("Character %c written at position %d.\nNew string: %s\n", arr[pos], pos, arr);
        }
        printf("%s\n", hello);
        printf("%s\n", world);
      }
    }
  }
  return 0;
}
