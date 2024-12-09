#include<stdio.h>

int main() {
    char c;
    printf("Enter a Character: ");
    scanf("%c", &c);
    printf("The case of the Character is: %s", ('A' <= c && c <= 'Z') ? "Uppercase" : "Lowercase");
    return 0;
}