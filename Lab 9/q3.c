#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of Matrix: ");
    scanf("%d", &n);
    
    int arr[n][n];
    printf("Enter the Elements of Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the %d %d element: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    printf("%d", sum);
}