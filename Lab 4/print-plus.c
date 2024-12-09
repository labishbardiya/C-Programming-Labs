#include<stdio.h>

int main() {
    for(int i = 1; i < 6; i++) {
        for(int n = 1; n < i; n++) {
            printf("%c", '+');
        }
        printf("%c\n", '+');
    }
    return 0;
}