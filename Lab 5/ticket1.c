#include<stdio.h>
void booking(int);

int main() {
    int req_seats;
    printf("Enter the number of seats: ");
    scanf("%d", &req_seats);
    booking(req_seats);
    return 0;
}

void booking(int req_seats) {
    int available_seats = 20;
    if (available_seats >= req_seats) {
        printf("Your tickets are booked");
    }
    else if (available_seats == 0) {
        printf("Sorry, no seats are currently available");
    }
    else if (available_seats < req_seats) {
        printf("Out of your requested seats only %d number of seats are available", available_seats);
    }
}