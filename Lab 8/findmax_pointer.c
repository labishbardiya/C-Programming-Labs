#include<stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 9; i++) {
        scanf("%d\n", &arr[i]);
    }

	int *max = arr;

    for (int j = 1; j < 9; j++) {
        if (*max < arr[j]) {
            max = &arr[j];
        }
    }

	printf("\nMaximum number is: %d\n", *max);

}