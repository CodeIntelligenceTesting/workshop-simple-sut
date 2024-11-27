## Project Description

This is a simple CMake project

## Build executable and test cases

```bash
cmake -S . -B build
cmake --build build
```

## Execute binary

```bash
./build/src/cmake_example 1 1 A
```

## Execute test cases

```bash
./build/test/explore_me_test
# or 
cd build && ctest --verbose
```
