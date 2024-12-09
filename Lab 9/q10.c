#include <stdio.h>

#define PI 3.14
#define VOLUME(radius, height) (PI * (radius) * (radius) * (height))

int main() {
    double radius, height;

    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    double volume = VOLUME(radius, height);

    printf("The volume of the cylinder is: %.2lf\n", volume);

    return 0;
}