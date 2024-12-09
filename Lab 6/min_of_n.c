#include <stdio.h>

int findMinimum(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int restMin = findMinimum(arr + 1, n - 1);

    return (arr[0] < restMin) ? arr[0] : restMin;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int minimum = findMinimum(numbers, n);
    printf("The minimum of the %d numbers is: %d\n", n, minimum);
    return 0;
}