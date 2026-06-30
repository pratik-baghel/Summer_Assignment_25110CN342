#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("enter number of students: ");
    scanf("%d", &n);

    char names[n][50];
    int roll[n];
    float marks[n];

    for (int i = 0; i < n; i++) {
        printf("\nenter details of student %d\n", i + 1);
        printf("name: ");
        scanf("%s", names[i]);
        printf("roll number: ");
        scanf("%d", &roll[i]);
        printf("marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nstudent records:\n");
    printf("name\troll\tmarks\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\n", names[i], roll[i], marks[i]);
    }

    return 0;
}