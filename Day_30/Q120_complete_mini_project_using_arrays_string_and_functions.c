#include <stdio.h>
#include <string.h>

void display_all_students(char names[][50], int roll[], float marks[], int n) {
    printf("\nstudent records:\n");
    printf("name\troll\tmarks\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\n", names[i], roll[i], marks[i]);
    }
}

float calculate_average(float marks[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + marks[i];
    return sum / n;
}

int find_topper_index(float marks[], int n) {
    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[topper_index])
            topper_index = i;
    }
    return topper_index;
}

void search_student_by_roll(char names[][50], int roll[], float marks[], int n, int search_roll) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (roll[i] == search_roll) {
            printf("student found: %s, marks = %.2f\n", names[i], marks[i]);
            found = 1;
        }
    }
    if (!found)
        printf("student not found\n");
}

int main() {
    int number_of_students;
    printf("enter number of students: ");
    scanf("%d", &number_of_students);
    getchar();

    char student_name[number_of_students][50];
    int roll_number[number_of_students];
    float student_marks[number_of_students];

    for (int i = 0; i < number_of_students; i++) {
        printf("\nenter details of student %d\n", i + 1);

        printf("name: ");
        fgets(student_name[i], 50, stdin);
        student_name[i][strcspn(student_name[i], "\n")] = '\0';

        printf("roll number: ");
        scanf("%d", &roll_number[i]);

        printf("marks: ");
        scanf("%f", &student_marks[i]);
        getchar();
    }

    int user_choice;
    int search_roll;

    do {
        printf("\n1. display all students\n");
        printf("2. calculate average marks\n");
        printf("3. find topper\n");
        printf("4. search student by roll number\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);

        switch (user_choice) {
            case 1:
                display_all_students(student_name, roll_number, student_marks, number_of_students);
                break;

            case 2:
                printf("average marks of class is %.2f\n", calculate_average(student_marks, number_of_students));
                break;

            case 3: {
                int topper_index = find_topper_index(student_marks, number_of_students);
                printf("topper is %s with marks %.2f\n", student_name[topper_index], student_marks[topper_index]);
                break;
            }

            case 4:
                printf("enter roll number to search: ");
                scanf("%d", &search_roll);
                search_student_by_roll(student_name, roll_number, student_marks, number_of_students, search_roll);
                break;

            case 5:
                printf("exiting program\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 5);

    return 0;
}