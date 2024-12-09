#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Enter C: ");
    scanf("%d", &c);

    int mid = (a + b + c)/3;

    if (a >= mid & b >= mid) printf("C is Smaller");
    if (a >= mid & c >= mid) printf("B is Smaller");
    else if (b >= mid & c >= mid) printf("A is Smaller");
}