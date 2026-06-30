#include <stdio.h>
#include <string.h>

int main() {
    int total_seats = 10;
    int seats_booked = 0;
    int user_choice;
    char passenger_name[50];

    do {
        printf("\n1. book a ticket\n");
        printf("2. check available seats\n");
        printf("3. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);
        getchar();

        switch (user_choice) {
            case 1:
                if (seats_booked >= total_seats) {
                    printf("sorry, all seats are booked\n");
                } else {
                    printf("enter passenger name: ");
                    fgets(passenger_name, 50, stdin);
                    passenger_name[strcspn(passenger_name, "\n")] = '\0';
                    seats_booked++;
                    printf("ticket booked successfully for %s\n", passenger_name);
                    printf("seat number is %d\n", seats_booked);
                }
                break;

            case 2:
                printf("available seats are %d\n", total_seats - seats_booked);
                break;

            case 3:
                printf("thank you for using the booking system\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 3);

    return 0;
}