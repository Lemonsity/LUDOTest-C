# LUDOTest for C

This is a simple API that will help you with testing your C code

## Functions
All functions have the parameters `int index, char * message`. These are used to identify the index of the test and prompt error message when test failed.

All `Equal` functions come in the form of `Equal(result, expect, index, message)`. Where the test will be considered a fail if the value of `result` doesn't equal the value of `expect`.

There are also `Smaller/Greater` functions in the form of `Smaller/Greater(a, b, index, message)`, where `a` is either expected to be **smaller/greater** than `b`.

`printfResult` function will display the amount of test passed and failed when the function is called

## How to use
Place the `Unittest.c` file in the same directory as the file you are testing.
You can choose to either add a main function in `Unittest.c` itself and call the functions, or you can create a few `.c` file for testing.
If you choose the latter, remember to include the line `#include "Unittest.c"` on top.

## Example
Compile and run `Example.c` to see the API in action 