#include <stdio.h>

int main() {
    int balance = 5000;
    int choice, amount;

    do {
        printf("\n1. check balance\n");
        printf("2. deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("your balance is %d\n", balance);
                break;

            case 2:
                printf("enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("amount deposited, new balance = %d\n", balance);
                break;

            case 3:
                printf("enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance)
                    printf("insufficient balance\n");
                else {
                    balance -= amount;
                    printf("amount withdrawn, new balance = %d\n", balance);
                }
                break;

            case 4:
                printf("thank you for using the atm\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}