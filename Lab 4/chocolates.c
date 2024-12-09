#include<stdio.h>

int main() {
    int n, yn, how_many;

    printf("The number of Chocolates: ");
    scanf("%d", &n);

    printf("Take a Chocolate? Write 1/0 for Yes/No Respectively: ");
    scanf("%d", &yn);

    printf("How Many? ");
    scanf("%d", &how_many);

    if(yn == 0) {}
    else{
        if(how_many > n) {
            printf("Not enough chocolates");
        }
        else if(how_many < 0) {
            printf("You surely can eat at least one");
        }
        else if(how_many <= n) {
            printf("Chocolates left on box: %d", n - how_many);
        }
    }
    return 0;
}