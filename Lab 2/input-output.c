#include<stdio.h>
int integer;
float floating;
char character;
char string[7];
unsigned int oct;
unsigned int hex;
double doubleint;

int main() {
    printf("Integer: ");
    scanf("%d", &integer);
    printf("Integer: %d\n", integer);

    printf("Floating: ");
    scanf("%f", &floating);
    printf("Floating: %f\n", floating);

    printf("Character: ");
    scanf(" %c", &character);
    printf("Character: %c\n", character);

    printf("String: ");
    scanf("%s", &string);
    printf("String: %s\n", string);

    printf("Octal Integer: ");
    scanf("%o", &oct);
    printf("Octal Integer: %o\n", oct);

    printf("Hex Integer: ");
    scanf("%x", &hex);
    printf("Hex Integer: %x\n", hex);

    printf("Double Integer: ");
    scanf("%lf", &doubleint);
    printf("Double Integer: %lf", doubleint);

    return 0;
}