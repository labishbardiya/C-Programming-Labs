#include <stdio.h>

typedef union {
    int choco_chip;
    float cream;
} Flavor;

typedef struct {
    int flour;
    int butter;
    int eggs;
    int baking_powder;
    int flavor_type; // 1 for choco_chip, 2 for cream
    Flavor flavor_amount;
} Cupcake;

void bake(Cupcake cupcake) {
    printf("Cupcake Details:\n");
    printf("Flour: %d\n", cupcake.flour);
    printf("Butter: %d\n", cupcake.butter);
    printf("Eggs: %d\n", cupcake.eggs);
    printf("Baking Powder: %d\n", cupcake.baking_powder);
    
    if (cupcake.flavor_type == 1) {
        printf("Flavor: Choco-chip\n");
        printf("Choco-chip amount: %d\n", cupcake.flavor_amount.choco_chip);
    } else if (cupcake.flavor_type == 2) {
        printf("Flavor: Cream\n");
        printf("Cream amount: %.2f\n", cupcake.flavor_amount.cream);
    } else {
        printf("Invalid flavor type.\n");
    }
}

int main() {
    Cupcake cupcake;
    
    printf("Enter amount of flour: ");
    scanf("%d", &cupcake.flour);
    
    printf("Enter amount of butter: ");
    scanf("%d", &cupcake.butter);
    
    printf("Enter number of eggs: ");
    scanf("%d", &cupcake.eggs);
    
    printf("Enter amount of baking powder: ");
    scanf("%d", &cupcake.baking_powder);
    
    printf("Enter flavor type (1 for Choco-chip, 2 for Cream): ");
    scanf("%d", &cupcake.flavor_type);
    
    if (cupcake.flavor_type == 1) {
        printf("Enter amount of Choco-chip: ");
        scanf("%d", &cupcake.flavor_amount.choco_chip);
    } else if (cupcake.flavor_type == 2) {
        printf("Enter amount of Cream: ");
        scanf("%f", &cupcake.flavor_amount.cream);
    } else {
        printf("Invalid flavor type.\n");
    }
    
    bake(cupcake);
    
    return 0;
}