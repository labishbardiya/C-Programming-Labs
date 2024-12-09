// Q4. Write a program to extract a substring. Take a string from the user and save
// it in an array. Take the position from where the substring is to be extracted and
// the length of the substring to be extracted. Display the substring. Handle all the
// test cases.
#include <stdio.h>
#include<string.h>

int main()
{
    char str[100], substr[100];
    int start, length, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the starting position: ");
    scanf("%d", &start);
    printf("Enter the length of substring: ");
    scanf("%d", &length);
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    for (i = 0; i < length; i++)
    {
        substr[i] = str[start + i];
    }
    substr[i] = '\0';

    printf("Substring: %s\n", substr);

    return 0;
}