#include <stdio.h>
#include <string.h>

int main() {
    int number_of_employees;
    printf("enter number of employees: ");
    scanf("%d", &number_of_employees);
    getchar();

    char employee_name[number_of_employees][50];
    float basic_salary[number_of_employees];
    float house_rent_allowance[number_of_employees];
    float dearness_allowance[number_of_employees];
    float total_salary[number_of_employees];

    for (int i = 0; i < number_of_employees; i++) {
        printf("\nenter details of employee %d\n", i + 1);

        printf("name: ");
        fgets(employee_name[i], 50, stdin);
        employee_name[i][strcspn(employee_name[i], "\n")] = '\0';

        printf("basic salary: ");
        scanf("%f", &basic_salary[i]);

        printf("house rent allowance: ");
        scanf("%f", &house_rent_allowance[i]);

        printf("dearness allowance: ");
        scanf("%f", &dearness_allowance[i]);

        getchar();

        total_salary[i] = basic_salary[i] + house_rent_allowance[i] + dearness_allowance[i];
    }

    printf("\nsalary report:\n");
    printf("name\tbasic salary\thouse rent allowance\tdearness allowance\ttotal salary\n");
    for (int i = 0; i < number_of_employees; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               employee_name[i],
               basic_salary[i],
               house_rent_allowance[i],
               dearness_allowance[i],
               total_salary[i]);
    }

    return 0;
}