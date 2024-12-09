#include<stdio.h>

int num;

int main() {
    printf("Enter the Number: ");
    scanf("%d", &num);

    printf("The required number is: %d", num / 100);
    return 0;
}