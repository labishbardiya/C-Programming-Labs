#include<stdio.h>

int main() {
    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    int mid = (a + b)/2;

    if(a >= mid) printf("B is Smaller");
    else printf("A is Smaller");
}