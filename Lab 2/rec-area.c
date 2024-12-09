#include<stdio.h>

int length, breadth;

int main() {
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("The Area of the required rectangle is: %d", length*breadth);
    return 0;
}