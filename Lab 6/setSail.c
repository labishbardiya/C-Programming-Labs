# include<stdio.h>

void sail_southEast(int *latitude, int *longitude) {
    *latitude -= 1;
    *longitude += 1;
}

void sail_northEast(int *latitude, int *longitude) {
    *latitude += 1;
    *longitude += 1;
}

void sail_northWest(int *latitude, int *longitude) {
    *latitude += 1;
    *longitude -= 1;
}

void sail_southWest(int *latitude, int *longitude) {
    *latitude -= 1;
    *longitude -= 1;
}

int main() {
    int latitude, longitude;

    printf("Enter Latitude: ");
    scanf("%d", &latitude);

    printf("Enter Longitude: ");
    scanf("%d", &longitude);

    sail_southEast(&latitude, &longitude);
    sail_southEast(&latitude, &longitude);
    sail_northEast(&latitude, &longitude);
    sail_northWest(&latitude, &longitude);
    sail_southWest(&latitude, &longitude);

    printf("%d, %d", latitude, longitude);
    return 0;
}