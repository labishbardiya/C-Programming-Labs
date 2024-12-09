#include<stdio.h>

int main() {
    int num, a, b;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    b = num % 10;
    a = num / 10;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("The swap of the number is: %d%d", a, b);

    return 0;
}