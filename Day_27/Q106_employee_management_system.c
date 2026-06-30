#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("enter number of employees: ");
    scanf("%d", &n);

    char names[n][50];
    int id[n];
    float salary[n];

    for (int i = 0; i < n; i++) {
        printf("\nenter details of employee %d\n", i + 1);
        printf("name: ");
        scanf("%s", names[i]);
        printf("employee id: ");
        scanf("%d", &id[i]);
        printf("salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\nemployee records:\n");
    printf("name\tid\tsalary\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\n", names[i], id[i], salary[i]);
    }

    return 0;
}