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
        n <<= 32;

        char hello[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
        char world[7] = {'W', 'o', 'r', 'l', 'd', '!', '\0'};
        if (c == "FUZZING") {
          strcpy(world, "exampleWorkshop");
        }
        else if(c == "seg-fault"){
          char arr[5] = {'a', 'b', 'c', 'd', 'e'};
          int pos = (b-a)/5;
          printf("Char at position %d: %c\n", pos, arr[pos]);
        }
        printf("%s\n", hello);
        printf("%s\n", world);
      }
    }
  }
  return 0;
}
