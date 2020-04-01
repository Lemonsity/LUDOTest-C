#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define _USE_MATH_DEFINES

#include "LUDOTest.c"

int sum(int a, int b) {
    return a + b;
}

int main() {
    boolEqual(true, true, 1, "Test bool passed");
    boolEqual(true, false, 2, "Test bool failed");
    
    intEqual(sum(1, 2), 3, 4, "Test sum passed");
    intEqual(sum(2, 2), 5, 4, "Test sum failed");

    printResult();
    return 0;
}