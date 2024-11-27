## Project Description

This is a simple CMake project configured with **cifuzz** and has three 
Fuzz Test.

## Run
The Fuzz Test should trigger a shift exponent, a stack buffer overflow and a out_of_bounds.

```bash
cifuzz run my_fuzz_test
```

## Findings
List all findings
```bash
cifuzz finding <finding name>
```

Obtain information to understand the finding

```bash
cifuzz finding <finding name>
```

## Assess
Manage the findings

```bash
cifuzz assess <finding name>
```

## Coverage
Calculate the coverage achieved for this project

```bash
cifuzz coverage my_fuzz_test
```
