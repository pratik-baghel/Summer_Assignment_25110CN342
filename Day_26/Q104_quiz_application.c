#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("question 1: what is the capital of france?\n");
    printf("1. london  2. paris  3. berlin  4. madrid\n");
    printf("enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("correct!\n");
        score++;
    } else {
        printf("wrong answer\n");
    }

    printf("\nquestion 2: how many days in a week?\n");
    printf("1. 5  2. 6  3. 7  4. 8\n");
    printf("enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("correct!\n");
        score++;
    } else {
        printf("wrong answer\n");
    }

    printf("\nquestion 3: what is 5 + 3?\n");
    printf("1. 7  2. 8  3. 9  4. 10\n");
    printf("enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("correct!\n");
        score++;
    } else {
        printf("wrong answer\n");
    }

    printf("\nyour final score is %d out of 3\n", score);

    return 0;
}