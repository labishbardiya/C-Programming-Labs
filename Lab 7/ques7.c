#include <stdio.h>
void sortString(char *str) {
    int i, j;
    char temp;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    sortString(str);

    printf("Sorted string: %s\n", str);
    return 0;
}