#include<stdio.h>
int main() {
    char c[13] = "Hello, World";

    printf("|%s|\n", c);
    printf("|%.10s|\n", c);
    printf("|%-15s|\n", c);
    printf("|%15s|\n", c);
    printf("|%13.10s|\n", c);
    printf("|%-13.10s|\n", c);

    return 0;
}