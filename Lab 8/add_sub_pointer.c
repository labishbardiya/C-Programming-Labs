#include<stdio.h>

void add(int *a, int *b) {
    printf("%d\n", ((*a) + (*b)));
}

void sub(int *a, int *b) {
    printf("%d", ((*a) - (*b)));
}

int main() {
    int a, b;
    printf("Enter 1st and 2nd number: ");
    scanf("%d %d", &a, &b);
    add(&a, &b);
    sub(&a, &b);
}