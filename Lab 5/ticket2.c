#include<stdio.h>
void cancellation(int);

int main() {
    int cancel_seats;
    printf("Enter the number of seats to be cancelled: ");
    scanf("%d", &cancel_seats);
    cancellation(cancel_seats);
    return 0;
}

void cancellation(int cancel_seats) {
    int booked_seats = 10;
    if (booked_seats == cancel_seats) {
        printf("All the seats cancelled");
    }
    else if (booked_seats > cancel_seats) {
        printf("Seats booked by you = %d\nSeats Cancelled = %d\nSeats left = %d", booked_seats, cancel_seats, booked_seats-cancel_seats);
    }
    else {
        printf("You have only booked %d seats, %d seats cannot be cancelled", booked_seats, cancel_seats);
    }
}