#include<stdio.h>

void booking(int);
void cancellation(int);
int total_seats;

int main() {
    int choice;
    printf("Enter the total number of seats: ");
    scanf("%d", &total_seats);
    printf("Enter 1 for booking\nEnter 0 for Cancelling\nEnter -1 to Exit: ");
    scanf("%d", &choice);
    if (choice == 1) {
        int req_seats;
        printf("Enter the number of seats to be booked: ");
        scanf("%d", &req_seats);
        booking(req_seats);
    }

    else if (choice == 0) {
        int cancel_seats;
        printf("Enter the number of seats to be cancelled: ");
        scanf("%d", &cancel_seats);
        cancellation(cancel_seats);
    }
    return 0;
}

void booking(int req_seats) {
    int available_seats = total_seats;
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

void cancellation(int cancel_seats) {
    int booked_seats = total_seats;
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