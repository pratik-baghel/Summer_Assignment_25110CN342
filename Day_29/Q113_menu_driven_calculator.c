#include <stdio.h>

int main() {
    int user_choice;
    float first_number, second_number, calculation_result;

    do {
        printf("\n1. addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. division\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);

        if (user_choice >= 1 && user_choice <= 4) {
            printf("enter first number: ");
            scanf("%f", &first_number);
            printf("enter second number: ");
            scanf("%f", &second_number);
        }

        switch (user_choice) {
            case 1:
                calculation_result = first_number + second_number;
                printf("result is %.2f\n", calculation_result);
                break;

            case 2:
                calculation_result = first_number - second_number;
                printf("result is %.2f\n", calculation_result);
                break;

            case 3:
                calculation_result = first_number * second_number;
                printf("result is %.2f\n", calculation_result);
                break;

            case 4:
                if (second_number == 0)
                    printf("division by zero is not allowed\n");
                else {
                    calculation_result = first_number / second_number;
                    printf("result is %.2f\n", calculation_result);
                }
                break;

            case 5:
                printf("exiting calculator\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 5);

    return 0;
}