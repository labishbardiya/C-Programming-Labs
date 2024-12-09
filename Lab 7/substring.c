// Q3. Write a program to find a substring. Take a string from the user and save it
// in an array. Take the substring (to be found) from the user. If the substring is
// present, display the starting position. If the substring is not found display
// “Substring not found.”

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int position;

    printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
    
    printf("Enter the substring to be found: ");
    fgets(substr, sizeof(substr), stdin);

    char *ptr = strstr(str, substr);
    if (ptr == NULL) {
        position = strchr(str, *ptr) - strlen(str);
        printf("Substring found at position: %d\n", position);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}