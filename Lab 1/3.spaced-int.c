#include<stdio.h>

// Q3. Input two integers 01777 as octal and 0xa08c as hexadecimal. WAP to print them 10 spaces apart.

int main() {
    int octalNumber = 01777;
    int hexNumber = 0xa08c;
    printf("%o          %x", octalNumber, hexNumber);

    return 0;
}