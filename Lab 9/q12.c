#include <stdio.h>

int generateID() {
    static int id = 0;
    id++;
    return id;
}

int main() {
    printf("Generating 10 unique sequential IDs:\n");
    for (int i = 0; i < 10; i++) {
        printf("ID %d: %d\n", i + 1, generateID());
    }
    return 0;
}