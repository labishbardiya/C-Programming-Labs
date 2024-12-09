#include<stdio.h>

void findmax(int arr[]) {
    int max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    printf("\nMaximum number is: %d\n", max);
}

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &arr[i]);
    }
    findmax(arr);
    return 0;
}