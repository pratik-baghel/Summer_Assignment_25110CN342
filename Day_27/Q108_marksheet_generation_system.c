#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int roll;
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("enter student name: ");
    scanf("%s", name);
    printf("enter roll number: ");
    scanf("%d", &roll);

    printf("enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("\n----- marksheet -----\n");
    printf("name: %s\n", name);
    printf("roll number: %d\n", roll);
    printf("subject 1: %.2f\n", sub1);
    printf("subject 2: %.2f\n", sub2);
    printf("subject 3: %.2f\n", sub3);
    printf("subject 4: %.2f\n", sub4);
    printf("subject 5: %.2f\n", sub5);
    printf("total marks: %.2f\n", total);
    printf("percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("grade: a+\n");
    else if (percentage >= 75)
        printf("grade: a\n");
    else if (percentage >= 60)
        printf("grade: b\n");
    else if (percentage >= 40)
        printf("grade: c\n");
    else
        printf("grade: fail\n");

    return 0;
}