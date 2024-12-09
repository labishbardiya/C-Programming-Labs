#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("test.txt", "r+");
    // a
    printf("Position of the stream pointer when the file is opened: %ld\n", ftell(file));
    // b
    fseek(file, 9, SEEK_SET);
    int ch = fgetc(file);
    if (ch != EOF) {
        printf("Character at the 10th position: %c\n", ch);
    }
    // c
    fseek(file, 0, 0);
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    // d
    printf("Position of the stream pointer after reading: %ld\n", ftell(file));
    // e
    int pos = ftell(file);
    fseek(file, 0, 0);
    char c[100]; int i = 0;
    while ((ch = fgetc(file)) != EOF) {
        c[i] = toupper(ch);
        i++;
    }
    fseek(file, 0, 0);
    fwrite(c, sizeof(char)*i, 1, file);
    fclose(file);
    return 0;
}