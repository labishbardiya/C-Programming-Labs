// Q1. Write a program to accept 10 numbers from a user in an array. Arrange them
// in ascending order. Also find the maximum number in the array

#include<stdio.h>

int main() {
    int str[10];
    int idxs;
    for (int i = 0; i < 10; i++) {
    scanf("%d", str+i);
    }
    for (int i = 0; i < 10; i++) {
        int small = str[i];
        idxs=i;
        for (int j = i + 1; j < 10; j++) {
            if (str[j] < small) {
                small = str[j];
                idxs=j;
            }
        }
        str[idxs] = str[i];
        str[i] = small;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", str[i]);
    }
    printf("%d", str[9]);
}