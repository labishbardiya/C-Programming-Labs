#include <stdio.h>

int main() {
    int num, choice, factorial = 1;

    printf("Enter 1 to find if number is Even/Odd. \n");
    printf("Enter 2 to find if number is Prime. \n");
    printf("Enter 3 to find factorial of number. \n");
    printf("Enter 4 to Exit. \n");
    printf("Choose the operation to be performed (1, 2, 3 or 4): \n");

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
    case 1:
        if (num % 2 == 0) {
            printf("The number is Even.");
        }
        else {
            printf("The number is Odd");
        }
        break;
    case 2:
    if (num == 2) {
                printf("2 is a Prime Number!");
            }
    else {
        for(int i = 2 ; i <= num/2 ; i++) {
            if (num % 2 == 0) {
                printf("The number is not Prime.");
                break;
            }
            else if(i == num/2) {
                printf("The number is prime.");
            }
        }
            }
        break;
    case 3:
        for(int start = 1 ; start <= num ; start++) {
            factorial = factorial * start;
        }
        printf("%d\n", factorial);
        break;
    default:
        break;
    }
}