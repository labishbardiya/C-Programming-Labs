// Q2. Take two strings from the user in two different arrays. Write a program to
// compare two strings based on their ASCII value and print the larger one. (HINT:
// stop at the first difference in characters).

#include<stdio.h>

int main() {
    char str1[100];
    char str2[100];

    fgets(str1, 200, stdin);
    fgets(str2, 200, stdin);
    
    for(int i = 0; i < 200; i++){
        str1[i] = (int) str1[i];
        str2[i] = (int) str2[i];
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) printf("%s", str1);
            else printf("%s", str2);
        }
    }
}