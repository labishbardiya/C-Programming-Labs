// Q5. Write a program to copy the one string, str2 into another string, str1. Display
// both the strings.
// Str1: World
// Str2: Hi
// Output Str1:Hirld
// Handle all the test cases  
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    
    printf("Enter str1: ");
    scanf("%s", str1);
    printf("Enter str2: ");
    scanf("%s", str2);


    for (i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }
    str1[i] = '\0'; 


    printf("Str1: %s\n", str1);
    

    return 0;
}
