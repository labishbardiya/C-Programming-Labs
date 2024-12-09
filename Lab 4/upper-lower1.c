#include<stdio.h>
char s[20];

int main() {
    printf("Enter 20 characters: ");
    scanf("%s", &s);
    int i = 0;
    int upper = 0, lower = 0, others = 0;
    while(i < 20) {
        if ('A' <= s[i] && 'Z' >= s[i]) {
            upper += 1;
        }
        else if('a' <= s[i] && 'z' >= s[i]) {
            lower += 1;
        }
        else {
            others += 1;
        }
        i++;
    }

    if (upper > lower) {
        printf("The Number of Upper Characters is higher!");
    }
    else if (lower < upper) {
        printf("The Number of lower Characters is higher!");
    }
    else if (upper == lower){
        printf("The Number of lower and Upper Characters is equal!");
    }
    else if (others != 0) {
        printf("Alphabets Only!!");
    }
    return 0;
}