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
    if (ptr != NULL) {
        position = ptr - str;
        printf("Substring found at position: %d\n", position);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}