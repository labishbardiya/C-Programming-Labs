#include<stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter the three numbers with spaces: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("The greatest number is: %d", (n1 > n2) ? ((n1 > n3) ? n1 : n3) : (n2 > n3) ? n2 : n3);

    return 0;
}