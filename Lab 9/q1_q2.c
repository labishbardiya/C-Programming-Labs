#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of Matrix: ");
    scanf("%d", &n);
    
    int arr1[n][n];
    printf("Enter the Elements of First Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the %d %d element: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[n][n];
    printf("Enter the Elements of Second Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the %d %d element: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr3[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    printf("Printing the Elements of the Sum Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}