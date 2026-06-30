#include <stdio.h>
#include <string.h>

int main() {
    int number_of_students;
    printf("enter number of students: ");
    scanf("%d", &number_of_students);
    getchar();

    char student_name[number_of_students][50];
    int roll_number[number_of_students];
    float student_marks[number_of_students][3];
    float total_marks[number_of_students];
    float percentage[number_of_students];

    for (int i = 0; i < number_of_students; i++) {
        printf("\nenter details of student %d\n", i + 1);

        printf("name: ");
        fgets(student_name[i], 50, stdin);
        student_name[i][strcspn(student_name[i], "\n")] = '\0';

        printf("roll number: ");
        scanf("%d", &roll_number[i]);

        printf("enter marks of 3 subjects: ");
        scanf("%f %f %f", &student_marks[i][0], &student_marks[i][1], &student_marks[i][2]);
        getchar();

        total_marks[i] = student_marks[i][0] + student_marks[i][1] + student_marks[i][2];
        percentage[i] = total_marks[i] / 3;
    }

    printf("\nstudent report:\n");
    printf("name\troll number\ttotal marks\tpercentage\n");
    for (int i = 0; i < number_of_students; i++) {
        printf("%s\t%d\t%.2f\t%.2f\n", student_name[i], roll_number[i], total_marks[i], percentage[i]);
    }

    return 0;
}