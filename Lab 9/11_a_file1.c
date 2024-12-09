#include <stdio.h>
#include "11_a_file2.c"

extern float Pi;

int main() {
    printf("Value of Pi from file2.c: %.2f\n", Pi);
    return 0;
}