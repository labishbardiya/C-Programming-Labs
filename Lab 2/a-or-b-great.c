#include<stdio.h>

int main() {
    int num1, num2;
    printf("Enter the First number: ");
    scanf("%d", &num1);

    printf("Enter the Second number: ");
    scanf("%d", &num2);

    printf("The greater number among both is: %d", (num1 < num2) ? num2 : num1);
    return 0;