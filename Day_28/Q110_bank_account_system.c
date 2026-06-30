#include <stdio.h>

int main() {
    float account_balance = 10000;
    int user_choice;
    float transaction_amount;

    do {
        printf("\n1. check balance\n");
        printf("2. deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);

        switch (user_choice) {
            case 1:
                printf("your current balance is %.2f\n", account_balance);
                break;

            case 2:
                printf("enter amount to deposit: ");
                scanf("%f", &transaction_amount);
                account_balance = account_balance + transaction_amount;
                printf("deposit successful, new balance is %.2f\n", account_balance);
                break;

            case 3:
                printf("enter amount to withdraw: ");
                scanf("%f", &transaction_amount);
                if (transaction_amount > account_balance)
                    printf("insufficient balance\n");
                else {
                    account_balance = account_balance - transaction_amount;
                    printf("withdrawal successful, new balance is %.2f\n", account_balance);
                }
                break;

            case 4:
                printf("thank you for banking with us\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 4);

    return 0;
}