#include <stdio.h>
#include <string.h>

int main() {
    int number_of_employees;
    printf("enter number of employees: ");
    scanf("%d", &number_of_employees);
    getchar();

    char employee_name[number_of_employees][50];
    int employee_id[number_of_employees];
    float employee_salary[number_of_employees];

    for (int i = 0; i < number_of_employees; i++) {
        printf("\nenter details of employee %d\n", i + 1);

        printf("name: ");
        fgets(employee_name[i], 50, stdin);
        employee_name[i][strcspn(employee_name[i], "\n")] = '\0';

        printf("employee id: ");
        scanf("%d", &employee_id[i]);

        printf("salary: ");
        scanf("%f", &employee_salary[i]);
        getchar();
    }

    int user_choice;
    int search_id;

    do {
        printf("\n1. display all employees\n");
        printf("2. search employee by id\n");
        printf("3. find highest paid employee\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);

        switch (user_choice) {
            case 1:
                printf("\nemployee records:\n");
                printf("name\tid\tsalary\n");
                for (int i = 0; i < number_of_employees; i++) {
                    printf("%s\t%d\t%.2f\n", employee_name[i], employee_id[i], employee_salary[i]);
                }
                break;

            case 2:
                printf("enter employee id to search: ");
                scanf("%d", &search_id);
                for (int i = 0; i < number_of_employees; i++) {
                    if (employee_id[i] == search_id) {
                        printf("employee found: %s, salary = %.2f\n", employee_name[i], employee_salary[i]);
                    }
                }
                break;

            case 3: {
                int highest_index = 0;
                for (int i = 1; i < number_of_employees; i++) {
                    if (employee_salary[i] > employee_salary[highest_index])
                        highest_index = i;
                }
                printf("highest paid employee is %s with salary %.2f\n", employee_name[highest_index], employee_salary[highest_index]);
                break;
            }

            case 4:
                printf("exiting program\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 4);

    return 0;
}