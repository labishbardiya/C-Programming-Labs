#include<stdio.h>

int day, month, year;

int main() {
    printf("Enter dd-mm-yyyy: ");
    scanf("%d-%d-%d: ", &day, &month, &year);

    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d", year);

    return 0;
}