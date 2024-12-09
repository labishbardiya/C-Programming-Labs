#include <stdio.h> 

int main() {
    int num, a, b, c;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    b = num % 10;
    a = num / 10;

    c = a;
    a = b;
    printf("The swap of the number is: %d%d", a, c);

	return 0; 
}