# include <stdio.h>

int main() {
    int integer, k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    for(integer = 1; integer <= 10; integer++)
    {   
        if (k == 0){
            break;
        }
        printf("%.1f \n", (float) integer / k);
    }
}